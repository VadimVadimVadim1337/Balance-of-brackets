#include <stdio.h>
#include <string.h>
#include <stdio.h>
int main()
{
	char choice;
	char the_chosen[6]; /* ИИИИИИИИИИИСПОЛЬЗУЙ ЭТОТ МАССИВ*/
	/* Тут шесть ибо 1,2,3,4 =7 символов , а массив начинается с 0*/
	int i,j=0;
	char z[]={','};
	char k[]={'\0'};


    for (i=0; i<4; i++) 
    	the_chosen[i]=9;
    	
        
    /*Заполение массива для выдачи цифры 
    какой выбор пользователь сделал*/

	printf("Эта программа проверяет сблансированность скобок\n\n");

    while (choice != '5') {
        printf ("Какие скобки вы хотите ?\n");
        printf ("1)Breaces: {}\n");
        printf ("2)Parentheses: ( )\n");
        printf ("3)Brackets: {}\n");
        printf ("4)Tags: < >\n");
        printf ("5)Готово \n");
        printf ("6)Отмена \n");
        
        
       if (the_chosen!=0) //показывает какой вариант выбран
        //printf("Вы ввели: %d\n", the_chosen[1]);
        printf("Вы выбрали: "); 


            if (j==0)
        	{
        		printf("Вы пока что ничего не выбрали");
        	} else


            	if (j==1)
        	{
        		printf("%s",&choice);
        		strncat(k,&choice,1);
        	} else
			           
		   {
		       strncat(k,z,1); 
		   	   printf("%s",k);
		   	   printf("%s",&choice);
		   	   strncat(k,&choice,1);
		   }

    	printf("\nВыберете: "); //было Ввод
    	scanf ("%s", &choice);

	j++;

    	switch (choice){
            case '1':

            break;
    
            case '2':

            break;

            case '3':

            break;

            case '4':

            break;

            /* Тут нет 5 ибо эта цифра завершает while*/
            
            case '6':

            break;

            printf("\n");
            
        }	

                      
        printf("\n\n"); //служит для отступа после while(choice)

    } 

	return 0;
}
