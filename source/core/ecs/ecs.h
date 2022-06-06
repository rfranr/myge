/** 
 * Entity Component System
*/

struct ecs_t
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
} ecs_t;

long init_ecs();

long add_entity(int eid);

long remove_entity(int eid);

long destroy_ecs();