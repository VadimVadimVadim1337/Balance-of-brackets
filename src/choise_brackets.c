#include "choise_brackets.h"
int choice_brackets()
{
    //int choices[4];
    int choice;
    int i = 0;
    int number = checkup_correctness(choice);
    printf ("\nКакие скобки вы хотите ?\n");
    printf ("1)Breaces: {}\n");
    printf ("2)Parentheses: ( )\n");
    printf ("3)Brackets: []\n");
    printf ("4)Tags: < >\n");
    printf ("5)Готово \n");
    printf ("6)Отмена \n");


    printf("\nВыберите: ");
    scanf("%d",&choice);
    i++;
    if (number = 228)
        printf("Вы ввели некорректные данные\n");

    if (choice == 5)
    return 5;



    return 0;
}
