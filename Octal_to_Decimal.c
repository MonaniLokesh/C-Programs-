#include<stdio.h>
#include<math.h>
int main() {
    int a = 0, decimal = 0, remainder, num;
    printf("Enter an Octal number: ");
    scanf("%d", &num);

    while(num > 0) {
        remainder = num % 10;
        num = num / 10;
        decimal = decimal + remainder * pow(8, a);    
        ++a;
    }

    printf("Octal to Decimal conversion: %d", decimal);
    return 0;
}
