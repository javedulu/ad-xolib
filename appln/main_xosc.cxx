#include <cstdio>
#include <config.h>

#include "xosc.h"

int main (int argc , char **argv)
{
    std::string filename = (argc > 1 ? argv[1]: std::string(__DATA_DIR__)+"/TrafficJam.xosc");

    std::cout<<"Loading filename .. "<<filename<<std::endl;
    
    xosc _osc;
    _osc.load(filename);
    try{
        _osc.parse();
        std::cout << "OpenSCENARIO parse successfully " << _osc.m_OpenSCENARIO<< std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "ERROR :Exception .. " << e.what() << std::endl;
    }

    _osc.save("xosc_save.xml");

    std::cout<<"Done parsing filename .. "<<filename<<std::endl;
    return 0;
}
