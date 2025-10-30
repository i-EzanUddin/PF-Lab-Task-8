#include <stdio.h>

int main(){
	int i,j,k;
	int count = 1;
	for(i = 0; i <= 4; i++){
		for(j = 0; j <= i; j++){
			if(j == 0){
				for(k = 5; k >= i; k--){
					printf("\t");
				}
			}
			printf("%d\t",count);
			count++;
		}
		printf("\n");
		count = 1;
	}
	return 0;
}
