#include <bits/stdc++.h>
using namespace std;
int pivotIndex(vector<int> nums)
{
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
    }
    int leftSum = 0;
    int rightSum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        rightSum = sum - nums[i] - leftSum;
        if (leftSum == rightSum)
        {
            return i;
        }
        4

            leftSum += nums[i];
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << pivotIndex(arr) << endl;
}
