#include <cn_list.h>
#include <cn_log.h>
#include <cn_pool.h>

int
main() {
    cn_list_t      *p = cn_create_list(10, 4);
    cn_list_t      *l;
    cn_list_data_t *d;

    l = p;
    for (size_t i = 0; i < p->num; i++) {
        d = l->cur;
        for (size_t j = 0; j < d->size; j++) {
            *(d->data + j) = (u_char) (10 * i + j);
        }
        l = l->next;
    }

    l = p;
    for (size_t i = 0; i < p->num; i++) {
        d = l->cur;
        for (size_t j = 0; j < d->size; j++) {
            printf("%d, ", *(d->data + j));
        }
        printf("\n");
        l = l->next;
    }

    return 0;
}
