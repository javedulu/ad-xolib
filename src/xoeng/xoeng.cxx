#include "xoeng.h"

xoeng::xoeng(std::string oscenario, 
        std::string odrive): m_oscenario(oscenario), m_odrive(odrive)
{
    try
    {
        xodr _odrive;
        _odrive.load(m_odrive);
        _odrive.parse();
        m_OpenDRIVE = _odrive.m_OpenDRIVE;

        xosc _oscen;
        _oscen.load(m_oscenario);
        _oscen.parse();
        m_OpenSCENARIO  = _oscen.m_OpenSCENARIO;
    }
    catch(const std::exception& e)
    {
            std::cerr << e.what() << '\n';
    }
        
}

