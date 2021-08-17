#define queue__19BIT0292 q->queue__19BIT0292
void dispi__19BIT0292(queue *q,int i)
{
    printf("%d",queue__19BIT0292[i]);
}

void dispi__19BIT0292_pad(queue *q,int i)
{
    printf("|%20d|\n",queue__19BIT0292[i]);
}

void dispf__19BIT0292(queue *q,int i)
{
    printf("%f",*(float *)queue__19BIT0292[i]);
}

void dispf__19BIT0292_pad(queue *q,int i)
{
    printf("|%20.4f|\n",*(float *)queue__19BIT0292[i]);
}

void disps__19BIT0292(queue *q,int i)
{
    printf("%s",queue__19BIT0292[i]);
}

void disps__19BIT0292_pad(queue *q,int i)
{
    printf("|%20s|\n",queue__19BIT0292[i]);
}

void dispc__19BIT0292(queue *q,int i)
{
    printf("%c",queue__19BIT0292[i]);
}

void dispc__19BIT0292_pad(queue *q,int i)
{
    printf("|%20c|\n",queue__19BIT0292[i]);
}
#undef queue__19BIT0292