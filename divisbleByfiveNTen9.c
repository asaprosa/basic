#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a number to check divisibility by 5 and 10: ");
    scanf("%d", &num);
    
    if(num % 5 == 0 && num % 10 == 0) {
        printf("%d is divisible by both 5 and 10\n", num);
    } else if(num % 5 == 0) {
        printf("%d is divisible by 5 but not by 10\n", num);
    } else {
        printf("%d is neither divisible by 5 nor by 10\n", num);
    }
    
    return 0;
}
