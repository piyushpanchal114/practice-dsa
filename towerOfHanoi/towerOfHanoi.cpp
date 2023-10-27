#include <iostream>

using namespace std;

int count = 0;

void towerOfHanoi(int n, char fromPeg, char toPeg, char auxPeg){
    count++;
    if (n==1){
        cout << "Move disk 1 from peg " << fromPeg << " to peg " << toPeg << " ";
        return;
    }
    towerOfHanoi(n-1, fromPeg, auxPeg, toPeg);
    cout << "Moving disk " << n << " fromPeg " << fromPeg << " to peg " << toPeg << " ";
    
    towerOfHanoi(n-1, auxPeg, toPeg, fromPeg);
}


int main()
{
    towerOfHanoi(3, 'A', 'B', 'C');
    cout << endl << count;

    return 0;
}