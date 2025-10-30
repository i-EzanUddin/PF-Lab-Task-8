#include <stdio.h>

int main(){
	
	int seat[3][3] ={
		{1,0,1},{0,0,1},{1,1,0}
	};
	int i,j;
	int avalible = 0;
	
	
	
	printf("\n");
	printf("  This cinema system will tell you which seats in each rows.\n");
	printf("  ====================================================================");
	printf("\n");
	printf("\n");
	
	for(i = 0; i <= 2; i++){
		printf("  Row %d: ",i +1);
		for(j = 0; j <= 2; j++){
			printf("%d ",seat[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	for(i = 0; i <= 2; i++){
		printf("  Row %d: ",i + 1);
		for(j = 0; j <= 2; j++){
			if(seat[i][j] == 1){
				printf("Seat %d  ", j + 1);
				avalible++;
			}
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	printf("  Total Avalible seats: %d",avalible);
	
	return 0;
}
