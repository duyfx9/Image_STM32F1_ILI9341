#include <display.h>
#include "ILI9341_Driver.h"

#include "ironman.h"

void Display_Round_Icon_40x40(const unsigned int icon[], unsigned int x0, unsigned int y0, unsigned int r)
{
	uint64_t k = 0;

    ILI9341_Draw_Circle(x0, y0, r, BLUE, 1);

	for(uint32_t j = y0 - 19; j < y0 + 21; j++)
	{
		for(uint32_t i = x0 -19; i < x0 + 21; i++)
		{
				ILI9341_Draw_Pixel(i, j, icon[k]);
				k++;
		}
	}
}

void Display_Square_Icon_40x40(const unsigned int icon[], unsigned int x0, unsigned int y0)
{
	uint64_t k = 0;

	for(uint32_t j = y0; j < y0 + 40; j++)
	{
		for(uint32_t i = x0; i < x0 + 40; i++)
		{
				ILI9341_Draw_Pixel(i, j, icon[k]);
				k++;
		}
	}
}



void Display_Picture()
{
	/* Set the rotation that fit the image */
	ILI9341_Set_Rotation(0);

	/* Drawing Image to the LCD */
	uint64_t k = 0;
	for(uint32_t i = 0; i < 240; i++)
	{
		for(uint32_t j = 320; j > 0; j--)
		{
			ILI9341_Draw_Pixel(i, j, ironman[k]);
			k++;
		}
	}
}



void Display_Color_Picture()
{
	for (uint16_t i = 0; i < 280; i++)
	{
		for (uint16_t j = 0; j < 320; j++)
		{
			ILI9341_Draw_Double_Pixel(j, i, ironman[(640 * i) + j * 2], ironman[(640 * i) + j * 2 + 1]);
		}
	}


}
