#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 

int main() {
    int r, k = 1;
    scanf("%d", &r);
    if (r > 0) {
        for (int i = 0; i <= r; i++) {
            for (int j = r - i; j >= 0; j--) {
                printf(" ");
            }
            for (int j = 0; j < (2 * i) - j; j++, k++) {
                printf("%d ", k % 10);
            }printf("\n");
        }
        for (int i = r - 1; i >= 0; i--) {
            for (int j = 0; j <= r - i; j++) {
                printf(" ");
            }
            for (int j = 0; j < (2 * i) - j; j++, k++) {
                printf("%d ", k % 10);
            }printf("\n");
        }
    }
    else printf("Error");
    return 0;
}