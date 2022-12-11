/******************************************************************************

                        Right angle triangle of 1/0
                        Time Complexity : O(n^2)
Output:
1
01
101
0101
10101

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    printf("Vertical Mountain\n");
    
    int n=5;
    
    for (int i=1;i <=n; i++){
        int k = i%2;
        for(int j=0; j < i; j++) {
            printf("%d",k) ;
            k=!k;
        }
        printf("%s","\n");
    }

    return 0;
}

