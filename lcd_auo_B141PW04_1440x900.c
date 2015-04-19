dou/*
 * This Lcd Driver is for BYD 5' LCD BM800480-8545FTGE.
 * written by Michael Lin, 2010-06-18
 */

#ifndef __LCD_AUO_B141PW04__
#define __LCD_AUO_B141PW04__


/* Base */

#define SCREEN_TYPE		SCREEN_RGB
#define LVDS_FORMAT      	LVDS_8BIT_1
#define OUT_FACE		OUT_P888
#define DCLK			88000000
#define LCDC_ACLK       500000000     //60 lcdc axi DMA ÆµÂÊ

/* Timing */
#define H_PW			32 //240
#define H_BP			80  //200
#define H_VD			1440
#define H_FP			48   //10

#define V_PW			6 //5
#define V_BP			17 //25
#define V_VD			900
#define V_FP			3 //3


/* Other */
#define DCLK_POL		1
#define DEN_POL			0
#define VSYNC_POL		1
#define HSYNC_POL		1

#define SWAP_RB			0
#define SWAP_RG			0
#define SWAP_GB			0


#define LCD_WIDTH       	216    //need modify
#define LCD_HEIGHT      	135
#endif
