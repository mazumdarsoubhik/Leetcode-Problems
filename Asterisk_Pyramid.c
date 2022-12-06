/******************************************************************************

                            Pyramid of Asterisk
           General brute force approach does it in O(n^2) time complexity
                My code does the magic in O(n) time complexity

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    printf("Asterisk Pyramid Problem\n");
    
    int i=9;                                // Base of our pyramid is 9
    char a=' ';                             // Spaces as filler
    char b[10];                             // String or char buffer of size 10 
    
    for (int k=1;k<=i;k++) strncat(b,&a,1); // Fill the buffer with empty Spaces
    int middle = ceil(9/2);                 // Middle of the string array
    
    while (i >= 1){                         // Looping 9 times i.e no. of base times

        int stars = 9-i+1;                  // Total no. of stars at each level
        int lt = middle - ((stars-1)/2);    // Left index of star in array -- goes for every level
        int rt = middle + ((stars-1)/2);    // Right index of star in array -- goes for every level

        *(b+lt) = '*';                      // Set * at left index
        *(b+rt) = '*';                      // Set * at right index
        
        printf("%s %s",b,"\n");             // Print the array of each level

        i=i-2;                              // Decrement by 2 eveytime 

    }

    return 0;
}
