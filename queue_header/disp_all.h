#include "varibles_decalred.h"//it also contains header files
void dispi__19BIT0292(int i)
{
    printf("%d",queue__19BIT0292[i]);
}

void dispi__19BIT0292_pad(int i)
{
    printf("|%20d|\n",queue__19BIT0292[i]);
}

void dispf__19BIT0292(int i)
{
    printf("%f",*(float *)queue__19BIT0292[i]);
}

void dispf__19BIT0292_pad(int i)
{
    printf("|%20.4f|\n",*(float *)queue__19BIT0292[i]);
}

void disps__19BIT0292(int i)
{
    printf("%s",queue__19BIT0292[i]);
}

void disps__19BIT0292_pad(int i)
{
    printf("|%20s|\n",queue__19BIT0292[i]);
}

void dispc__19BIT0292(int i)
{
    printf("%c",queue__19BIT0292[i]);
}

void dispc__19BIT0292_pad(int i)
{
    printf("|%20c|\n",queue__19BIT0292[i]);
}