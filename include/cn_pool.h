
#ifndef CN_POOL_H_INCLUDE
#define CN_POOL_H_INCLUDE


#include <cn_config.h>


typedef struct cn_pool_s       cn_pool_t;
typedef struct cn_pool_large_s cn_pool_large_t;
typedef struct cn_pool_data_s  cn_pool_data_t;

/// Larger chunk for pool
struct cn_pool_large_s {
    cn_pool_large_t *next;
    void            *alloc;
};

/// Data of memory pool with general size
struct cn_pool_data_s {
    u_char    *last;  // start of unused current memory chunk
    u_char    *end;   // end of current memory dochunk
    cn_pool_t *next;  // next memory chunk
    cn_uint_t  failed;
};

struct cn_pool_s {};

#endif  // CN_POOL_H_INCLUDE
