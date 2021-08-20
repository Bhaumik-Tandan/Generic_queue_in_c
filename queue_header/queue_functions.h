#define t q->r__19BIT0292
#define  d_type__19BIT0292 q->d_type__19BIT0292
void* dequeue(queue *q)
{
    #include "display_fucntion.h"// it contains the display function
    if(t==-1)
    printf("\nQueue is empty");
    else
    {
        printf("\n");
        disp(q,0,0);
        printf(" dequeued");
        void* a=q->queue__19BIT0292[0];
        q->queue__19BIT0292 = q->queue__19BIT0292+1;
        q->d_type__19BIT0292 = q->d_type__19BIT0292+1;
        t--;
        return a;
    }
}

void* front(queue *q)
{
    #include "display_fucntion.h"// it contains the display function
    if(t==-1)
    printf("\nQueue is empty");
    else{
        printf("\nFront Element is: ");
       disp(q,0,0);
       return q->queue__19BIT0292[0];
    }
}

void* rear(queue *q)
{
    #include "display_fucntion.h"// it contains the display function
    if(t==-1)
    printf("\nQueue is empty");
    else{
        printf("\nRear Element is: ");
       disp(q,t,0);
       return q->queue__19BIT0292[t];
    }
}

void* display(queue *q)
{
    #include "display_fucntion.h"// it contains the display function
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
    disp(q,i,1);
    printf("%11s\n","|");
    printf("%16s\n","|front");
    printf("%11s\n","|");    
    printf("%11s\n","v");
}
#undef t
#undef d_type__19BIT0292 
