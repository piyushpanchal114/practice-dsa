**Check Array is Sorted**

## Problem Statement

Suggest Edit

#### You have been given an array _**‘a’**_ of _**‘n’**_ non-negative integers.You have to check whether the given array is sorted in the non-decreasing order or not.

#### Your task is to return 1 if the given array is sorted. Else, return 0.

##### Example :

    Input: ‘n’ = 5, ‘a’ = [1, 2, 3, 4, 5]
    Output: 1

    The given array is sorted in non-decreasing order; hence the answer will be 1.

Detailed explanation ( Input/output format, Notes, Images )

keyboard_arrow_down

##### Input Format:

    The first line will contain the integer ‘n’, the number of elements in the array ‘a’, and the next line will contain the ‘n’ spaced integers in the array elements.

##### Output Format:

    Print 1 if the given array is sorted. Else, print 0.

    Output for each test case will be printed on a separate line.

##### Note:

    You are not required to print anything; it has already been taken care of. Just implement the function.

##### Sample Input 1 :

    4
    0 0 0 1

##### Sample Output 1 :

    1

##### Explanation For Sample Input 1 :

    The given array is sorted in non-decreasing order; hence the answer will be 1.

##### Sample Input 2 :

    5
    4 5 4 4 4

##### Sample Output 2 :

    0

##### Expected Time Complexity:

    O( N ), Where ‘N’ is the size of an input array ‘a’.

##### Constraints:

    1 ≤ 'n' ≤ 10^5
    0 ≤ 'a'[i] ≤ 10^9

    Time limit: 1 sec
