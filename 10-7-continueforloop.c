#include <stdio.h>
int main()
{
    printf("Hello World\n");
    int i, age;
    for(i=0; i<10; i++){
        printf("%d\nEnter your age\n",i);
        scanf("%d",&age);
        if(age>10){
            continue;
        }
        printf("we wount execute if continue statement is in progress\n");
        printf("we wount execute if continue statement is in progress\n");
        printf("we wount execute if continue statement is in progress\n");
        printf("we wount execute if continue statement is in progress\n");
        printf("we wount execute if continue statement is in progress\n");
        printf("we wount execute if continue statement is in progress\n");
    }

    
    return 0;
}
