#include "rainbowSaveImage.h"

void rainbowColorImage(Image* image){
    
    int i,j;
    
    for(j=0;j<IMAGE_HEIGHT;j++){
        
        for(i=0;i<255;i++){    
 
        image->pixels[j][i].redValue = 255;
        image->pixels[j][i].greenValue = i;
        image->pixels[j][i].blueValue = 0;

 
        image->pixels[j][255+i].redValue = 255-i;
        image->pixels[j][255+i].greenValue = 255;
        image->pixels[j][255+i].blueValue = 0;
        
 
        image->pixels[j][510+i].redValue = 0;
        image->pixels[j][510+i].greenValue = 255;
        image->pixels[j][510+i].blueValue = i+1;
      
 
        image->pixels[j][765+i].redValue = 0;
        image->pixels[j][765+i].greenValue = 255-1-i;
        image->pixels[j][765+i].blueValue = 255;
      
 
        image->pixels[j][1020+i].redValue = i+1;
        image->pixels[j][1020+i].greenValue = 0;
        image->pixels[j][1020+i].blueValue = 255;
        
 
        image->pixels[j][1275+i].redValue = 255;
        image->pixels[j][1275+i].greenValue = 0;
        image->pixels[j][1275+i].blueValue = 255-1-i;
    }
    }
    return (EXIT_SUCCESS);
   
    }

