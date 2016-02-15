/* 
 * File:   main.c
 * Author: isen
 *
 * Created on 5 février 2014, 18:25
 */

#include <stdio.h>
#include <stdlib.h>
#include "rainbowSaveImage.h"

/*
 * 
 */
int main(int argc, char** argv) {
Image image;
	image.width = IMAGE_WIDTH;
	image.height = IMAGE_HEIGHT;
        
        //triangleRainbow(&image);
        rainbowColorImage(&image);
    	rainbowSaveImage(&image, "image_result.ppm");
    
	
    return (EXIT_SUCCESS);
}

