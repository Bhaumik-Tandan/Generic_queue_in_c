
# Generic Queue using C

This project explore that how can we implement the
concept of polymorphism in C with the help of void and 
function pointer. It also helps us to understand that  how
can we create a hetrogeneous array in C.

# Sample Code
```
#include<queue.h>
main()
{
   queue q;
   q_in(&q);
   enqueue(&q,'c');
   front(&q);
   rear(&q);
   menu(&q);
   enqueue(&q,(char)'c');
   rear(&q);
}
```
![image](https://user-images.githubusercontent.com/62440699/130285483-29ba5346-2375-49c9-aef2-9220aca3995b.png)
![image](https://user-images.githubusercontent.com/62440699/130285541-22f5e024-427c-4c42-9a71-2e489091a265.png)
![image](https://user-images.githubusercontent.com/62440699/130285552-b26c49ea-95bd-405f-95a5-e7e0fb9b1634.png)


## Documentation

This queue supports elements of any data type.

### Initialise
You can have to first declare and initialse the
queue varible by writing

```bash
 queue q;
 q_in(&q); //this line is important
```
### Enqueue
Elements of any data type can be queued by writing
the command 

```bash
 enqueue(&<enqueue_variable>,<item to be queued>);
```
#### Enqueuing integer

You can enqueue integer by creating an integer varible
or by directly passing the integer like this:

```bash
 enqueue(&q,23);
```

#### Enqueuing float
Doubles and floats are treated similary, and
if you enter some value out of the range of 
float it will convert it to float.

You can queue float by creating an float varible
or by directly passing the float like this:

```bash
 enqueue(&q,23.32);
```

#### Enqueuing string
Anything which is entered inside double qoutes
is treated as string.

You can enqueue string by creating an string varible
or by directly passing the string like this:

```bash
 enqueue(&q,"sdfs");
```

#### Enqueuing character
Anything which is entered inside single qoutes
is treated as character, but note that C treates
character internally as integers.

So if you declare a character varible and then enqueue
it inside the queue it will work fine

But if you directly pass something in single qoutes like
this:

```bash
 enqueue(&q,'c');
```
![image](https://user-images.githubusercontent.com/62440699/130274170-258c0e46-f94e-4ff1-b49a-3e18800beaba.png)

C will treat it as an integer so it as an integer,
and will push it's ascii value into the queue 

In order to enter it corectly you must mention char
in brackets like this

```bash
 enqueue(&q,(char)'c');
```
![image](https://user-images.githubusercontent.com/62440699/130274587-f149b963-6b60-420c-b150-9ab1ca85d45c.png)


### Dequeue

Elements can be dequeue from the queue by entering

```bash
dequeue(&q);
```
You can also  save the varible the varibles of all 4
types like this

```bash
float *a=dequeue(&s);
char c=dequeue(&s);
int i=dequeue(&s);
char *st=dequeue(&s);
```

### Display
You can display the whole queue using display function
```
display(&q);
```

### Front/Rear

It displays as well as returns the front/rear element of the queue

You can store it's value in a varible as you do in dequeue.

```
int a=front(&q);
int c=rear(&q);
```
![image](https://user-images.githubusercontent.com/62440699/130281388-0f84a262-8b8f-4c01-a52a-91d1bf7e8a9d.png)
## Queue menu
You can directly interact with the queue by initialising 
the queue and then entering:-

```
menu(&q)
```
![image](https://user-images.githubusercontent.com/62440699/130281907-9507e0ce-7bad-4752-abf8-8be10b981844.png)

You can enqueue anything float,integer,character and string.
Note that the program treats a single character entered as 
string

![image](https://user-images.githubusercontent.com/62440699/130282154-666b6dc6-1c48-41cf-986a-884c82616466.png)
![image](https://user-images.githubusercontent.com/62440699/130282294-6a918e31-a671-43cd-aea4-44883a68f354.png)

You can display the whole queue by entering 5 


![image](https://user-images.githubusercontent.com/62440699/130282582-0c6eccef-2b63-426c-8b33-ed8cab13a05f.png)

You can  just display the front/rear using 3/4

![image](https://user-images.githubusercontent.com/62440699/130282663-103111bf-429d-431d-88f1-cde2264c309d.png)

You can dequeue out any element from the queue using dequeue option

![image](https://user-images.githubusercontent.com/62440699/130282835-98e330e9-b714-4604-b066-f35117b30649.png)

For exiting from the menu you may press 6 and you can also perform futher operation
on the same queue by using above mentioned functions present in the documentation
## Installation

Clone the repository to your local system using the command
```bash
  git clone https://github.com/Bhaumik-Tandan/Generic_queue_in_c
```

In order to include the file from anywhere you must add
the queue_header folder and you queue.h file in your sytem's
include folder.

You can check it's path using the command

```bash
  gcc -v /dev/null
```

And then paste the folder and file inside it

![image](https://user-images.githubusercontent.com/62440699/130283142-ab6a30a1-0b8f-410c-aff7-c183e873e5a0.png)
![image](https://user-images.githubusercontent.com/62440699/130283183-e77a8ba8-553c-44d0-8a99-4dc50d06f230.png)
![image](https://user-images.githubusercontent.com/62440699/130283278-e9a95dd8-ea3f-4875-bffc-26dc61c6a8f5.png)


Now you can include the header file from anywhere by using

```bash
  #include <queue.h>
```

If you don't want to place it in your include folder 
you can also use it by saving the code file, in the same
folder and including the header file in it by using the 
command
Now you can write
```bash
   #include "queue.h"
```


    
# Tech 
### varibles_decalred.h 
It constains the defination of
of strcture of queue.
It also includes the header files:

```
#include<stdio.h>
#include<stdlib.h>
```
So if the user is using queue.h
header file so he is not bound to import
these files.
He can directly write code like this:

```
#include<queue.h>

main()
{
    printf("Something");
}
```
And it will work without an error

### disp_all.h

It constains 8 functions 2 functions
for each datatype to print the output.
In case when the display function is 
called to display the whole queue we need
to create bucket like strcture to print the
queue, to accomplish this task we call 
the pad function otherwise we call the normal
function

### display_fucntion.h

It constains a single function which is called
everytime we dispaly something, be it enqueue, dequeue,etc.

Header file disp_all.h is only accesble through this
function only as it has been imported inside it.

It constains a 2d function pointer in order to elimiate
if else block, and the functions are called as per 
the value of f and data type of the element present at
postion i of the queue.

### enqueue_main.h
It is main enqueue function which directly enqueues
an element in the queue.
Value of v tells which data type the element
belongs to.

This information is usefull which giving output.

### enqueue_type.h

A void pointer can store integers and characters directly,
whereas in order to store floats and strings we need to store
their value in a memory blcok and then store their address in the
void pointer.

To achieve this task we need different functions to treat data
accordingly before pushing it into the queue.

This header file constains 4 functions for each data type.

### queue_functions.h

It contains other functions of the queue which are diretly
callable by the user.

## queue.h

All the nessesary header files are included in this file,
functions in which will be used by the user

It contains the defination of a generic function enqueue
which passes on to the value of element to be queued, to
the respective function as per the datatype.

The q_in function initilises the initial values of the queue

And the menu function displays the menu, and calls the function
from the function pointer.

If the user opts to enqueue something in the queue thorugh the menu,
so we need to store it teporarily in a string,
and later as per the datatype we need to convert the string.

Here it is assumed that if the user enters an integer, so
wants it to be treated as integer.

If he enters something with flaoting point so he wants it to be treated 
as float.

In case he enters a single character he wants to enqueue a character.

In case the user wants to exit we need to roll back to the recursion 
queue so anywhere menu is called inside menu function, it is given a return.





## Related

Here are some related projects

[Generic linked list](https://github.com/Bhaumik-Tandan/Generic_linked_list_in_c)

[Generic stack](https://github.com/Bhaumik-Tandan/Generic_Stack_using_c)

  
## 🛠 Skills Used
C...

  
