#include <emscripten/bind.h>
//
#include "xosc.h"
#include "config.h"

using namespace emscripten;

float lerp(float a, float b, float t) {
    return (1 - t) * a + t * b;
}

EMSCRIPTEN_BINDINGS(jsxosc) {
    class_<Action_U>("Action_U")
        .smart_ptr_constructor("Action_U", &std::make_shared<Action_U>)
		.property("GlobalAction", &Action_U::m_GlobalAction ) //GlobalAction
		.property("UserDefinedAction", &Action_U::m_UserDefinedAction ) //UserDefinedAction
		.property("PrivateAction", &Action_U::m_PrivateAction ) //PrivateAction
;
}
