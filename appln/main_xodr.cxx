#include <cstdio>
#include <config.h>

#include "xodr.h"

int main (int argc , char **argv)
{
    std::string filename = (argc > 1 ? argv[1]: std::string(__DATA_DIR__)+"/Town04.xodr");

    std::cout<<"Loading filename .. "<<filename<<std::endl;
    
    xodr _odrive;
    _odrive.load(filename);

    try{
        _odrive.parse();
        std::cout << "OpenDRIVE parse successfully " << _odrive.m_OpenDRIVE<< std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "ERROR :Exception .. " << e.what() << std::endl;
    }

    _odrive.save("xodr_save.xml");

    std::cout<<"Done parsing filename .. "<<filename<<std::endl;
    return 0;
}
