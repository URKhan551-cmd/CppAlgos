#include <iostream>
using namespace std;

// func definition
int minOfTwo(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{

    int val = minOfTwo(5, 8);
    cout << val << endl;
    return 0;
}
