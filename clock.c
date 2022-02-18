#include<stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <direct.h>

int main()
{
    int h=0,s=0,m=0,h1=1,m1=0,s1=0;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_INTENSITY|BACKGROUND_GREEN);
    printf("Please enter the current time in HH:MM:SS :");
    scanf("%d%d%d",&h,&m,&s);
    
    printf("set alam time in HH:MM:SS ");
    scanf("%d %d %d",&h1,&m1,&s1);
    start: 
    if(h<24 && m<60 && s<60)
    {
    for(h;h<24;h++)
    {
        for(m;m<60;m++)
        {
            for(s;s<60;s++)
            {
                
                Sleep(1000);
                system("CLS");
                printf("\033[0;36m"); 
                printf("\n\n\n\n\n                       %d : %d : %d ",h,m,s);
            if (h==h1 && m==m1 && s==s1)
            {
                   Beep(750,300);
                   Beep(750,300);
                    
                    
            }    
            
                if(h<12)
                {
                    printf(" PM");
                }
            else
                {
                 printf(" AM");
                }
            }  
            // for(double i=0;i<3619999;i++)
            // {
            //     i++;
            //     i--;
            // }        
            s=0;
        }
        m=0;
    }
    h=0;
    goto start;
    return 0;
    }
    else 
    printf("Enter the time in correct format...");
}
