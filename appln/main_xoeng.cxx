#include <cstdio>
#include <config.h>

#include "xoeng.h"

int main (int argc , char **argv)
{
    std::string filename = (argc > 1 ? argv[1]: std::string(__DATA_DIR__)+"/Town01.xodr");

    std::cout<<"Loading filename .. "<<filename<<std::endl;
    
    std::cout<<"Done parsing filename .. "<<filename<<std::endl;
    return 0;
}
