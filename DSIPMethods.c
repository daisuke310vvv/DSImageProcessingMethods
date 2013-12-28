
#include <stdio.h>
#include "DSIPMethods.h"

enum Methods{

	GET_HISTGRAM = 0,

}type;

int main(int argc, char **argv){

	type = argv[1];

	switch(type){
		
		case GET_HISTGRAM:
			getHistgram();
			break;

		}

	return 0;
	

}
