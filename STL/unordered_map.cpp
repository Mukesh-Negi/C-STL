#include <bits/stdc++.h> 
using namespace std;
/*
Given N strings and Q queries. In each query you are given a string . Print
frequency of that string.
*/
 int main()
 {
    system("cls");
    unordered_map< string, int>  um;
    int N;
    cin>>N;
    for( int i = 0; i < N; i++)
    {
        string s;
        cin>>s;
        um[s] = um[s]+1;
    }
    int q;
    cin>>q;
    while(q--)
    {
        string s;
        cin>>s;
        cout<<um[s]<<endl;
    }
    return 0;
 }