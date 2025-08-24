/*Check Whether a Number is Prime or Not*/

#include<stdio.h>

int main()
{
    printf("Swami Samartha\n");

    int num, i, isPrime=1;
    
    printf("Enter number which you want: ");
    scanf("%d", &num);
    
    if (num <= 1){

        isPrime = 0;
    }
    else{
        for(i=2; i * i <= num; i++){
            if (num % i == 0){
                isPrime = 0;
                break;
            }
        }
    }

    if(isPrime){
        printf("Number is Prime\n");
    }
    else{
        printf("Number is not Prime\n");
    }
    return 0;
}

/*if(num % 2 == 1 || num % 3 == 1){
        printf("Number is prime");
    }else{
        printf("Number is not prime");
    }
    return 0;*/