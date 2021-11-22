#ifndef __FONTS_H
#define __FONTS_H

#include <stdint.h>
#include "ff.h"

/*------------------------------------ ASCII字体 ---------------------------------------------*/

// 字体相关结构定义
typedef struct _pFont
{    
	const uint8_t 		*pTable;  		//	字模数组地址
	uint16_t 			Width; 		 	//	单个字符的字模宽度
	uint16_t 			Height; 			//	单个字符的字模长度
	uint16_t 			Sizes;	 		//	单个字符的字模数据个数
	uint16_t				Table_Rows;		// 该参数只有汉字字模用到，表示二维数组的行大小
} pFONT;

extern pFONT Font32;	// 3216 字体
extern pFONT Font24;	// 2412 字体
extern pFONT Font20; // 2010 字体
extern pFONT Font16; // 1608 字体
extern pFONT Font12; // 1206 字体

/*------------------------------------ 中文字体 ---------------------------------------------*/


typedef struct _pChineseFont
{
	uint16_t Width; 			// 字模宽度
	uint16_t Height;		 	// 字模长度
	uint16_t Sizes;	 		 	// 字模个数
	const TCHAR * FontPath;		// 字库文件路径
} pChineseFont;

extern	pChineseFont	CH_Font12 ;		//	1212字体
extern	pChineseFont	CH_Font16 ;    //	1616字体
extern	pChineseFont	CH_Font24 ;    //	2424字体
extern	pChineseFont	CH_Font32 ;    //	3232字体


#define  FontPath_CH_Font12  "0:GB2312_12.FON"		// 汉字1212字库在SD卡中的路径
#define  FontPath_CH_Font16  "0:GB2312_16.FON"		// 汉字1616字库在SD卡中的路径
#define  FontPath_CH_Font24  "0:GB2312_24.FON"		// 汉字2424字库在SD卡中的路径
#define  FontPath_CH_Font32  "0:GB2312_32.FON"		// 汉字3232字库在SD卡中的路径


#endif 
 
