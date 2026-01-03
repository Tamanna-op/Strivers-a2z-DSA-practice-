/*
Problem: pattern 4 - Right Angled Triangle with Repeated Numbers
A2Z Topic: Patterns

Approach:
- Using two nested loops
- Printing the row number (i+1) in the ith row

Time Complexity: O(n^2)
Space Complexity: O(1)
*/
#include <iostream>
using namespace std;
void p4(int n)
{
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<=i;j++)
        cout<<i+1;
       cout<<endl;
    }
}
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    p4(n);
    return 0;
}