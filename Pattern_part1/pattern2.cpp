/*
Problem : Pattern 2 – Right Angled Triangle Star Pattern
A2Z Topic: Patterns

Approach:
- Using two nested loops
- Printing '*' i times in the ith row

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

void p2(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    p2(n);
    return 0;
}