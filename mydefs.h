#ifndef __MYDEFSHM_H__
#define __MYDEFSHM_H__

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <fcntl.h> 
#include <sys/shm.h> 
#include <sys/stat.h>
#include <sys/mman.h>
#include <unistd.h>
#include <semaphore.h>
#include <signal.h>

#define SHM_SIZE 1048576 //shared memory size

//shared mem name  
#define SHM_NAME_A "/nimahsn_shm_a"
#define SHM_NAME_B "/nimahsn_shm_b"

//semaphore name
#define SEM_NAME_CLIENT_LOCK_A "/nimahsn_sem_client_lock_a"
#define SEM_NAME_SIGNAL_NEW_CLIENT "/nimahsn_sem_sig_new_client"
#define SEM_BASE_NAME_SIGNAL_REQUEST_READY "/nimahsn_sem_sig_req_ready_"
#define SEM_BASE_NAME_SIGNAL_RESPONSE "/nimahsn_sem_sig_response_"

#include "shm_info.h"

#endif