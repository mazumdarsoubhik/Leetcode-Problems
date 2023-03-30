# Even Subarray (SCALER Problem)

## Problem Description
You are given an integer array A.

Decide whether it is possible to divide the array into one or more subarrays of even length such that the first and last element of all subarrays will be even.

Return "YES" if it is possible; otherwise, return "NO" (without quotes).

## CODE
```Python
def solve(self, A):
    if A[0] % 2 != 0 or A[-1] % 2 != 0:
        return "NO"

    cnt = 1

    #Start looping from index 1
    for i in range(1,len(A)):
        cnt += 1
        # Element odd check
        if A[i] % 2 != 0:
            continue
        # Element even check and count even check
        elif A[i] % 2 == 0 and cnt % 2 == 0:
            continue
        # Last element even check and break
        elif A[i] % 2 == 0 and i == len(A)-1:
            break
        # Element even check && count odd check && previous element even check
        elif A[i] % 2 == 0 and cnt % 2 != 0 and A[i-1] % 2 == 0:
            cnt = 1
    # Conclusion upon last subarray l
    if cnt % 2 != 0:
        return "NO"
    else:
        return "YES"
```

## Explanation
Example array: [978 847 95 729 778 586 188 782 813 870 871 940 312 693 580 101 760 837 564 633 680 155 241 374 682 290 850 601 433 922 773 959 530 290 990 50 516 409 868 131 664 851 721 880 20 450 745 387 787 823 392 242 674 347 65 135 819 324 651 678 139 940]


Dividing the array as per the question: 
1. subarrays that start and end with an even number and 
2. subarrays have even length.
(The same is represented as bold and regular text)
[**978 847 95 729 778 586** 188 782 813 870 871 940 **312 693 580 101 760 837 564 633 680 155 241 374** 682 290 **850 601 433 922 773 959 530 290** 990 50 **516 409 868 131 664 851 721 880** 20 450 745 387 787 823 392 242 **674 347 65 135 819 324 651 678 139 940**]

In this example, the answer is YES we can divide the array into subarrays with the given condition.

The approach is simple: we need to highlight the subarrays from beginning and reach the end, the final result is given by last subarray length. If len(last subarray) is ODD then “NO” otherwise “YES”.

Algorthm:
1. cnt = 1
2. Loop through each element from index 1
2.1. cnt ++
2.2. If Ai is ODD then continue
2.3. If Ai is EVEN and cnt is EVEN then continue
2.4. If Ai is EVEN and cnt is ODD and  Ai-1 is EVEN: cnt = 1 and continue (i.e we have got an even len subarray, reset count)
3. If cnt is ODD then “NO” otherwise “YES” (value of cnt out of loop is the len of last subarray. If last subarray matches the condition then whole array is capable to be divided into subarray)

## Time Complexity & Space Complexity
**T.C :** _O(n)_

**S.C :** _O(1)_
