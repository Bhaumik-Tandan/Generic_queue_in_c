#include "display_fucntion.h"// it contains the display function
void enqueue__19BIT0292(void* a,int v)
{
    #define t r__19BIT0292
    t++;
    queue__19BIT0292=realloc(queue__19BIT0292,(t+1)*sizeof(void *));//array size increased
    queue__19BIT0292[t]=a;//pointer address given to array
    d_type__19BIT0292=realloc(d_type__19BIT0292,(t+1)*sizeof(short));
    d_type__19BIT0292[t]=v;
    printf("\n");
    disp(t,0);
    printf(" queued");
}
void* denqueue()
{
    #define t r__19BIT0292
    if(t==-1)
    printf("\nQueue is empty");
    else
    {
        printf("\n");
        disp(0,0);
        printf(" dequeued");
        void* a=queue__19BIT0292[0];
        queue__19BIT0292=queue__19BIT0292+1;
        d_type__19BIT0292=d_type__19BIT0292+1;
        t--;
        return a;
    }
}

void* front()
{
    #define t r__19BIT0292
    if(t==-1)
    printf("\nQueue is empty");
    else{
        printf("\nFront Element is: ");
       disp(0,0);
       return queue__19BIT0292[0];
    }
}

void* rear()
{
    #define t r__19BIT0292
    if(t==-1)
    printf("\nQueue is empty");
    else{
        printf("\nRear Element is: ");
       disp(t,0);
       return queue__19BIT0292[t];
    }
}

void* display()
{
    #define t r__19BIT0292
    if(t==-1){
    printf("\nQueue is empty");
    return;
    }
    printf("\nThe whole queue is\n\n");
    printf("%12s\n","|");
    printf("%16s\n","|rear");
    printf("%12s\n","|");    
    printf("%12s\n","v");

    for(int i=t;i>=0;i--)
    disp(i,1);
    printf("%11s\n","|");
    printf("%16s\n","|front");
    printf("%11s\n","|");    
    printf("%11s\n","v");
}