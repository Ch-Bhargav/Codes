#include <bits/stdc++.h>
using namespace std;

/*
Functions:
Syntax
 Return_DataType Function_name(argumnets){
        //code
        return value;
 }

 Type 1:
 dataType Func(){
    return value;
 }

Type 2:
 void Func(args){

 }

Type 3:
 void func(){

 }

 Type4:
 dataType func(args){
    return value;
 }
*/

// No Return With Arguments
void voidBinarySearch(vector<int> &tara, int key)
{
    int low = 0, high = tara.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (tara[mid] == key)
        {
            cout << "Found" << endl;
            return;
        }
        else if (tara[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }
    cout << "Not Found" << endl;
}

// Return With Arguments
bool returnBinarySearch(vector<int> &tara, int key)
{
    int low = 0, high = tara.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (tara[mid] == key)
            return true;
        else if (tara[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return false;
}

// void wihtout Arguments
void noArgsBinarySearch()
{
    int n, key;
    cout << "Size:" << endl;
    cin >> n;
    vector<int> tara(n);
    cout << "Elements:" << endl;
    for (int i = 0; i < n; i++)
        cin >> tara[i];
    cout << "Key Element:" << endl;
    cin >> key;
    int low = 0, high = tara.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (tara[mid] == key)
        {
            cout << "Found" << endl;
            return;
        }
        else if (tara[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }
    cout << "Not Found" << endl;
}

// Return without Arguments
bool returnNoArgsBinarySearch()
{
    int n, key;
    cout << "Size:" << endl;
    cin >> n;
    vector<int> tara(n);
    cout << "Elements:" << endl;
    for (int i = 0; i < n; i++)
        cin >> tara[i];
    cout << "Key Element:" << endl;
    cin >> key;
    int low = 0, high = tara.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (tara[mid] == key)
        {
            rtuen true;
        }
        else if (tara[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return false;
}

int main()
{

    int n, key;
    cout << "Size:" << endl;
    cin >> n;
    vector<int> tara(n);
    cout << "Elements:" << endl;
    for (int i = 0; i < n; i++)
        cin >> tara[i];
    cout << "Key Element:" << endl;
    cin >> key;
    // Without Return value with Args....
    voidBinarySearch(tara, key);
    // with Return Values with Args.....
    returnBinarySearch(tara, key) ? cout << "Found" << endl : cout << "Not Found!" << endl;
    // without Return Values and Wihtout Args.....
    noArgsBinarySearch();
    // with Return Values and Wihtout Args.....
    returnNoArgsBinarySearch() ? cout << "Found" << endl : cout << "Not Found" << endl;
    return 0;
}

/*
space Complexity = O(n)
Time complexity = O(nlogn)
*/