#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    multiset <string> ms;// delaration of multiset

    // inserting values
    ms.insert("hello");
    ms.insert("bro");
    ms.insert("hello");// inserting duplicate value
    ms.insert("bro");
    ms.insert("whats");
    ms.insert("up");

    // iterating over multiset
    for( auto &val : ms)
    {
        cout<<val<<endl;
    }

    cout<<endl<<endl;
    ms.erase("hello");// erasing using iterator
    for( auto &val : ms)
    {
        cout<<val<<endl;
    }
    cout<<endl<<endl;
    
    // erasing using iterator
    auto it = ms.find("bro");
    if( it != ms.end())
    {
        ms.erase(it);
    }
    for( auto &val : ms)
    {
        cout<<val<<endl;
    }
    cout<<endl;
    return 0;
}