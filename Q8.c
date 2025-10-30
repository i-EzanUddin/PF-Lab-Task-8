#include <stdio.h>

int main(){
	char occupations[5][5];
	int rows,desk;
	int empty = 0;
	int full = 0;
	int students = 0;
	
	printf("\n");
	printf("  Students Seating Arrangment:\n");
	printf("  ===========================\n");
	printf("\n");
	
	printf("  (X = Student, O = Empty Desk)\n");
	printf("\n");
	printf("\n");
	for(rows = 0; rows <= 4; rows++){
		printf("  Row %d:",rows + 1);
		for(desk = 0; desk <= 4; desk++){
			if(rows % 2 == 0){
							//Students in even rows as well as even desks when reference is index
				if(desk % 2 == 0){
					occupations[rows][desk] = 'X';
				    printf(" %c ",occupations[rows][desk]);
					full++;	
				}
				else{
					occupations[rows][desk] = 'O';
					printf(" %c ",occupations[rows][desk]);
					empty++;
				}
			}
			else{
				if(desk % 2 == 0){
					occupations[rows][desk] = 'O';
					printf(" %c ",occupations[rows][desk]);
					empty++;
				}
				else{
					occupations[rows][desk] = 'X';
				    printf(" %c ",occupations[rows][desk]);
				    full++;
				}
			}
		}
		printf("\n");
	}
	printf("\n");
	printf("  Summary:\n");
	printf("  Students: %d.\n",full);
	printf("  Desks: %d.\n",rows * desk);
	printf("  Empty Desk: %d.",empty);
	
	return 0;
}
