#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    pair<int, string> p;// declaration of pair
    p = {22, "mukesh"}; // method 1 to initialise a pair
    cout<<p.first<<" "<<p.second<<endl;// printing the pair
    p = make_pair(11,"negi"); // method 2 to initialise a pair
    cout<<p.first<<" "<<p.second<<endl;
    p.first = 1;
    p.second = "abcd";
    cout<<p.first<<" "<<p.second<<endl;
    return 0;
}