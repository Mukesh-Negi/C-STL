#include <bits/stdc++.h> 
using namespace std;
 int main()
 {
    system("cls");
    map <int,string> m;// declaring a map

    // inserting values into map
    m[1] = "Mukesh";
    m[2] = "Negi";
    m[3] = "hello";
    m[4] = "world";
    m.insert({5,"I"});
    m.insert({6,"am"});
    m.insert( pair<int,string> (7,"Devil"));

    // iterating over map;
    map <int,string> ::iterator it;
    for( it = m.begin(); it != m.end(); ++it)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl;
    // another way to iterate
    for( auto pr : m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    cout<<endl;

    // using find() 
    auto itr = m.find(5);
    if( itr == m.end())
    {
        cout<<"key is NOT present"<<endl;
    }
    else
    {
        cout<<"key is present"<<endl;
    }
    // using erase
    auto i = m.find(5);
    if( i != m.end() )
    {
        m.erase(i);
    }
    for( auto pr : m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    cout<<endl;
    // using clear
    m.clear();
    cout<<" size of map : "<<m.size()<<endl;
    for( auto pr : m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }

    return 0;
 }