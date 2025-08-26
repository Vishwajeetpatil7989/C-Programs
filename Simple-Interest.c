#include<stdio.h>

void SI(void);

int main()
{
    
    printf("Swami Samartha\n");
    SI();
    return 0;
}

void SI(){

    //Input Values
    float P , R = 1, T = 1;
    printf("Enter Principle: ");
    scanf("%f", &P);

    printf("Enter Rate: ");
    scanf("%f", &R);

    printf("Enter Time: ");
    scanf("%f", &T);

    //Calculate Simple Interest
    float SI = (P * T * R)/100;

    // Print Simple Interest
    printf("Simple Interest = %f\n", SI);

}