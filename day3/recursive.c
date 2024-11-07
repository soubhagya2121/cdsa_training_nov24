#include<stdio.h>

int fibonacci(int n) {
    if(n<=1)
       return 1;
       return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n,i;

    printf("enter the number of terms:");
    scanf("%d",&n);

    printf("the fibonacci series upto the terms:\n",n);
    for(i=o,i<n,i++) {
        printf("%d",fibonacci(i));
    }
    printf("\n");

    return 0;
}
   