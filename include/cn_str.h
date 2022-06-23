
#ifndef CN_STR_H_INCLUDE
#define CN_STR_H_INCLUDE


#include <cn_config.h>


typedef struct cn_str_s cn_str_t;

struct cn_str_s {
    size_t  size;
    u_char *data;
};

#define cn_string(str)                                                                             \
    { sizeof(str) - 1, (u_char *) (str) }

#define cn_null_string                                                                             \
    { 0, NULL }

#define cn_str_set(str, text)                                                                      \
    (str)->len = sizeof(text) - 1;                                                                 \
    (str)->data = (u_char *) text

#define cn_str_null(str)                                                                           \
    (str)->len = 0;                                                                                \
    (str)->data = NULL

#endif  // CN_STR_H_INCLUDE
