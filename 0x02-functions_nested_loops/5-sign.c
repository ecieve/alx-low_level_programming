#include "main.h"
/** 
* main - check the code. 
*
* Return: Always 0. 
*/

int print_sign(int n) {
    if (n > 0) {
        printf("+\n");
        return 1;
    } else if (n == 0) {
        printf("0\n");
        return 0;
    } else {
        printf("-\n");
        return -1;
    }
}

int main() {
    int number = 42;
    int result = print_sign(number);


    printf("The sign of %d is %d\n", number, result);
    
    return 0;
}
