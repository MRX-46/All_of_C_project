#include <stdio.h>
int main() {
    int n;
    printf("How many number do you want input ?\n");
    scanf("%d", &n);
    int array[n];
    int *ptr=array ;
    for (int i = 0; i < n; i++) 
    {
        printf("Enter your %d no element : ",i+1);
        scanf("%d", (ptr+i));
    }


    printf("\nOutput using array \n\v");
    for (int i = 0; i < n; i++) 
    {
        printf("You enter %d\n",array[i]);
    }
     


     printf("\nOutput using pointer \n\v");
     for (int i = 0; i < n; i++) 
     {
        printf("You enter %d\n",*(ptr+i));
     }
    return 0;
}