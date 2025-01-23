#include <stdio.h>
int main() {
    int row,col;
    printf("Enter your row \n");
    scanf("%d", &row);
    printf("Enter your collum\n");
    scanf("%d", &col);
    int array[row][col];
    int *ptr=&array[0][0];
    printf("Input please\n");

    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            printf("Enter your [%d][%d] \n",i,j);
            scanf("%d", (ptr+i *col+i));
        }
    }
     


    return 0;
}