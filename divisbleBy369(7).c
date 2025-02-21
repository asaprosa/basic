#include <stdio.h>

int main() {
    printf("Numbers from 100 to 200 divisible by 3, 6, and 9:\n");
    for(int i = 100; i <= 200; i++) {
        if(i % 3 == 0 && i % 6 == 0 && i % 9 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}
