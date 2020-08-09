#include <stdio.h>

int main(){

    int n, result = 0, q, rem;


    printf("Enter a number to check if it is a palindrome: \n");
    scanf("%d", &n);

    q = n;
    
    while(q != 0)
    {
        rem = q%10;
        result = result*10 + rem;
        q = q/10;
    }

    if(result == n)
    {
        printf("%d is a palindrome!\n", n);
    }
    else
    {
        printf("No! %d is not a palindrome!\n", n);
    }
    
    return 0;

}