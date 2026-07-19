#include <iostream>
using namespace std;

// func definition
// factorial mean if a n=5  it mean 1x2x3x4x5
int factorialNumber(int n)
{

    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        num *= i;
    }
    return num;
}

int main()
{

    int val = factorialNumber(5);
    int val2 = factorialNumber(10);
    // cout << "val :" << val << endl;
    // cout << "val2 :" << val2 << endl;
    cout << factorialNumber(5) << endl;
    cout << factorialNumber(10) << endl;
    return 0;
}
