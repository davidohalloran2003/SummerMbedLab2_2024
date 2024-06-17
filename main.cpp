#include "mbed.h"

/*
next term is the sum of the previous two terms.
The first two terms of the Fibonacci sequence are 0 folowed by 1.

Three control elements for the loop. 
First one is initialisation. Generally this is an integer.  
Second one is the stop. i<=5 for example. 
Finally is Control. This indicates how the loop is being controlled. i++ for example. Incrementally increasing the value. 

For the below coding, max_terms means to print the max amount of terms indicated in the variable.
For the looping next_term will print the next term 

Finbonachi series: 0,1,1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233,




*/

// main() runs in its own thread in the OS

int t_1 = 0;
int t_2 = 1;
int next_term = 0;

int max_terms = 12;

int main()
{

 printf("Finbonachi series: %d,%d,", t_1, t_2);
    for (int i=0; i<max_terms; i++){ 
    next_term = t_1 + t_2;
    printf("%d, ", next_term);
        t_1 = t_2;
        t_2 = next_term;
   
    }

 printf("\r\n");
    

    while (true) {

    }
}