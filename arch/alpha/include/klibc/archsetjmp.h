/*
 * arch/alpha/include/klibc/archsetjmp.h
 */

#ifndef _KLIBC_ARCHSETJMP_H
#define _KLIBC_ARCHSETJMP_H

struct __jmp_buf {
  unsigned long __s0;
  unsigned long __s1;
  unsigned long __s2;
  unsigned long __s3;
  unsigned long __s4;
  unsigned long __s5;
  unsigned long __fp;
  unsigned long __ra;
  unsigned long __gp;
  unsigned long __sp;
};

/* Must be an array so it will decay to a pointer when a function is called */
typedef struct __jmp_buf jmp_buf[1];

#endif /* _KLIBC_ARCHSETJMP_H */
