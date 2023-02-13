#include <bits/stdc++.h>
using namespace std;
void print( vector < vector <int> > &v)
{
    for ( int i = 0; i < v.size(); i++)
    {
        for ( int j = 0; j < v[i].size(); j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    system("cls");
    vector < vector<int> > v;// declaring vector of vectors
    int N;
    cout<<"enter no of rows :->";
    cin>>N;
    cout<<"enter number of columns "<<" :";
    int n;
    cin>>n;
    for( int i = 0; i < N; i++ )
    {
        vector <int> temp;
        for ( int j = 0; j < n; j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    print(v);
    return 0;
}