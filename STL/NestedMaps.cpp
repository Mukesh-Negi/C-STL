#include <bits/stdc++.h>
using namespace std; 
int main()
{
    system("cls");
    map < pair<string,string>,vector<int> > m;// nested map
    int n = 5;

    for (int  i = 0; i < n; i++) // taking 5 inputs for map
    {
        string s1, s2;
        cout<<"ENTER 2 STRING AS KEYS :->";
        cin>>s1>>s2;
        cout<<"Enter number of elements in vector :->";
        int cnt;
        cin>>cnt;
        cout<<"enter "<<cnt<<" elements :->";
        for( int j = 0; j < cnt; j++)
        {
            int x;
            cin>>x;
            m[{s1,s2}].push_back(x);
        }
        cout<<endl<<endl;
    }

    // iterating through this map
    cout<<endl<<endl;
    for(auto pr : m)
    {
        cout<<pr.first.first<<" "<<pr.first.second<<endl;
        vector <int> &v = pr.second;
        for( auto &m : v )
        {
            cout<<m<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    
    return 0;
}