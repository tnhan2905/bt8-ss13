#include <stdio.h>

int find_gcd(int a, int b) {

    while (b != 0) {
        int temp = b; 
        b = a % b; 
        a = temp;
    }
    return a;
}
int main() {
    int num1, num2;

    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &num2);

    int gcd = find_gcd(num1, num2);
    printf("Uoc chung lon nhat cua %d va  %d la : %d\n", num1, num2, gcd);

    return 0;
}
