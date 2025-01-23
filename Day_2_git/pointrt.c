#include <stdio.h>

void incriment(int *p)
{
    *p=(*p)+1;
}

int main() {
    int a=10;
    incriment(&a);
    printf("Add is %d\n",a);
     
    return 0;
}