/*
Problem : pattern 3 - Right Angled Triangle Number Pattern
A2Z Topic: Patterns

Approach:
- Using two nested loops
- Printing numbers from 1 to i in the ith row

Time Complexity: O(n^2)
Space Complexity: O(1)
*/
#include <iostream>
using namespace std;    
void p3(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<j+1;
        }
        cout<<endl;
    }
}
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    p3(n);
    return 0;
}