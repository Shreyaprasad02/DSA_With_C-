/*
Start Pattern

Print the following pattern
Pattern for N = 4

. . . *
. . * * *
. * * * * *
* * * * * * *

The dots represent spaces.
*/

#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int currRow = 1;
    while(currRow <= n){
        int spaces = 1;
        while (spaces <= n - currRow)
        {
            cout << " ";
            spaces = spaces + 1;
        }
        int currCol = 1;
        while(currCol <= (2*currRow) - 1){
            cout << "*";
            currCol = currCol + 1;
        }
        cout << endl;
        currRow = currRow + 1;
    }    
}