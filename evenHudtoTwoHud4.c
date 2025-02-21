#include <stdio.h>

int main() {
    printf("Printing even numbers from 101 to 200:\n");
    for(int i = 102; i <= 200; i += 2) {
        printf("%d ", i);
        if((i - 102) % 20 == 0) printf("\n"); // Line break after every 10 numbers
    }
    
    return 0;
}
