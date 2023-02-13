#include <bits/stdc++.h>
using namespace std;
void printVector (vector<pair<int,string>> &v)
{
    for( int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}
int main()
{
    system("cls");
    vector<pair<int,string>> v;// declaration of vector of pairs
    cout<<"enter no of pairs:->";
    int n;
    cin>>n;
    for( int i = 0; i < n; i++)
    {
        int x;
        string s;
        cin>>x;
        cin.ignore();
        getline(cin,s);
        v.push_back({x,s});
    }
    printVector(v);
    return 0;
}