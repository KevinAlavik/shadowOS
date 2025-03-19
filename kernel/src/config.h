#ifndef CONFIG_H
#define CONFIG_H

// Logging config
#define _DEBUG 1
#define _TRACE 1
#define _HEAP_TRACE 0
#define _SYSCALL_TRACE 1
#define _GRAPHICAL_STDOUT 1

// Memory allocation config
#define PAGE_SIZE 0x1000
#define VMA_START PAGE_SIZE

// Other config
#define _PRINT_VFS_TREE 1

// Misc
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define BIT(x) (1U << (x))

#endif // CONFIG_H