#include <stdio.h>
#include "linked_list.h"

int main(void)
{
    LinkedList list;

    list_init(&list);

    list_append(&list, 10);
    list_append(&list, 20);
    list_append(&list, 30);

    list_prepend(&list, 5);

    printf("List: ");
    list_print(&list);

    printf("Size: %d\n", list.size);

    list_free(&list);

    return 0;
}
