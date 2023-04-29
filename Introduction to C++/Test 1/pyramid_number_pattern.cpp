/*
Pyramid Number Pattern

Print the following pattern for the given number of rows.
Pattern for N = 4
   1
  212
 32123
4321234
Input format : N (Total no. of rows)

Output format : Pattern in N lines
*/

#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int currRow = 1;
    for(int row = 1; row <= n; row++){
        int spaces = n - row;
        while (spaces != 0)
        {
            cout<<" ";
            spaces--;
        }
        int value = row;
        while (value > 0)
        {
            cout << value;
            value--;
        }
        value = value + 2;
        while (value <= row)
        {
            cout << value;
            value++;
        }
        cout << endl;
    }
}