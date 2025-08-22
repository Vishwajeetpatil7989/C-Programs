/*To print Febonacci Series for given number*/

#include<stdio.h>

void fibo(int f1, int f2, int n){
    printf("%d\t%d", f1, f2);
    for (int i = 3; i <= n; i++)
    {
        int next = f1 +f2;
        printf("\t%d",next);
        f1 = f2;
        f2 = next;
    }
    printf("\n");
}

int main()
{
    printf("Swami Samartha\n");

    int f1 = 0, f2 = 1, n;
    printf("Enter number ehich you want: ");
    scanf("%d", &n);
    if(n >= 1){
        fibo(f1, f2, n);
    } else{
        printf("Please enter a positive number greater than 0.\n");
    }
    return 0;
}