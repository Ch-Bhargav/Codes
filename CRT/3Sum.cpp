#include <bits/stdc++.h>
using namespace std;
bool solution(int arr[], int target, int n)
{

    sort(arr, arr + n);
    for (int i = 0; i < n - 2; i++)
    {
        int l = i + 1;
        int r = n - 1;
        while (l < r)
        {
            if (arr[i] + arr[l] + arr[r] == target)
                return true;
            else if (arr[i] + arr[l] + arr[r] < target)
                l++;
            else
                r--;
        }
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int target;
    cin >> target;
    solution(arr, target, n) ? cout << "True" : cout << "False";
}