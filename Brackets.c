#include <stdio.h>
#include <string.h>
#include <stdio.h>
int main()
{
	char choice;
	char the_chosen[4];
	int i;
	
	char k[]={'\0',',','\0'};
	char l[2]={',','\0'};
	
    for (i=0; i<4; i++)
    	the_chosen[i]=i+1;
    /*Заполение массива для выдачи цифры 
    какой выбор пользователь сделал*/

	printf("This program checks balance braces, parentheses, brackets, and tags in your code \n\n");

    while (choice != '5'){
        printf ("Какие скобки вы хотите ?\n");
        printf ("1)Breaces: {}\n");
        printf ("2)Parentheses: ( )\n");
        printf ("3)Brackets: {}\n");
        printf ("4)Tags: < >\n");
        printf ("5)Готово \n");
        printf ("6)Отмена {}\n");
        
        i=i+1;

        if (the_chosen!=0) //показывает какой вариант выбран
        //printf("Вы ввели: %d\n", the_chosen[1]);
    	printf("Вы ввели: "); //было Ввод
    	scanf ("%s", &choice);

		
    	
        switch (choice){
            case '1':
            printf("Один\n");
            //the_chosen=1;
            break;
    
            case '2':
            printf("Два\n");
            //the_chosen=2;
            break;

            case '3':
            printf("Три\n");
            //the_chosen=3;
            break;

            case '4':
            printf("Четыре\n");
             //the_chosen=4;
            break;

            /* Тут нет 5 ибо эта цифра завершает while*/
            
            case '6':
            printf("Шесть\n");
            //the_chosen=6;
            break;
        }
        
        	   			          	   
        	   strncat (k, &choice, 1);
        	   
        	   strncat (k, l, 1);
        	   
        	   printf("%s", k);
        	                
             	
        	              
        printf("\n\n"); //служит для отступа после while(choice)

    } 

	return 0;
}
