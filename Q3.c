#include <stdio.h>

int main(){
	char original[4][4] = {
		{'*','o','*','o'},{'o','*','o','*'},{'*','*','o','o'},{'o','o','*','*'}
	};
	
	char inverted[4][4];
	int img[4][4];
	int i,j;
	
	
	printf("\tOriginal Image:\n");
	printf("\n");
	
	for(i = 0; i <= 3; i++){
		printf("\t");
		for(j = 0; j <= 3; j++){
			printf(" %c ,", original[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("\n");
	
	printf("\tInverted Image:\n");
	printf("\n");
	
	for(i = 0; i <= 3; i++){
		for(j = 0; j <= 3; j++){
			if(original[i][j] == '*'){
				inverted[i][j] = 'o';
			}
			else{
				inverted[i][j] = '*';
			}
		}
	}
	
	for(i = 0; i <= 3; i++){
		printf("\t");
		for(j = 0; j <= 3; j++){
			printf(" %c ,", inverted[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	printf("\tSide by Side:\n");
	printf("\n");
	
	for(i = 0; i <= 3; i++){
		printf("\t");
		for(j = 0; j <= 3; j++){
			if(original[i][j] == 'o'){
				printf(" ");
			}
			else{
				printf(" %c",original[i][j]);
			}
			if(inverted[i][j] == 'o'){
				printf(" ");
			}
			else{
				printf(" %c",inverted[i][j]);
			}
		}
		printf("\n");
	}	
    return 0;
}

