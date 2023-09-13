**Check Prime**

## Problem Statement

Suggest Edit

#### A prime number is a positive integer that is divisible by exactly 2 integers, 1 and the number itself.

#### You are given a number _**'n'**_.

#### Find out whether 'n' is prime or not.

##### Example :

    Input: 'n' = 5

    Output: YES

    Explanation: 5 is only divisible by 1 and 5. 2, 3 and 4 do not divide 5.

Detailed explanation ( Input/output format, Notes, Images )

keyboard_arrow_down

##### Input Format :

    The first line of a test case contains a single integer 'n'.

##### Output Format :

    Print “YES” if the number 'n' is prime. Print “NO” otherwise.

##### Note :

    You do not need to print anything; it has already been taken care of. Just implement the given function and return the boolean value true/false depending on whether 'n' is prime or not.

##### Sample Input 1:

    5

##### Sample Output 1:

    YES

##### Explanation of sample input 1 :

    5 is only divisible by 1 and 5. 2, 3 and 4 do not divide 5.

##### Sample Input 2:

    6

##### Sample Output 2:

    NO

##### Explanation of sample input 2 :

    6 is divisible by 1, 2, 3, and 6. Therefore it is not a prime number.
    Numbers having more than two factors are known as composite numbers.

##### Sample Input 3:

    1

##### Sample Output 3:

    NO

##### Explanation of sample input 3 :

    1 is divisible only by 1, having only one factor. Therefore it is not a prime number.
    1 is neither a prime nor a composite number.

##### Expected time complexity :

    The expected time complexity is O(sqrt('n')).

##### Constraints :

    1 <= 'n' <= 10 ^ 9

    Time limit: 1 second
