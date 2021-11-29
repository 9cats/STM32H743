#ifndef OSCILLOSCOPEVIEW_HPP
#define OSCILLOSCOPEVIEW_HPP

#include <gui_generated/oscilloscope_screen/OscilloscopeViewBase.hpp>
#include <gui/oscilloscope_screen/OscilloscopePresenter.hpp>

/* Add User Include */
#include <iostream>
using namespace std;

class OscilloscopeView : public OscilloscopeViewBase
{
public:
    OscilloscopeView();
    virtual ~OscilloscopeView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void handleTickEvent();
    virtual void updataADValue(string str);
protected:
    /* Add User Event Handle Function */
    virtual void sample();
    int value;
};

#endif // OSCILLOSCOPEVIEW_HPP
