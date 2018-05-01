#include <ctest.h>
#include "main.h"

CTEST(test, checkup_correctness) 
{	
    int number=0;
    const int wrong = 228;
    int correctly = number;

    int check1=checkup_correctness(number);

    ASSERT_EQUAL(wrong, check1); // должно выдасть то же числл при 1 до 5

    number=1;
    correctly = number;

    int check2=checkup_correctness(number);

    ASSERT_EQUAL(correctly, check2); 

    number=2;
    correctly = number;

    int check3=checkup_correctness(number);

    ASSERT_EQUAL(correctly, check3); 

    number=3;
    correctly = number;

    int check4=checkup_correctness(number);

    ASSERT_EQUAL(correctly, check4); 

    number=4;
    correctly = number;

    int check5=checkup_correctness(number);

    ASSERT_EQUAL(correctly, check5); 

    number=5;
    correctly = number;

    int check6=checkup_correctness(number);

    ASSERT_EQUAL(correctly, check6); 

    number='f';
    correctly = number;

    int check7=checkup_correctness(number);

    ASSERT_EQUAL(wrong, check7); 

}