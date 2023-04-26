/*
Code : Reverse Number Pattern

Print the following pattern for the given N number of rows.
Pattern for N = 4
1
21
321
4321
*/

#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int currRow = 1;
    while(currRow<=n){
        int currCol = currRow;
        while (currCol >= 1)
        {
            cout << currCol;
            currCol = currCol - 1;
        }
        cout << endl;
        currRow = currRow + 1;
    }  
}