#include "rainbowSaveImage.h"

void triangleRainbow(Image* image){
    
    int i,j;
    
    for(j=0;j<256;j++){
        
        for(i=0;i<256;i++){    
 
        image->pixels[j][i].redValue = 255-j;
        image->pixels[j][i].greenValue = i+j;
        image->pixels[j][i].blueValue = 0+j;

 
        image->pixels[j][255+i].redValue = 255-i-j;
        image->pixels[j][255+i].greenValue = 255+j;
        image->pixels[j][255+i].blueValue = 0+j;
        
 
        image->pixels[j][510+i].redValue = 0-j;
        image->pixels[j][510+i].greenValue = 255+j;
        image->pixels[j][510+i].blueValue = i+1+j;
      
 
        image->pixels[j][765+i].redValue = 0-j;
        image->pixels[j][765+i].greenValue = 255-1-i+j;
        image->pixels[j][765+i].blueValue = 255+j;
      
 
        image->pixels[j][1020+i].redValue = i+1-j;
        image->pixels[j][1020+i].greenValue = 0+j;
        image->pixels[j][1020+i].blueValue = 255+j;
        
 
        image->pixels[j][1275+i].redValue = 255-j;
        image->pixels[j][1275+i].greenValue = 0+j;
        image->pixels[j][1275+i].blueValue = 255-1-i+j;
    }
    }
    return (EXIT_SUCCESS);
   
    }


