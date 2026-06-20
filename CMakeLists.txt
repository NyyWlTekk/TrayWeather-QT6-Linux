cmake_minimum_required (VERSION 3.16)

project(TrayWeather)

set (TRAYWEATHER_VERSION_MAJOR 1)
set (TRAYWEATHER_VERSION_MINOR 37)
set (TRAYWEATHER_VERSION_PATCH 2)

set (UPDATER_VERSION_MAJOR 1)
set (UPDATER_VERSION_MINOR 0)
set (UPDATER_VERSION_PATCH 0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

string(TIMESTAMP CURRENT_YEAR "%Y")
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets Network Charts WebEngineWidgets LinguistTools)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wno-deprecated")

if (CMAKE_BUILD_TYPE MATCHES Debug)
  find_package(Qt6 COMPONENTS Test REQUIRED)
  set(CORE_EXTERNAL_LIBS ${CORE_EXTERNAL_LIBS} Qt6::Test)
endif (CMAKE_BUILD_TYPE MATCHES Debug)

include_directories(
  ${CMAKE_SOURCE_DIR}
  ${PROJECT_BINARY_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_BINARY_DIR}
  ${CMAKE_CURRENT_BINARY_DIR}
  ${CMAKE_SOURCE_DIR}/fake_win
)

set(TRANSLATIONS_TS_FILES
  languages/es_ES.ts
  languages/ru_RU.ts
  languages/de_DE.ts
  languages/fr_FR.ts
  languages/zh_CN.ts
  languages/pt_BR.ts
  languages/uk_UA.ts
  languages/sl_SI.ts
  languages/ko_KR.ts  
  languages/pl_PL.ts
  languages/tr_TR.ts
  languages/it_IT.ts
  languages/hu_HU.ts  
)

qt_add_translation(TRANSLATIONS_QM_FILES ${TRANSLATIONS_TS_FILES})
add_custom_target(translations DEPENDS ${TRANSLATIONS_QM_FILES})
configure_file(languages/translations.qrc ${CMAKE_BINARY_DIR} COPYONLY)

qt_add_resources(RESOURCES
  rsc/resources.qrc
  rsc/darktheme/style.qrc
  ${CMAKE_BINARY_DIR}/translations.qrc
)

qt_wrap_ui(CORE_UI
  dialogs/ConfigurationDialog.ui
  dialogs/AboutDialog.ui
  dialogs/WeatherDialog.ui
  dialogs/LocationFinderDialog.ui
  widgets/WeatherWidget.ui
  widgets/PollutionWidget.ui
  widgets/UVWidget.ui
  widgets/AlertsWidget.ui
  widgets/ErrorWidget.ui
  widgets/CurrentWeatherWidget.ui
)
	
set (CORE_SOURCES
  ${CORE_SOURCES}
  ${RESOURCES}
  ${CORE_UI}
  ${TRANSLATIONS_QM_FILES}
  Main.cpp
  Utils.cpp
  TrayWeather.cpp  
  dialogs/AboutDialog.cpp
  dialogs/ConfigurationDialog.cpp
  dialogs/LocationFinderDialog.cpp
  dialogs/WeatherDialog.cpp
  widgets/WeatherWidget.cpp
  widgets/PollutionWidget.cpp
  widgets/UVWidget.cpp
  widgets/AlertsWidget.cpp
  widgets/CurrentWeatherWidget.cpp
  Provider.cpp
  Providers/OWM25.cpp
  Providers/OWM30.cpp
  Providers/OpenMeteo.cpp
  Providers/WeatherAPI.cpp
)

set(CORE_EXTERNAL_LIBS
  ${CORE_EXTERNAL_LIBS}
  Qt6::Charts
  Qt6::Widgets
  Qt6::Network
  Qt6::WebEngineWidgets
)

add_executable(TrayWeather ${CORE_SOURCES})
target_link_libraries (TrayWeather PRIVATE ${CORE_EXTERNAL_LIBS})

target_compile_definitions(TrayWeather PRIVATE
    "localtime_s(ts,tim)=(localtime_r(tim,ts)==nullptr)"
    "HKEY_CURRENT_USER=0"
    "KEY_READ=0"
    "ERROR_SUCCESS=0"
    "REG_SZ=0"
    "RegOpenKeyExW(a,b,c,d,e)=0"
    "RegQueryValueExW(a,b,c,d,e,f)=0"
    "RegCloseKey(a)=0"
    "byteCount=sizeInBytes"
    "qsrand=srand"
    "qrand=rand"
)
