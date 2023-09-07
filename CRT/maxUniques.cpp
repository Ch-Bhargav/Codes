#include <bits/stdc++.h>
using namespace std;

vector<int> maxUniques(vector<int> &arr, int k)
{

    // int len = arr.size();
    // set<int> s;
    // vector<int> res;
    // for (int p = 0; p < len - window + 1; p++)
    // {
    //     for (int i = 0; i < p + window; i++)
    //         s.insert(arr[i]);
    //     res.push_back(s.size());
    // }
    vector<int> res;
    int n = arr.size();
    map<int, int> freq;
    for (int i = 0; i < k; i++)
    {
        freq[arr[i]] += 1;
    }
    for (int i = 1; i < n - k + 1; i++)
    {
        // java bro
        int rem = arr[i - 1];
        int add = arr[i + k - 1];
        freq[rem]--;
        if (freq[rem] == 0)
            freq.erase(rem);
        freq[add]++;
        res.push_back(freq.size());
        /*int rem = arr[i-1],add = arr[i+k-1];
        freq.put(rem,freq.get(rem)-1);
        if(freq.get(rem) == 0)
            freq.remove(rem);
        freq.put(add, 1+freq.getOrDefault(add,0));
        res.add(freq.size());*/
        // end of java
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int window;
    cin >> window;
    vector<int> res = maxUniques(arr, window);
    for (auto i : res)
        cout << i << " ";
}