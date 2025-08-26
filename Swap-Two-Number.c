/*Swap Two Numers without third veriable*/

#include<stdio.h>

void swap(void);

int main()
{
    printf("Swami Samartha\n");
    swap();
    return 0;
}

void swap(){
    int a, b;

    printf("Enter 1st Number: ");
    scanf("%d", &a);

    printf("Enter 2nd number: ");
    scanf("%d", &b);

    printf("Numbers before swap\n");
    printf("Number a: %d",a);
    printf("\nNumber b: %d",b);
    
    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nNumbers after swap\n");
    printf("Number a: %d",a);
    printf("\nNumber b: %d",b);

}