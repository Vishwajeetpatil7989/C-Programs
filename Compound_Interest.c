#include<stdio.h>
#include<math.h>

double principal;

int CI();
int Amount();


int main()
{
    printf("Swami Samartha\n");
    
    CI();

    return 0;
}

int CI()
{
    printf("Enter Principal: ");
    scanf("%lf", &principal);
    double CI = Amount() - principal;
    printf("Compound Interest is %.2f", CI);
}

int Amount()
{
    double rate, time;
    
    printf("Enter Rate: ");
    scanf("%lf", &rate);
    printf("Enter Time: ");
    scanf("%lf", &time);
    
    double Amount = principal * ((pow((1 + rate / 100), time)));
    return Amount;
}