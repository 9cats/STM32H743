#ifndef __TOUCHGFX_COM_H
#define __TOUCHGFX_COM_H

class GFX_Message_AD{
public:
	enum state{
		IDLE = 0, //邮箱为空
		SEND = 1, //邮箱待接收
		RECV = 2  //邮箱接收完毕
	};

	enum state sta; //状态
	int ad_value;   //采样值

	bool recvReady();
	void setValue(int value);
	int getValue();
};

extern GFX_Message_AD msg_ad;
#endif

