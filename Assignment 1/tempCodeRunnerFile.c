#include <stdio.h>
int main()
{
    int x=1;
    switch(x)
    {
            case 2:
                printf("%d\n",2);
            case 1:
                printf("%d\n",1);
                
            case 3:
                printf("%d\n",3);
                break;
            default:
                printf("NON");
                break;
    }

}
