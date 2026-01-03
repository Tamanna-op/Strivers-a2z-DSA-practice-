/*
Problem: Pattern 1 – Square Star Pattern
A2Z Topic: Patterns

Approach:
- Using two nested loops
- Printing '*' n times in each row

Time Complexity: O(n^2)
Space Complexity: O(1)

Learning:
- Basic nested loop structure

*/

#include <iostream>
using namespace std;

void pattern_1(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
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
    pattern_1(n);
    return 0;
}
