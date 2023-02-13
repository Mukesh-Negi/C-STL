#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    vector <string> v;
    cout<<"enter number of strings :->";
    int n;
    cin>>n;
    cin.ignore();
    for( int i = 0; i < n; i++)
    {
        string s;
        getline(cin,s);
        v.push_back(s);
    }
    for( int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}