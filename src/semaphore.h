#ifndef SEMAPHORE_H
#define SEMAPHORE_H

#include "vendor/tinycthread.h"

typedef struct semaphore {
    mtx_t mtx;
    cnd_t cv;
    int count;
} sem_t;

int sem_init(sem_t *sem, int count);
void sem_destroy(sem_t* sem);
void sem_wait(sem_t* sem);
void sem_post(sem_t* sem);

#endif