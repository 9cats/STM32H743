#ifndef __FONTS_H
#define __FONTS_H

#include <stdint.h>
#include "ff.h"

/*------------------------------------ ASCII���� ---------------------------------------------*/

// ������ؽṹ����
typedef struct _pFont
{    
	const uint8_t 		*pTable;  		//	��ģ�����ַ
	uint16_t 			Width; 		 	//	�����ַ�����ģ���
	uint16_t 			Height; 			//	�����ַ�����ģ����
	uint16_t 			Sizes;	 		//	�����ַ�����ģ���ݸ���
	uint16_t				Table_Rows;		// �ò���ֻ�к�����ģ�õ�����ʾ��ά������д�С
} pFONT;

extern pFONT Font32;	// 3216 ����
extern pFONT Font24;	// 2412 ����
extern pFONT Font20; // 2010 ����
extern pFONT Font16; // 1608 ����
extern pFONT Font12; // 1206 ����

/*------------------------------------ �������� ---------------------------------------------*/


typedef struct _pChineseFont
{
	uint16_t Width; 			// ��ģ���
	uint16_t Height;		 	// ��ģ����
	uint16_t Sizes;	 		 	// ��ģ����
	const TCHAR * FontPath;		// �ֿ��ļ�·��
} pChineseFont;

extern	pChineseFont	CH_Font12 ;		//	1212����
extern	pChineseFont	CH_Font16 ;    //	1616����
extern	pChineseFont	CH_Font24 ;    //	2424����
extern	pChineseFont	CH_Font32 ;    //	3232����


#define  FontPath_CH_Font12  "0:GB2312_12.FON"		// ����1212�ֿ���SD���е�·��
#define  FontPath_CH_Font16  "0:GB2312_16.FON"		// ����1616�ֿ���SD���е�·��
#define  FontPath_CH_Font24  "0:GB2312_24.FON"		// ����2424�ֿ���SD���е�·��
#define  FontPath_CH_Font32  "0:GB2312_32.FON"		// ����3232�ֿ���SD���е�·��


#endif 
 
