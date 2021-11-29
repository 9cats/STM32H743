#include "touchgfx_com.hpp"


bool GFX_Message_AD::recvReady()
{
	if(this->sta == SEND)
		return true;
	else
		return false;
}

void GFX_Message_AD::setValue(int value)
{
	if(this->sta == IDLE || this->sta == RECV)
	{
		this->ad_value = value;
		this->sta = SEND;
	}
}

int GFX_Message_AD::getValue()
{
	this->sta = RECV;
	return this->ad_value;
}
