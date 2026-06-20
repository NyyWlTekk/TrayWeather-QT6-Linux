#ifndef LINUX_FIX_H
#define LINUX_FIX_H

#include <QtGlobal>

#if !defined(Q_OS_WIN)

  #define WIN32_LEAN_AND_MEAN

  // --- 1. Simulace Windows API ---
  typedef int HKEY;
  typedef unsigned long DWORD;
  
  #define HKEY_CURRENT_USER 0
  #define KEY_READ 0
  #define ERROR_SUCCESS 0
  #define REG_SZ 0
  
  #define RegOpenKeyExW(a,b,c,d,e) 0
  #define RegQueryValueExW(a,b,c,d,e,f) 0
  // Přetypování na (void) zamezí varování "statement has no effect"
  #define RegCloseKey(a) ((void)0)

  // --- 2. Oprava pro Qt6 ---
  #include <QStyleOptionViewItem>
  #define QStyleOptionViewItemV4 QStyleOptionViewItem

  // --- 3. Oprava časových funkcí ---
  #include <time.h>
  // Přetypování na (void) zamezí varování "value computed is not used"
  #define localtime_s(ts, tim) ((void)localtime_r((const time_t*)(tim), ts))

  // --- 4. Zpětná kompatibilita ---
  #define byteCount sizeInBytes
  #define qsrand srand
  #define qrand rand
  #define SplitBehavior Qt

#endif // !defined(Q_OS_WIN)

#endif // LINUX_FIX_H
