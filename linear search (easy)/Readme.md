**Linear Search**

## Problem Statement

Suggest Edit

#### You are given an array _**‘arr’**_ containing _**‘n’**_ integers. You are also given an integer _**‘num’**_, and your task is to find whether ‘num’ is present in the array or not.

#### If ‘num’ is present in the array, return the 0-based index of the first occurrence of ‘num’. Else, return -1.

##### Example:

    Input: ‘n’ = 5, ‘num’ = 4
    'arr' =  [6,7,8,4,1]

    Output: 3

    Explanation:
    4 is present at the 3rd index.

Detailed explanation ( Input/output format, Notes, Images )

keyboard_arrow_down

##### Input Format:

    The first line contains two integers, ‘n’ and ‘num,’ representing the number of elements in the array and the number to be searched for.

    The next line contains ‘n’ space-separated integers representing the elements of the array.

##### Output format:

    Return an integer, the 0-based index of the first occurrence of ‘NUM’. Else, return -1.

##### Sample Input 1:

    5 4
    6 7 8 4 1

##### Sample Output 1 :

    3

##### Explanation Of Sample Input 1:

    4 is present at the 3rd index.

##### Sample Input 2:

    4 2
    2 5 6 2

##### Sample Output 2 :

    0

##### Explanation Of Sample Input 1:

    2 is not present in the given array.

##### Expected time complexity:

    The expected time complexity is O(n).

##### Constraints:

    1  <= 'n' <= 10^6
    1 <= 'arr'[i] <= 1000
    Time Limit: 1 sec
