#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    unordered_set <int> us; // declaration of unordered set

    // inserting values
    us.insert(5);
    us.insert(2);
    us.insert(1);
    us.insert(4);
    us.insert(6);

    // iterating through unordered map
    for( auto &val : us)
    {
        cout<<val<<endl;
    }
    cout<<endl;

    // using find()
    auto it = us.find(10);
    if( it != us.end())
    {
        cout<< (*it) <<" is present"<<endl;
    }
    else
    {
        cout<<"Not present"<<endl;
    }
    cout<<endl;
    return 0;
}