#include <stdio.h>

int main(){
	char alpha[5] = {'A','B','C','D','E'};
	int i,j,k;
	
	for(i = 0; i <= 4; i++){
		for(j = 0; j <= i; j++){
			if(j == 0){
				for(k = 5; k >= i; k--){
					printf("\t");
				}
			}
			printf(" %c\t",alpha[j]);
		}
		printf("\n");
	}
	return 0;
}
