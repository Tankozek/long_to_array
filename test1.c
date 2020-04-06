#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

int main(void)

{
    int i;
    long j;
    float k;
    // make an array of int type with an index of 16.
    // the size of the array for now is to text the code below
    // will automate once I nail the for() down
    int cc[16];

    // get a long type from the user and store it under numbers. using 4003600000000014 as the input for this test,
    // I keep getting the incorrect output (see below)
// 4
// 1
// 0
// 0
// 0
// 0
// 0
// 0
// 0
// 0
// 0
// 5- This should be 6, not sure why it comes out as a 5
// 3
// 0
// 0
// 4
    long numbers = get_long("Numbers: ");
    // the for() should iterate over var numbers and, starting with
    // the len of array cc - 1

    // int i is equal to the len of array cc - 1 and will decrease by 1
    // after each loop

    // long j is set to 10 and will represent the base 10 at which I use the
    // % fuction on the ith number of numbers

    // float k is set to 1 and will be muiltplied after %j so as to be able
    // to get the ith digit of numbers

    for (i = 15, j = 10, k = 1; i >= 0; i--)
    {
        // the ith digit of numbers will be stored in array cc, starting from
        // the last digit to the first
        cc[i] = trunc(numbers % j) * k;
        // test printf to see that the correct # is stored in cc[16]
        printf("%i\n", cc[i]);
        // var j is * 10 to ensure we are only working with the correct digit
        j = j * 10;
        // var j is * 0.1 so when we use it in the expression above, we get the
        //ith digit solo
        k = k * 0.1;
    }
}
    
