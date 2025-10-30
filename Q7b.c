#include <stdio.h>

int main(){
	char alpha[9] = {'A','B','C','D','E','F','G','H','I'};
	int odd[5] = {1,5,9,13,17};
	int rows,columns,spacing;
	int i = 0;
	int j = 0;
	
	printf("\n");
	printf("\n");
	for(rows = 0; rows <= 4; rows++){
		for(columns = 1; columns <= odd[i]; columns++){
			if(columns % 2 == 0){
				continue;
			}
			if(columns == 1){
				for(spacing = 17; spacing >= odd[rows]; spacing--)
				printf(" ");
			}
			printf(" %c  ", alpha[j]);
			j++;
		}
		printf("\n");
		i++;
		j = 0;
	}
	
}
