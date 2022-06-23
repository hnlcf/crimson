
#ifndef CN_LOG_H_INCLUDE
#define CN_LOG_H_INCLUDE


#include <cn_config.h>
#include <cn_str.h>


typedef struct cn_log_s cn_log_t;

struct cn_log_s {
    cn_str_t *buf;
    cn_int_t  level;
};

#endif  // CN_LOG_H_INCLUDE
