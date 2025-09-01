#include <stdio.h>

typedef struct {
    char* key;
    int value;
} item;

// linear search, faster than hashtable lookup up to ~7 items
item* linear_search(item* items, size_t size, const char* key) {
    for (size_t i=0; i<size; i++) {
        if (strcmp(items[i].key, key) == 0) {
            return &items[i];
        }
    }
    return NULL;
}