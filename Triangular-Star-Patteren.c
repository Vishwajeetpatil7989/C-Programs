#include<stdio.h>


int star_patteren(int n)
{
    for(int i=1; i<=n; i++){
        printf("\n");
        for (int j=1; j<=i; j++){
            printf("*");
        }
    }
}


int rev_star_patteren(int n)
{
    for(int i=n; i>=1; i--){
        printf("\n");
        for (int j=1; j<=i; j++){
            printf("*");
        }
    }
}

int main()
{
    printf("Swami Samartha\n");
    int n, num;
    printf("Enter number 0 for Star trianglular patteren or 1 for reverse star trianglular patteren: ");
    scanf("%d", &num);
    if(num == 1){
        printf("Enter any number: ");
        scanf("%d", &n);
        star_patteren(n); 
    }
    else{
        printf("Enter any number: ");
        scanf("%d", &n);
        rev_star_patteren(n);
    }
    
}