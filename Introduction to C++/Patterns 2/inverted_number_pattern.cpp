/*
Code : Inverted Number Pattern

Print the following pattern for the given N number of rows.
Pattern for N = 4
4444
333
22
1

*/

#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int currRow = 1;
    while(currRow <= n){
        int currCol = n - currRow + 1;
        while (currCol >= 1)
        {
            cout << n - currRow + 1;
            currCol = currCol - 1;
        }
        cout << endl;
        currRow = currRow + 1;
    }  
}