void enqueuei__19BIT0292(queue *q,int a)
{
    #include "enqueue_main.h"
    enqueue__19BIT0292(q,a,0);
}
void enqueuef__19BIT0292(queue *q,float a)
{
    #include "enqueue_main.h"
    float *f=malloc(sizeof(float));
    *f=a;
    enqueue__19BIT0292(q,f,1);
}
void enqueues__19BIT0292(queue *q,char * a)
{
    #include "enqueue_main.h"
    char *p=malloc(sizeof(char)*21);
    strcpy(p,a);//this exists even after memory assigned
    enqueue__19BIT0292(q,p,2);
}
void enqueuec__19BIT0292(queue *q,char a)
{
    #include "enqueue_main.h"
    enqueue__19BIT0292(q,a,3);
}