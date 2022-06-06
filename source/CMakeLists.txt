cmake_minimum_required (VERSION 3.10)

project (my_gameengine)

#add_library(jsclib
#../external_source/c-generic-data-structures/jsclib/jscobj2.h
#../external_source/c-generic-data-structures/jsclib/JSArrayList.h
#../external_source/c-generic-data-structures/jsclib/JSHashMap.h
#../external_source/c-generic-data-structures/jsclib/JSHashSet.h
#../external_source/c-generic-data-structures/jsclib/JSHashTableCommon.h
#../external_source/c-generic-data-structures/jsclib/JSList.h
#../external_source/c-generic-data-structures/jsclib/JSPriorityQueue.h
#../external_source/c-generic-data-structures/jsclib/JSTreeSet.h
#../external_source/c-generic-data-structures/jsclib/sglib.h
#)

add_executable(myge ./main.c ./core/core.c)

#target_link_libraries(myge PUBLIC jsclib)
