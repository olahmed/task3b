/**
 ******************************************************************************
 * @file           : task3
 * @author         : ola ahmed
 * @brief          : Contains the functionality of my application
 ******************************************************************************
 */

/* ********************** Includes Section Start ********************** */
    #include <stdio.h>
    #include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Macro Section Start ************************* */

/* ********************** Macro Section End   ************************* */

/* ******************* Global Variables Section Start ************** */

/* ********************** Global Variables  Section End   ************* */

/* ********************** Global Decleration Section Start ************* */

/* ********************** Global Decleration  Section End   ************ */

/* ********************** Sub-Program Declerations Section Start ******* */

/* ********************** Sub-Program Declerations Section End ******* */

/* ********************** Sub-Program Section Start ************* */
   int main()
{
   unsigned int number;
   unsigned int rev_number;
    printf("enter the number: ");
    scanf("%d",&number);
    rev_number=(number % 10) * 100;
    rev_number=rev_number+((number / 10) % 10) * 10;
    rev_number=rev_number+(number / 100);
    if(number == rev_number)
    {
        printf("the number is palindrome number");
    }
    else
    {
        printf("the number is not palindrome number");
    }
    return 0;
}
/* ********************** Sub-Program Section End ************* */

/**
 ******************************************************************************
 User          Date                 Brief
 ******************************************************************************
 ola ahmed      30jan2024           third task b
*/
