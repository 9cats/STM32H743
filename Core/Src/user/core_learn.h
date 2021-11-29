#ifndef __CORE_LEARN_H
#define __CORE_LEARN_H

extern "C"{
	void mytask_creat(void);
	void vRegisterMineCommands(void);
}


/* 相对时间 转 绝对时间 */
#define osAbsTime(time) osKernelGetTickCount() + time

#endif
