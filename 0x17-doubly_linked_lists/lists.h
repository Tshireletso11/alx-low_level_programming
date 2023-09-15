#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/* Structure for a doubly linked list node */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/* Function prototypes */
size_t print_dlistint(const dlistint_t *h);

#endif /* LISTS_H */