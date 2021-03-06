/**************************************************************
* Moon
* Characteristics of moon.
**************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

#include"physic.h"
#include "moon.h"
#include "moonlander.h"
#include "ex.h"

float* MoonSurface;
const int moonSize = 1000*1000;

void MoonSurface_create() //This function create N*N size moon surface.
{
	// allocate 1000 * 1000 2dimensional Moonsurface
	float** pseudoMoon;
	pseudoMoon = (float**)malloc(sizeof(float*) * 1000);
	for (int i = 0; i < 1000; i++)
		pseudoMoon[i] = (float*)malloc(sizeof(float) * 1000);


}



//void MoonSurface_create() //This function create N*N size moon surface.
//{
//	if (moonSize > 0)
//	{
//		float* pseudoMoon;
//		pseudoMoon = (float*)malloc(moonSize * moonSize * sizeof(float));
//		for (int i = 0; i < (moonSize * moonSize); i++)
//		{
//			pseudoMoon[i] = (float)randint(0, 50);
//		}
//		MoonSurface = pseudoMoon;
//	}
//}
void endMoon() { // Activate at the end of the program. Free all the dynamic allocated memorys.
	if (MoonSurface != NULL)
	{
		free(MoonSurface);
	}
	printf("\n\nEND");
}
