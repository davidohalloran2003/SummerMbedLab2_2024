#include "mbed.h"

/*
next term is the sum of the previous two terms.
The first two terms of the Fibonacci sequence are 0 folowed by 1.

Three control elements for the loop. 
First one is initialisation. Generally this is an integer.  
Second one is the stop. i<=5 for example. 
Finally is Control. This indicates how the loop is being controlled. i++ for example. Incrementally increasing the value. 
So, in this case it will start off at zero, and will incrementally increase the vale of i after every loop, checks if it is less than 5, and continues. This example will print Loop 1 - Loop 4 as it has been coded to return a value up to <5. 
Print result in this case 
Finbonachi series: 0,1, 
loop 0 
loop 1 
loop 2 
loop 3 
loop 4 
loop 5 


*/

// main() runs in its own thread in the OS

int t_1 = 0;
int t_2 = 1;
int next_term = 0;

int max_terms = 10;

int main()
{

 printf("Finbonachi series: %d,%d, \r\n", t_1, t_2);
    for (int i=0; i<=5; i++){ 
        printf("loop %d \r\n", i);
    }

    while (true) {

    }
}