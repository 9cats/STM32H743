#ifndef __TOUCHGFX_COM_H
#define __TOUCHGFX_COM_H

class GFX_Message_AD{
public:
	enum state{
		IDLE = 0, //����Ϊ��
		SEND = 1, //���������
		RECV = 2  //����������
	};

	enum state sta; //״̬
	int ad_value;   //����ֵ

	bool recvReady();
	void setValue(int value);
	int getValue();
};

extern GFX_Message_AD msg_ad;
#endif

