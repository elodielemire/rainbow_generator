
#include "rainbowSaveImage.h"


void rainbowSaveImage(Image* image, char* filename) {
	unsigned int currentLineNumber;
	unsigned int currentColumnNumber;
 
	FILE* outputFile = fopen(filename, "w");
	if (outputFile == NULL) {
		printf("Error: cannot open file.\n");
		exit(1);
	}

	fprintf(outputFile, "P3\n");
	fprintf(outputFile, "%u %u\n", image->width, image->height);
	fprintf(outputFile, "255\n");

	for (currentLineNumber = 0; currentLineNumber < image->height; ++currentLineNumber) {
		for (currentColumnNumber = 0; currentColumnNumber < image->width; ++currentColumnNumber) {
			fprintf(outputFile, "%u %u %u\n", image->pixels[currentLineNumber][currentColumnNumber].redValue,
          	          image->pixels[currentLineNumber][currentColumnNumber].greenValue,
                	  image->pixels[currentLineNumber][currentColumnNumber].blueValue);
		}
	}  
}
