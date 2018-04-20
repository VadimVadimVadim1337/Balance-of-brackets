#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
   char choice[2];
   int i=0;
	
   char z[1];
   char k[100]; 
   z[0]=',';
  	
	printf("Эта программа проверяет сблансированность скобок\n\n");

	
    while (choice[0] != '5') {
     
    	printf ("Какие скобки вы хотите ?\n");

    	       
    	printf("Эта программа проверяет сблансированность скобок\n\n");

    while (choice != '5') {
        printf ("Какие скобки вы хотите ?\n");
        printf ("1)Breaces: {}\n");
        printf ("2)Parentheses: ( )\n");
        printf ("3)Brackets: {}\n");
        printf ("4)Tags: < >\n");
        printf ("5)Готово \n");
        printf ("6)Отмена \n");
        

       
        printf("\nВыберите: ");
        scanf("%s",&choice[0]); 
		
		printf("\nВы выбрали: "); 
    		       	
        i++;
			    			
    			
    			if ((choice[0] < '1') || (choice[0] > '6'))
    			{
    				printf("Выберите из списка!\n\n");
    				i--;
    				continue;
    				
    			}

    			if ((i == 1) && (choice[0] == '5'))
			    {
			    	choice[0]='a';// любой символ
			    	printf("Вы ничего не выбрали\n\n");
			    	i--;
			    	continue;
			    }   
			    else
			    {
			    	if (choice[0] == '5')
					{
					    printf("Выход из программы\n");
						exit(EXIT_SUCCESS);
					}
			    }	

			    if ((choice[0] == '6'))
			    {
			    	printf("Введите заново\n\n");
			    	memset(k,0,100);//или strcpy(k,"");
			    	i=0;
			    	continue;
			    }

            	    if (i==1)
        		{
        			printf("%c",choice[0]);
        			strncat(k,choice,1);//или &choice[0]
        		}   else
			           
		   	    {    
		        	 strncat(k,z,1);
		        	 printf("%s",k); 
		        	 printf("%c",choice[0]);// или %s choice
		   	    	 strncat(k,choice,1);//или &choice[0]

        		    }
        


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

    	

		      	   
    	switch (choice[0])
    	{
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
