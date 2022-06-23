
#include "cn_list.h"


static inline cn_list_data_t *
cn_create_list_data(size_t size) {
    cn_list_data_t *d;

    d = cn_alloc_list_data();
    if (d == NULL) {
        return NULL;
    }

    d->data = malloc(size);
    if (d->data == NULL) {
        return NULL;
    }

    d->size = size;

    return d;
}

cn_list_t *
cn_create_list(size_t num, size_t size) {
    cn_list_data_t *d;
    cn_list_t      *list, *l, **ll;

    ll = &list;

    for (size_t i = 0; i < num; i++) {
        l = (cn_list_t *) malloc(sizeof(cn_list_t));
        if (l == NULL) {
            return NULL;
        }

        d = cn_create_list_data(size);
        if (d == NULL) {
            return NULL;
        }

        l->cur = d;
        l->num = num;

        *ll = l;
        ll = &(l->next);
    }

    return list;
}
