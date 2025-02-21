#include <stdio.h>

int main() {
    printf("Printing numbers from 1 to 100:\n");
    for(int i = 1; i <= 100; i++) {
        printf("%d ", i);
        if(i % 10 == 0) printf("\n"); // Line break after every 10 numbers
    }
    
    return 0;
}
