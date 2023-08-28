#include <stdio.h>
#define PI 3.14 //when this is defined in pre processing statement they are opened at start initial and cannot be changed in main function.
int main()
{
    int a = 8;
    const float b = 7.333;
    //b = 7.90; this is not allowed when we have already defined const as 7.333
    printf("Hello World\n"); //\n is single charachter as per escape sequesnces
    printf("The defined PI value is: %f\n",PI);
    printf("The value of a is %d and the value of b is %8.4f\n",a , b);
    //8.4 means --> 8 character space print the decimal number with 4 decimal accuracy the space is provided before the decimal number.
      printf("The value of a is %d and the value of b is %-18.4f there is space between me and number\n",a , b);
      //here -18.4 bring 18 charachter space after number with four decimal point accuracy.
      printf("My backslash is : \\");
      printf("\nMy backslash n is : \\n");
      printf("\nMy Tab character is \t\t\t\t can u see the space between us");
      printf("\nMy windows makes a sound with: \a");
      //this is my single line comment
      /* This 
      is 
      my
      multiline Comment*/


    return 0;
}
