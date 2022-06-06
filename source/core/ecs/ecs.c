#include "ecs.h";
#include <clist.h>


void test_list(){
    int list_size;
    long l;
    struct ecs_t *element_at;

    CList *list = CList_init(sizeof(ecs_t));


    for (l=0; l<1000;l++){

        struct ecs_t ecs;
        {
            ecs.id = l;
        };


        list->add(list, &ecs);
    }   


    list_size = list->count(list);
    printf("list_size: %d\n", list_size);

    element_at = list->at(list, 500);

    printf("list_at: %d\n", element_at->id);


    list->free(list);

}

long init_ecs(){

    test_list();

    return 0;
}

long add_entity(){
    return 0;
}

long remove_entity(){
    return 0;
}

long destroy_ecs(){
    return 0;
}