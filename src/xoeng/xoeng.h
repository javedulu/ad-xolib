//
#ifndef _XOENG_H_
#define _XOENG_H_
/* Scenario Engine for running scenarios with Simulation's  */


#include "xosc.h"
#include "xodr.h"


class xoeng
{
public:
    xoeng(std::string oscenario, std::string odrive);
private:
    std::shared_ptr<OpenDRIVE> m_OpenDRIVE;
    std::shared_ptr<OpenSCENARIO> m_OpenSCENARIO;
    std::string m_oscenario;
    std::string m_odrive;
};


#endif //_XOENG_H_
