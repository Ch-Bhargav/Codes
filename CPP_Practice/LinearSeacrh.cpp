#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    /*
    arry index starts from 0 to n-1;
    */
    for (int i = 0; i < n; i++) // time = n
        cin >> arr[i];

    int key;
    cin >> key; // time  = 1

    bool flag = false;

    for (auto ele : arr) // time = n
    {
        if (ele == key) // time = 1
        {
            flag = true;
            break;
        }
    }
    /*
    Terenary operator
    syntax: conditon ? statement1 : statement2 ;
    */
    flag ? cout << "Found" << endl : cout << "Not Found" << endl;
    return 0;

    /*
    n+1+n+1+1 = 2n + 3
    Time Complexity = O(n)
    */
}