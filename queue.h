#include "./queue_header/enqueue_type.h"
#pragma once//restrict double import
//https://stackoverflow.com/questions/479207/how-to-achieve-function-overloading-in-c
//https://www.geeksforgeeks.org/_generic-keyword-c/
#define enqueue(a) _Generic(a, int: enqueuei__19BIT0292, char*: enqueues__19BIT0292,double: enqueuef__19BIT0292,char:enqueuec__19BIT0292,float:enqueuef__19BIT0292)(a)//char and int will be treated similarly


//https://technotip.com/8617/pragma-directive-c-program/
void __attribute__ ((constructor)) default_constructor__19BIT0292() //it get called at initailisation of the header file
{ 
    fp__19BIT0292[0]=&denqueue;
    fp__19BIT0292[1]=&front;
    fp__19BIT0292[2]=&rear;
    fp__19BIT0292[3]=&display;
} 

void qmenu()
{
    printf("\n\n\n1)Enqueue\n2)Dequeue\n3)Front\n4)Rear\n5)Display\n");
    printf("\nEnter your choice: ");
    int c;
    scanf("%d",&c);
    if(c==1)
    {
        printf("\n\nEnter that you to enqueue in the stack: ");
        char s[20];
        scanf("%s",s);
        int a=atoi(s);//convert string to int
        float f=atof(s);
         if((a!=0 || strcmp("0",s)==0)&& f==a)
        {
            enqueue(a);
            menu();
        }
        if(f!=0)
        {
            enqueue(f);
            menu();
        }
        if(strlen(s)>1)
        enqueue(s);
        else
        enqueue(s[0]);
        menu();
    }    
    fp__19BIT0292[c-2]();
    menu();
}
