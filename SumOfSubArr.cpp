#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n = 5;
    int nums[5] = {1, 2, 3, 4, 5};

    int maxSum = INT_MIN;
    for (int st = 0; st < n; st++)
    {
        int currSum = 0;
        for (int end = st; end < n; end++)
        {
            currSum += nums[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout << "max Subarray sum = " << maxSum << endl;

    return 0;
}
// max subArr sum = 15
