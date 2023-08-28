#include <stdio.h>
int main()
{
    int age, marks;
    printf("Enter your age: \n");
    scanf("%d",&age);
      printf("Enter your Marks: \n");
    scanf("%d",&marks);

    switch (age)
    {
    case 3:
        printf("The age is 3\n");
        switch (marks)
        {
        case 50:
            printf("Your marks are 50");
            break;
        
        default:
            printf("Your marks are not 45");
        }
        break;
    case 13:
        printf("The age is 13\n");
        break;
    case 23:
        printf("The age is 23\n");
        break;
    
    default:
    printf("Age is not 3, 13 or 23\n");
        break;
    }
    return 0;
}
