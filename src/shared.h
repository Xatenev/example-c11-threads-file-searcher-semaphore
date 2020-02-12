#ifndef SHARED_H
#define SHARED_H

#include "semaphore.h"
#include "vendor/tinycthread.h"

struct thread_arg {
    int id;
    char *path;
    char *search;
};


sem_t sem;
char result_list[8192][1024];
int result_list_index;

#endif
