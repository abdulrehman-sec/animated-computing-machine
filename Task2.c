#include <stdio.h>
int main(){
    int marks[5];
    int i, sum = 0;
    float average;

    printf("Enter 5 marks:\n");
    for (i=0; i<5, i++){
        printf("marks %d:", i +1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    average = sum / 5.0;
    printf("Total Marks = %d\n", sum);
    printf("Average Marks = %.2f\n", average);
    
}