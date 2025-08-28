/*Check character is Vowel or not*/

// Preprocessor Directive and Macro
#include<stdio.h>

// Global varibales
char ch;
int n;

// Function Declaration
void vowel(void);

// Main Function
int main(){
    printf("Swami Sanartha\n");
    vowel(); // Function calling
    return 0;
}

// Function Defination
void vowel(){
    label:
    printf("Enter any character: ");
    scanf(" %c", &ch);

    switch(ch){
        case 'a': case 'A': 
            printf("Character '%c' is a vowel.\n", ch);
            break;
        
        case 'e': case 'E':
            printf("Character '%c' is a vowel.\n", ch);
            break;

        case 'i': case 'I': 
            printf("Character '%c' is a vowel.\n", ch);
            break;

        case 'o': case 'O':
            printf("Character '%c' is a vowel.\n", ch);
            break;

        case 'u': case 'U':
            printf("Character '%c' is a vowel.\n", ch);
            break;

        default:
            printf("Character '%c' is a consonant.\n", ch);
            break;
    }
    end:
    printf("\nEnter 0 to exit and 1 to return to converter: ");
    scanf("%d", &n);
    if(n == 0){
        printf("You exited from program");
    } else if(n == 1){
        goto label;
    } else{
        printf("\noops! sorry, you entered the wrong number\n");
        goto end;
    }
}
