#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    set <string> s;// declaration of set

    // inserting values into set
    s.insert("hello");
    s.insert("dude");
    s.insert("how");
    s.insert("are");
    s.insert("you");

    cout<<"size of set : "<<s.size()<<endl;// size of set

    // iterating over set
    // 1. using iterators
    set <string> ::iterator it;
    for(it = s.begin(); it != s.end(); ++it)
    {
        cout<<(*it)<<endl;
    }
    cout<<endl<<endl;

    // 2. using rannge based for loops
    for( auto &val : s)
    {
        cout<<val<<endl;
    }
    cout<<endl<<endl;
    // using find() function
    auto itr = s.find("you");
    if( itr != s.end())
    {
        cout<<"element "<<(*itr)<<" is present"<<endl;
    }

    // using erase function
    s.erase("dude"); // passing element directly
    for( auto &val : s)
    {
        cout<<val<<endl;
    }
    cout<<endl<<endl;

    // passing iterator to element
    auto i = s.find("you");
    if( i != s.end())
    {
        s.erase(i);
    }
    for( auto &val : s)
    {
        cout<<val<<endl;
    }
    return 0;
}