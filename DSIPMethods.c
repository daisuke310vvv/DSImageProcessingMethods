#include <stdio.h>
#include <string.h>
#include <opencv/cv.h> 
#include <opencv/cxcore.h> 
#include <opencv/highgui.h> 
#include "DSIPMethods.h"


//引数

int main(int argc, char **argv){

	//メソッド名が引数に無ければ終了
	if(argv[1] == NULL){
		printf("no method name. type it.\n");
		return 0;
	}

	/* 変数 */
	char *img = argv[2];
	IplImage *outImg;

	if(strncmp("getHistgram",argv[1],strlen(argv[1])) == 0){
		getHistgram();
	}else if(strncmp("getGrayScaleImage",argv[1],strlen(argv[1])) == 0){
		printf("get grayscale image\n");
		//getGrayScaleImage(img,outImg);
		outImg = cvLoadImage(img,CV_LOAD_IMAGE_GRAYSCALE);

	}
	else{

		printf("I don't know this name methods. check name.\n");	
	}

	cvSaveImage(argv[3],outImg,0);

	return 0;
	

}
