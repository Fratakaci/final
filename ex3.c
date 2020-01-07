#include <stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int a[100];
    int m=1;
    int x=0;

    for(m=1;m<argc;m++,x++)
    {
        a[x]=atof(argv[m]);
    }
    
    int i ;
    int min=a[0];

    for(i=0;i<argc;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }

    if(argv[1]==EOF)
    {
        printf("The program needs at least one integer parameter to run\n");
    }
    else if(argv[2]=='what')
    {
        printf("The parameter has to be an integer format\n")
    }
    else
    {
        printf("Min parameter is %d\n",min);
    }
}