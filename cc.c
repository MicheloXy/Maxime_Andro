#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int i = 0;
	int rep = 0;
	for(i=1;i<atoi(argv[1]);i++){
		if((atoi(argv[1])%i)==0){
			rep = rep + i;
		}	
	}
	if(rep == atoi(argv[1])){
		printf("le nombre %d est parfait",atoi(argv[1]));
	}
	else{
		printf("le nombre %d n'est pas parfait",atoi(argv[1]));
	}
}
