/*
Code : Triangular Star Pattern

Print the following pattern for the given N number of rows.

Pattern for N = 4
*
**
***
****

*/

#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int currRow = 1;
    while(currRow<=n){
        int currCol = 1;
        while (currCol <= currRow)
        {
            cout << "*";
            currCol = currCol + 1;
        }
        cout << endl;
        currRow = currRow + 1;
    }  
}