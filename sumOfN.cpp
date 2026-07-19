#include <iostream>
using namespace std;

// func definition
int sumOfNumber(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{

    int val = sumOfNumber(5);
    int val2 = sumOfNumber(10);
    // cout << "val :" << val << endl;
    // cout << "val2 :" << val2 << endl;
    cout << sumOfNumber(5) << endl;
    cout << sumOfNumber(10) << endl;
    return 0;
}
