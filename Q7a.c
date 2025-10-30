#include <stdio.h>

int main(){
	int rows,columns;
	int i[5] = {1,5,9,13,17};
	int spacing;
	int h = 0;
	int count = 1;
	
	printf("\n");
	printf("\n");
	for(rows = 0; rows <= 4; rows++){
		for(columns = 1; columns <= i[h]; columns++){
			if(columns % 2 == 0){
				continue;
			}
			if(columns == 1){
				for(spacing = 17; spacing >= i[rows]; spacing--){
					printf(" ");
				}
			}
			printf("%d   ",count);
			count++;
		}
		printf("\n");
		h++;
		count = 1;
	}
}
