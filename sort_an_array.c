 #include <stdio.h>
 int main() {

    int n , length,x;
    int temp=0;

    printf("Welcome to Array short\n");
    printf("How many number do you want to input ? :");
    scanf("%d", &x);
    int A[100];
    for (int i = 0; i <x ; i++) 
    {
        printf("Enter your %d no index :",i);
        scanf("%d", &A[i]);
    }
    printf("What do you Want ?\n\n 1. Max to Mini \n 2. Mini to Max \n");
    scanf("%d", &n);

    switch (n)
    {
      case 1:
            length =x;


    for (int i = 0; i <length  ; i++) 
    {
        for (int j = i+1; j < length; j++) 
        {
            if (A[i]>A[j])
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;      
            }
        }
    }
    for (int i = 0; i < length; i++) 
    {
        printf("%d\n",A[i]);
    }

        break;
    
      case 2:
         length =x;


    for (int i = 0; i < x; i++) {
        for (int j = i + 1; j < x; j++) {
            if (A[i] < A[j]) { 
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;     
            }
        }
    }
    for (int i = 0; i < length; i++) 
    {
        printf("%d\n",A[i]);
    }

        break;
    
    
      default:
      printf("Enter a valid number\n");
        break;
    }

     
     return 0;
 }