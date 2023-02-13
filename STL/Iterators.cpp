#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    vector <int> v = {10,20,30,40,50};
    vector<int> ::iterator it;
    for( it = v.begin(); it != v.end(); ++it)
    {
        cout<<*it<<endl;
    }
    cout<<endl;
    vector<pair<int,int>> vp ={{1,2},{3,4},{5,6}};
    vector <pair<int,int>> :: iterator mn;
    for( mn = vp.begin(); mn!= vp.end(); ++mn)
    {
        cout<<(*mn).first<<" "<<mn->second<<endl;
        // (*mn).first = mn->first
    } 
    return 0;
}