// SIMPLE CLOCK PROGRAM

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
    int h, m, s;
    int slp = 1;
    printf("Set time -> HH:MM:SS\n");
    scanf("%d%d%d", &h, &m, &s);

    if(h>12 || m>60 || s>60)
    {
        printf("ERROR\n");
        exit(1);
    }

    while(1)
    {
        s++;

        if(s>60)
        {
            m++;
            s=0;
        }
        if(m>59)
        {
            h++;
            m=0;
        }
        if(h>12)
        {
            h=1;
        }
        system("clear");
        //fflush(stdout);
        printf("\t\t\t\t CLOCK"); 
        printf("\n\n\t\t\t\t%.2d:%.2d:%.2d", h, m, s);
        fflush(stdout); 
        sleep(slp);
    }

    return 0;
}