#include "ecs.h";

struct ecs
{
    /* data */
    long id;
    long version;
    long size;
    long capacity;
    long *components;
    long *components_size;
    long *components_capacity;
    long *components_count;
    long *components_type;
};


long init_ecs(){
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