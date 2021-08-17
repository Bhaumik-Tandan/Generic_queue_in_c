void enqueue__19BIT0292(queue *q,void* a,int v)
{
    #include "display_fucntion.h"
    #define t q->r__19BIT0292
    t++;
    q->queue__19BIT0292=realloc(q->queue__19BIT0292,(t+1)*sizeof(void *));//array size increased
    q->queue__19BIT0292[t]=a;//pointer address given to array
    q->d_type__19BIT0292=realloc(q->d_type__19BIT0292,(t+1)*sizeof(short));
    q->d_type__19BIT0292[t]=v;
    printf("\n");
    disp(q,t,0);
    printf(" queued");
}