#include <stdio.h>

int main(){
     int marks[3][4];
     int class;
     int i,j;
     int sum =0;
     int avg;
     printf("Enter marks for each class.\n");
     for(i = 0; i < 3; i++){
         printf("\t\tClass %d\n ",i +1);
         for(j = 0; j < 4; j++){
               scanf("%d",& marks[i][j]);
         }
     }
     printf("\t\tMarks of each students of each class.\n");
     for(i = 0; i < 3; i++){
         printf("Class %d\n ",i +1);
         for(j = 0; j < 4; j++){
               printf("%d ", marks[i][j]);
               sum = sum + marks[i][j];
         }
         printf("\n");
         avg = sum / 4;
         printf("Average of class %d is %d.\n",i+1,avg);
     }
return 0;
}
