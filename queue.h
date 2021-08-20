#include "./queue_header/varibles_decalred.h"//it also contains header files
#include "./queue_header/queue_functions.h"
#include "./queue_header/enqueue_type.h"
#pragma once//restrict double import
//https://stackoverflow.com/questions/479207/how-to-achieve-function-overloading-in-c
//https://www.geeksforgeeks.org/_generic-keyword-c/
#define enqueue(s,a) _Generic(a, int: enqueuei__19BIT0292, char*: enqueues__19BIT0292,double: enqueuef__19BIT0292,char:enqueuec__19BIT0292,float:enqueuef__19BIT0292)(s,a)//char and int will be treated similarly

void q_in(queue *q)
{
    q->r__19BIT0292=-1;
    q->queue__19BIT0292=0;
    q->d_type__19BIT0292=0;
}

void menu(queue *q)
{
    void* (* fp[4])(queue*);
    fp[0]=&dequeue;
    fp[1]=&front;
    fp[2]=&rear;
    fp[3]=&display;
    printf("\n\n\n1)Enqueue\n2)Dequeue\n3)Front\n4)Rear\n5)Display\n6)Exit\n");
    printf("\nEnter your choice: ");
    int c;
    scanf("%d",&c);
    if(c==1)
    {
        printf("\n\nEnter that you to enqueue in the stack: ");
        char s[21];
        scanf("%s",s);
        int a=atoi(s);//convert string to int
        float f=atof(s);
         if((a!=0 || strcmp("0",s)==0)&& f==a)
        {
            enqueue(q,a);
            return menu(q);
        }
        if(f!=0)
        {
            enqueue(q,f);
            return menu(q);
        }
        if(strlen(s)>1)
        enqueue(q,s);
        else
        enqueue(q,s[0]);
        return menu(q);
    }    
    else if(c==6)
    return;
    fp[c-2](q);
    return menu(q);
}
