#include <stdio.h>
int main()
{
   /*label:
    printf("we are inside label");
    goto end;
    printf("Hello World\n");
    goto label;
    end:
    printf("we are at end");
    return 0;*/  //here using label if we use goto creats a confusion the correct usage of goto is as follow:
    int num;
    for ( int i = 0; i < 8; i++)
    {
        printf("%d\n",i);
        for (int j = 0; i < 8; i++)
        {
           printf("Enter the number. enter 0 to exit\n");
           scanf("%d",&num);
           if(num==0){
            goto end;
         //   break;v //here break will help to exit from just above loop but if u have to exit from all above loops then goto will help.
           }
           
        }
        
    }
    end:

}
