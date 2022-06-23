
#include "cn_sort.h"

static void swap_i32(int32_t *first, int32_t *second);

void
bubble_sort(int32_t *arr, size_t n) {
    for (size_t i = n; i > 0; i--) {
        for (size_t j = 1; j < i; j++) {
            if (arr[j - 1] > arr[j]) {
                swap_i32(arr + j - 1, arr + j);
            }
        }
    }
}

void
insertion_sort(int32_t *arr, size_t n) {
    for (size_t i = 1; i < n; i++) {
        int32_t p = arr[i];
        size_t  j = i;
        while ((j > 0) && (arr[j - 1] > p)) {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = p;
    }
}

static void
swap_i32(int32_t *first, int32_t *second) {
    *first = *first ^ *second;
    *second = *first ^ *second;
    *first = *first ^ *second;
}
