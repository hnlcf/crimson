
#ifndef CN_LIST_H_INCLUDE
#define CN_LIST_H_INCLUDE

#include <cn_config.h>


#define cn_alloc_list_data() malloc(sizeof(cn_list_data_t))


typedef struct cn_list_s cn_list_t;

typedef struct cn_list_data_s {
    u_char *data;
    size_t  size;
} cn_list_data_t;

struct cn_list_s {
    cn_list_data_t *cur;
    cn_list_t      *next;

    size_t num;
};

cn_list_t *cn_create_list(size_t num, size_t size);

#endif  // CN_LIST_H_INCLUDE
