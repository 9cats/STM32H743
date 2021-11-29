#include <gui/oscilloscope_screen/OscilloscopeView.hpp>

/* User Include */
#include "touchgfx_com.hpp"

OscilloscopeView::OscilloscopeView()
{
}

void OscilloscopeView::setupScreen()
{
    OscilloscopeViewBase::setupScreen();
}

void OscilloscopeView::tearDownScreen()
{
    OscilloscopeViewBase::tearDownScreen();
}

void OscilloscopeView::sample()
{
	Unicode::snprintf(ad_boxBuffer, 10, "%d", 2233);
	ad_box.invalidate();
}

void OscilloscopeView::updataADValue(string str)
{
	Unicode::snprintf(ad_boxBuffer, AD_BOX_SIZE, "%s",str.c_str());
	ad_box.invalidate();
}

void OscilloscopeView::handleTickEvent()
{
	if(msg_ad.recvReady())
	{
		Unicode::snprintf(ad_boxBuffer, AD_BOX_SIZE, "%d",msg_ad.getValue());
		ad_box.invalidate();
	}
}
