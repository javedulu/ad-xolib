#include <cstdio>
#include <config.h>

#include "xodr.h"

int main (int argc , char **argv)
{
    std::string filename = (argc > 1 ? argv[1]: std::string(__DATA_DIR__)+"/Town01.xodr");

    std::cout<<"Loading filename .. "<<filename<<std::endl;
    
    xodr _odrive;
    _odrive.load(filename);
    _odrive.parse();

    std::cout<<"Done parsing filename .. "<<filename<<std::endl;
    return 0;
}
