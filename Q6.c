#include <stdio.h>

int main(){
	int i,j;
	int k;
	
	
	for(i = 0; i <= 4; i++){
		for(j = 0; j <= i; j++){
			if(j == 0){
				for(k = 4; k >= i; k--){
					printf("\t");
				}	
			}
			printf("*\t");
		}
		printf("\n");
	}
	return 0;
}
