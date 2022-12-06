/******************************************************************************

                            Barfi using Asterisk
            General brute force approach gives O(n^2) time complexity
                My code does the magic in O(n) time complexity

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    printf("Asterisk Pyramid Problem\n");
    
    int n = 9;
    int i=n;                                // Base of our pyramid is 9
    char a=' ';                             // Spaces as filler
    char c='*';
    char b[n+1];                             // String or char buffer of size 10 
    
    for (int k=1;k<=n;k++) strncat(b,&a,1); // Fill the buffer with empty Spaces
    int middle = ceil(n/2);                 // Middle of the string array
    
    while (i >= 1){                         // Looping 9 times i.e no. of base times

        int stars = n-i+1;                  // Total no. of stars at each level
        int lt = middle - ((stars-1)/2);    // Left index of star in array -- goes for every level
        int rt = middle + ((stars-1)/2);    // Rigth index of star in array -- goes for every level

        *(b+lt) = '*';                      // Set to * at left index
        *(b+rt) = '*';                      // Set to * at right index
        
        printf("%s %s",b,"\n");             // Print the array of each level

        i=i-2;                              // Decrement by 2 eveytime 

    }
    
    // Bottom or Reflection of pyramid
    i=9;
    while (i >= 1){
        
        int stars = n-i;                     // Total no. of spaces at each level
        int lt = ((stars)/2);                // Left index of star in array -- goes for every level
        int rt = 8 - ((stars)/2);            // Right index of star in array -- goes for every level

        *(b+lt) = ' ';                      // Set space at left index
        *(b+rt) = ' ';                      // Set space at right index
        
        printf("%s %s",b,"\n"); 
        
        i=i-2;
    }

    return 0;
}


/******************************************************************************
                                      Output
    *     
   ***    
  *****   
 *******  
********* 
 *******  
  *****   
   ***    
    *  
*******************************************************************************/
