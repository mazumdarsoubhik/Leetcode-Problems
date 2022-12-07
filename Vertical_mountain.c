/******************************************************************************

                        Vertical Mountain using Asterisk
            General brute force approach gives O(n^2) time complexity
                My code does the magic in O(n) time complexity

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    printf("Vertical Mountain\n");
    
    int h = 10;
    int w = h/2+(h%2);
    int ind;
    
    char b[w+1];
    
    while (h >= 1){
        if ((w-h) <= 0){
            ind=9-h;
            // printf("%d",ind);
            *(b+ind) = '*';
        }
        else{
            ind=h;
            // printf("%d",ind);
            *(b+ind) = ' ';
        }
        
        printf("%s %c", b,'\n');
        
        h--;
    }

    return 0;
}

/******************************************************************************
                                     OUTPUT
* 
** 
*** 
**** 
***** 
****  
***   
**    
*  

*******************************************************************************/
