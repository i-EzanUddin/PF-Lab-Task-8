#include <stdio.h>

int main(){
	int i,j,k;
	int count[5] = {1,5,9,13,17};
	int d = 0;
	
	for(i = 0; i <= 4; i++){
		for(j = 0; j <= count[d]; j++){
			if(j % 2 == 0){
				continue;
			}
			if(j == 1){
				for(k = 17; k >= count[d]; k--){
					printf(" ");
				}
			}
			printf("*   ");
		}
		printf("\n");
		d++;
	}
	return 0;
}
