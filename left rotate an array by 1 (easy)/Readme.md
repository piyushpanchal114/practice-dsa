**Left Rotate an Array by One**

## Problem Statement

Suggest Edit

#### Given an array _**'arr'**_ containing _**'n'**_ elements, rotate this array left once and return it.

#### Rotating the array left by one means shifting all elements by one place to the left and moving the first element to the last position in the array.

##### Example:

    Input: 'a' = 5, 'arr' = [1, 2, 3, 4, 5]

    Output: [2, 3, 4, 5, 1]

    Explanation: We moved the 2nd element to the 1st position, and 3rd element to the 2nd position, and 4th element to the 3rd position, and the 5th element to the 4th position, and move the 1st element to the 5th position.

Detailed explanation ( Input/output format, Notes, Images )

keyboard_arrow_down

##### Input Format :

    The first line will contain a single integer 'n', the size of the array ‘arr’

    The second line will contain ‘n’ integers representing the array elements.

##### Output format :

    The output contains all elements of the rotated array separated by space.

##### Note :

    You don't need to print anything. It has already been taken care of. Just implement the given function.

##### Sample input 1:

    4
    5 7 3 2

##### Sample output 1:

    7 3 2 5

##### Explanation of sample input 1:

    Move the first element to the last and rest all the elements to the left.

##### Sample input 2:

    5
    4 0 3 2 5

##### Sample output 2:

    0 3 2 5 4

##### Explanation of sample input 2:

    Same as sample input 1, Move the first element to the last and rest all the elements to the left

##### Expected time complexity:

    O( n ), Where ‘n’ is the size of an input array ‘arr’.

##### Constraints :

    1 <= 'n' <= 10^5
    1 <= 'arr[i] <= 10^9

    Time Limit: 1 sec
