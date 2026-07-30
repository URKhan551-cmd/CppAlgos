#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    for (int st = 0; st < n; st++)
    { // here st mean start point
        for (int end = st; end < n; end++)
        { // end point take at fisrt start point, then 2nd iteration increment ++
            for (int i = st; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}

// if i have this arr {1, 2, 3} then output is going to be
// 1 12 123
// 2 23
// 3
//

// if i have this arr{1, 2, 3, 4, 5}
// 1 12 123 1234 12345 
// 2 23 234 2345 
// 3 34 345 
// 4 45 
// 5 
