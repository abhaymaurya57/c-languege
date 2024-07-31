#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d ",&n);
    int reversed =0;
    int number = n;
    while (number != 0) { 
        int r = number % 10; 
        reversed = reversed * 10 + r; 
        number /= 10; 
    } 
    printf("%d\n",reversed);
     if (n == reversed) { 
        printf(" Given number %d is a palindrome number",n); 
    } 
    else { 
        printf(" Given number %d is not a palindrome number",n); 
    }
    
    return 0;
}