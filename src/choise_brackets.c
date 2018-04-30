#include "choise_brackets.h"
int choice_brackets()
{
    char choice[2];
    printf ("\nКакие скобки вы хотите ?\n");
    printf ("1)Breaces: {}\n");
    printf ("2)Parentheses: ( )\n");
    printf ("3)Brackets: {}\n");
    printf ("4)Tags: < >\n");
    printf ("5)Готово \n");
    printf ("6)Отмена \n");


    printf("\nВыберите: ");
    scanf("%s",&choice[0]);

    switch(choice[0]){
        
        case '1':
            return 1;
            break;

        case '2':
            return 2;
            break; 

        case '3':
            return 3;
            break; 

        case '4':
            return 4;
            break; 

        case '5':
            return 5;
            break; 
        
        printf("\n");
    }



    return 0;
}
