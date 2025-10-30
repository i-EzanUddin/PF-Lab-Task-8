#include <stdio.h>

int main(){
	int gird[4][4] = {
		{12,15,10,9},
		{11,8,12,13},
		{14,13,9,7},
		{16,11,10,8}
	};
	
	int i,j,x,y;
	int temp = 20;
	
	printf("This sensor will identity the lowest temperature with the place it exist.\n");
	printf("\n");
	
	for(i = 0; i <= 3; i++){
		for(j = 0; j <= 3; j++){
			printf("%d ", gird[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("\n");
	
	for(i = 0; i <= 3; i++){
		for(j = 0; j <= 3; j++){
			if(gird[i][j] < temp){
				temp = gird[i][j];
				x = i + 1;
				y = j + 1;
			}
		}
		printf("Temperature is %d degrees at position %d,%d\n",temp,x,y);
	}
	return 0;
}
