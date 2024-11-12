#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dlfcn.h>
#include <fcntl.h>

typedef void*(*malloc_t)(size_t);

void* malloc(size_t size) {

    write(1, "foo\n", 4);
    malloc_t m = dlsym(RTLD_NEXT, "malloc");
    void *mem = m(size-2);
    return mem;

}
