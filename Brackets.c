#include <stdio.h>
int main()
{
	int choice=0;
	int the_chosen[4];

    for (int i=0; i<4; i++)
    	the_chosen[i]=i+1;
    /*Заполение массива для выдачи цифры 
    какой выбор пользователь сделал*/

	printf("This program checks balance braces, parentheses, brackets, and tags in your code \n\n");

    while (choice != 5){
        printf ("Какие скобки вы хотите ?\n");
        printf ("1)Breaces: {}\n");
        printf ("2)Parentheses: ( )\n");
        printf ("3)Brackets: {}\n");
        printf ("4)Tags: < >\n");
        printf ("5)Готово \n");
        printf ("6)Отмена {}\n");
        
        if (the_chosen!=0) //показывает какой вариант выбран
        printf("Вы ввели: %d\n", the_chosen[1]);
    
        printf("Ввод: ");
        scanf ("%d", &choice);
    
        switch (choice){
            case 1:
            printf("Один\n");
            //the_chosen=1;
            break;
    
            case 2:
            printf("Два\n");
            //the_chosen=2;
            break;

            case 3:
            printf("Три\n");
            //the_chosen=3;
            break;

            case 4:
            printf("Четыре\n");
             //the_chosen=4;
            break;

            /* Тут нет 5 ибо эта цифра завершает while*/
            
            case 6:
            printf("Шесть\n");
            //the_chosen=6;
            break;
        }

        printf("\n\n"); //служит для отступа после while(choice)

    }

	return 0;
}