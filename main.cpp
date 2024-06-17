#include "mbed.h"

/*
// next term is the sum of the previous two terms.
// The first two terms of the Fibonacci sequence are 0 folowed by 1.

// Three control elements for the loop. 
// First one is initialisation. Generally this is an integer.  
// Second one is the stop. i<=5 for example. 
// Finally is Control. This indicates how the loop is being controlled. i++ for example. Incrementally increasing the value. 

// For the below coding, max_terms means to print the max amount of terms indicated in the variable.
// For the looping next_term will print the next term 

// Finbonachi series: 0,1,1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233,

// Recursive Loop:  the circular approach as a function implementation that calls itself at each step until it hits the base or the termination condition.


*/

// main() runs in its own thread in the OS

int t_1 = 0;
int t_2 = 1;
int next_term = 0;

int max_terms = 12;

int fib(int n) {
    // input : position of fib sequence
    // output: is the number in the sequence

    // So if the starting position is 1 and 0 as per this example, the Recursive Loop action in place here would call the answer for a certain position in the sequence. 
    // If for example we want to know the answer for position 8 in the sequence the code would return an answer  
    // Finbonachi series recursive:0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 

    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else {
        return(fib(n-1) + fib(n-2));
    }

}

int main()
{

    //     printf("Finbonachi series loop: %d,%d,", t_1, t_2);
    //     for (int i=0; i<max_terms; i++){ 
    //     next_term = t_1 + t_2;
    //     printf("%d, ", next_term);
    //     t_1 = t_2;
    //     t_2 = next_term;
    // }
    //     printf("\r\n");
    

    printf("Finbonachi series recursive:");
        for (int i=0; i<max_terms; i++){ 
        printf("%d, ", fib(i));
       
    }
        printf("\r\n");
    

    while (true) {

    }
}