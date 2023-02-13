#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    set<pair<int, int>> s;
    for( int i = 0; i< 3; i++)// inserting 3 elements in set
    {
        int x,y;
        cout<<"ENTER VALUE 1st :->";
        cin>>x;
        cout<<"ENTER VALUDE 2nd :->";cin>>y;
        s.insert({x,y});
    }
    cout<<endl<<endl;
    // iterating through set
    for( auto pr : s)
    {
        cout<<pr.first<<" "<<pr.second<<endl;;
    }
    cout<<endl;
    return 0;
}