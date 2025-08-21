#include<stdio.h>

int main()
{
    printf("Swami Samartha\n");
    
    int num, n;
    float km, inch, cm, pound;

    label:
    printf("Which one you like to convert\n");
    printf("Enter 1 to convert from km to mile\n");
    printf("Enter 2 to convert from inch to foot\n");
    printf("Enter 3 to convert from cm to inch\n");
    printf("Enter 4 to convert from pound to kg\n");
    printf("Enter 5 to convert from inch to meter\n");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("Please enter km: ");
        scanf("%f", &km);
        printf("%f km is equal to %f mile \n", km, 0.621*km);
        break;
    case 2:
        printf("Please enter inch: ");
        scanf("%f", &inch);
        printf("%f inch is equal to %f foot \n", inch, 0.083*inch);
        break;
    case 3:
        printf("Please enter cm: ");
        scanf("%f", &cm);
        printf("%f cm is equal to %f inch \n", cm, 0.393*cm);
        break;
    case 4:
        printf("Please enter pound: ");
        scanf("%f", &pound);
        printf("%f pound is equal to %f kg \n", pound, 0.453*pound);
        break;
    case 5:
        printf("Please enter inch: ");
        scanf("%f", &inch);
        printf("%f inch is equal to %f meter \n", inch, 0.025*inch);
        break;
    default:
        printf("your entered number choice is not here\n");
        break;
    }

    end:
    printf("Enter 0 to exit and 1 to return to converter: ");
    scanf("%d", &n);
    if(n == 0){
        printf("You exited the program");
    }
    else if(n == 1){
        goto label;
    }
    else{
        printf("oops! sorry, you entered the wrong number\n");
        goto end;
    }
    return 0;
}