#ifndef __CORE_LEARN_H
#define __CORE_LEARN_H

extern "C"{
	void mytask_creat(void);
	void vRegisterMineCommands(void);
}


/* ���ʱ�� ת ����ʱ�� */
#define osAbsTime(time) osKernelGetTickCount() + time

#endif
