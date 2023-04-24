/*
Number Pattern 2

Print the following pattern
Pattern for N = 4

. . . 1
. . 2 3
. 3 4 5
4 5 6 7

The dots represent spaces.
*/

#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int i = 1;
    while(i <= n){
        int spaces = 1;
        while (spaces <= n - i)
        {
            cout << " ";
            spaces = spaces + 1;
        }
        int col = 1;
        int value = i;
        while(col <= i){
            cout << value;
            value = value + 1;
            col = col + 1;
        }
        cout << endl;
        i = i + 1;
    }    
}