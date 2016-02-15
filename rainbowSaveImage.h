/* 
 * File:   rainbowSaveImage.h
 * Author: isen
 *
 * Created on 5 février 2014, 18:26
 */
#include <stdio.h>
#include <stdlib.h>

#define IMAGE_WIDTH 1530
#define IMAGE_HEIGHT 256

typedef struct Pixel Pixel;

struct Pixel {
	unsigned char redValue;
	unsigned char greenValue;
	unsigned char blueValue;
};

typedef struct Image Image;
struct Image {
	unsigned int width;
	unsigned int height;
	Pixel pixels[IMAGE_HEIGHT][IMAGE_WIDTH];
};

void rainbowSaveImage();
void rainbowColorImage();
void triangleRainbow();


#ifndef RAINBOWSAVEIMAGE_H
#define	RAINBOWSAVEIMAGE_H

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* RAINBOWSAVEIMAGE_H */

