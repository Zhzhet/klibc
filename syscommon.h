/*
 * syscommon.h
 *
 * Common header file for system call stubs
 */

#define __IN_SYS_COMMON
#include <errno.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/syscall.h>

#include <sys/dirent.h>
#include <sys/mman.h>
#include <sys/module.h>
#include <sys/resource.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/times.h>
#include <sys/uio.h>
#include <sys/utime.h>
#include <sys/utsname.h>
#include <sys/vfs.h>
#include <sys/wait.h>