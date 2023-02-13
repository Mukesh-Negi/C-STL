#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    vector<int> v = {1,2,3,4,5,6};
    // iterating over vector
    for( int &val : v)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    // braced init-list
    for( int m : {1,2,3,4,5})
    {
        cout<<m<<" ";
    }
    cout<<endl;
    // iterating over array
    int arr[]= { 100, 200, 300, 400, 500};
    for( int x : arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    //iterating over string
    string str = "mukesh";
    for( char ch : str)
    {
        cout<<ch<<" ";
    }
    cout<<endl;
    return 0;
}