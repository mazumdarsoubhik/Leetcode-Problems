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

/******************************************************************************

                        Cat Ear with Real Number
                        Time complexity: O(n)
Output:
1      1 
12    21 
123  321 
12344321

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    printf("Cat Ear with Real Number\n");
    int n = 4;    
    char b[100];
    for (int i=0; i < 2*n; i++) b[i] = ' ';
    
    for (int j=1; j <= n ; j++){
        b[j-1] = j + '0';
        b[2*n-j] = j + '0';
        printf("%s %s", b, "\n");
    }

    return 0;
}

/******************************************************************************

                        Right triangle with real numbers
                        Time complexity: O(n^2)
Output:
1  
2  3  
4  5  6  
7  8  9  10  
11  12  13  14  15

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    printf("Right triangle with real numbers \n");
    
    int n = 15;
    int o=0;
    
    for (int i=1; o<=n-1; i++){
        for (int j=0;j<i && o <= n-1;j++) {
            o++;
            printf("%d %c", o,' ');
        }
        printf("%s","\n");
    }

    return 0;
}

/******************************************************************************

                        Right triangle with alphabets
                        Time complexity: O(n)
                        Brute force: O(n^2)
Output:
A 
AB 
ABC 
ABCD 
ABCDE

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    printf("Right triangle with alphabets \n");
    
    char a = 'A';
    int n = 5;
    char b[100];
    int ind = 0;
    for(int i=0; i < n; i++){
        b[i] = a + ind;
        ind++;
        printf("%s %s", b,"\n");
    }

    return 0;
}

/******************************************************************************

                        Reverse Right triangle with alphabets
                        Time complexity: O(n)
                        Brute force: O(n^2)
Output:
ABCDE 
ABCD 
ABC 
AB 
A

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    printf("Reverse Right triangle with alphabets \n");
    
    char a = 'A';
    int n = 5;
    char b[100];
    
    for (int k=0; k < n; k++) b[k] = a + k;
    
    printf("%s %s", b,"\n");
    
    for(int i=n-1; i >= 0 && b[0] != '\0'; i--){
        b[i] = '\0';
        printf("%s %s", b,"\n");
    }

    return 0;
}

