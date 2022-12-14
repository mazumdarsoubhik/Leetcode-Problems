/******************************************************************************
                            Pyramid of Asterisk
                           Time complexity: O(n)
                           Brute force: O(n^2)
Output:

    *     
   ***    
  *****   
 *******  
********* 

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

/******************************************************************************
                            Barfi using Asterisk
                           Time complexity: O(n)
                           Brute force: O(n^2)
Output:

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

/******************************************************************************

                        Right triangle with alphabets
                        Time complexity: O(n^2)
                        Brute force: O(n^2)
Output:
A
BB
CCC
DDDD
EEEEE

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

    
    for(int i=0; i < n; i++){
        for(int j=0; j <= i; j++) printf("%c", a + i);
        printf("%s","\n");
    }

    return 0;
}

/******************************************************************************

                        Right triangle with reverse alphabets
                        Time complexity: O(n^2)
                        Brute force: O(n^2)
Output:
E 
ED 
EDC 
EDCB 
EDCBA

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    printf("Right triangle with reverse alphabets \n");
    
    char a = 'A';
    int n = 5;
    char b[100];
    int ind = n-1;
    
    for(int i=0; i < n; i++){
        b[i] = a + ind;
        ind--;
        printf("%s %s", b,"\n");
    }

    return 0;
}

/******************************************************************************

                        Alphabet Pyramid
                        Time complexity: O(n^2)
                        Brute force: O(n^2)
Output:
   A    
  ABA   
 ABCBA  
ABCDCBA

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    printf("Alphabet Pyramid \n");
    
    int n = 4;
    char a = 'A';
    int lst = 0;
    
    for(int i=1; i<=n ; i++){
        char b[100];
        for(int j=0;j<n-i;j++)          // Left Space .
        {
            b[j] = ' ';
        }
        
        for(int k=1; k<i ; k++){        // Left Alphabet +
            b[n-i+k-1]= a+k-1;
        }
        
        b[n-1] = a + i - 1;
        
        for(int k=1; k<i ; k++){      // Right Alphabet -
            b[n-1+k]= (a+i-1) - k;
        }
        
        for(int j=0;j<n-i;j++)         // Right Space ,
        {
            b[n+i-1+j] = ' ';
        }
        
        printf("%s %s", b, "\n");
    }

    return 0;
}

/******************************************************************************

                        Asterisk Barfi Cut out
                        Time complexity: O(n)
                        Brute force: O(n^2)
Output:
********** 
****  **** 
***    *** 
**      ** 
*        * 
*        * 
**      ** 
***    *** 
****  **** 
********** 

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    printf("Asterisk Barfi Cut out \n");
    
    int n = 10;
    char a = 'A';
    char b[100];
    
    for(int s=0; s<n; s++) b[s] = '*';
    
    for(int i=0; i<n/2 ; i++){
        if (i>0) {
            b[n/2 - i] = ' ';
            b[n/2 + i-1] = ' ';
        }
        printf("%s %s", b, "\n");
    }
    
    for(int i=0; i<n/2 ; i++){
        if (i>0) {
            b[i] = '*';
            b[n-1-i] = '*';
        }
        printf("%s %s", b, "\n");
    }

    return 0;
}

/******************************************************************************

                        Asterisk X
                        Time complexity: O(n)
                        Brute force: O(n^2)
Output:
*        * 
**      ** 
***    *** 
****  **** 
********** 
****  **** 
****  **** 
***    *** 
**      ** 
*        * 

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    printf("Asterisk X \n");
    
    int n = 10;
    char a = 'A';
    char b[100];
    
    for(int s=0; s<n; s++) b[s] = ' ';
    
    for(int i=0; i<n/2; i++){
        b[i] = '*';
        b[n-1-i] = '*';
        printf("%s %s",b,"\n");
    }
    
    for(int i=0; i<n/2; i++){
        b[n/2 - i] = ' ';
        b[n/2 + i-1] = ' ';
        printf("%s %s",b,"\n");
    }
    return 0;
}

/******************************************************************************

                        Asterisk X
                        Time complexity: O(n)
Output:
**** 
     
*  *  
     
*  *  
     
*  *     
     
****

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    printf("Asterisk X \n");
    
    int n = 4;
    char b[100];
    char c[100];
    char d[100];
    
    for(int s=0; s<n; s++) b[s] = '*';
    for(int s=0; s<n; s++){
        if(s==0 || s==n-1) c[s] = '*';
        else c[s] = ' ';
    } 
    for(int s=0; s<n; s++) d[s] = ' ';
    
    for(int i=0; i<=2*n; i++){
        if(i==0 || i==2*n) printf("%s %s",b,"\n");
        else if (i%2 == 0) printf("%s %s",c,"\n");
        else printf("%s %s",d,"\n");
    }
    return 0;
}

/******************************************************************************

                        Asterisk X
                        Time complexity: O(n)
                        Brute force: O(n^2)
Output:
4444444
4333334
4322234
4321234
4322234
4333334
4444444

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    printf("Number Decrement Matrix \n");
    
    int n = 4;
    char b[100];
    
    for(int s=0; s<2*n-1; s++) b[s] = n + '0';
    
    for(int i=0; i<n; i++){             // Upper half
        if(i == 0) printf("%s\n",b);
        else{
            for(int ii=i; ii<=(2*n-2)-i; ii++) b[ii] = (n-i) + '0';
            printf("%s\n",b);
        }
    }
    
    for(int i=1; i<n; i++){             // Lower half
        for(int ii=n-i; ii<=n-1+i; ii++) b[ii] = (i+1) + '0';
        printf("%s\n",b);
    }
    
    return 0;
}

