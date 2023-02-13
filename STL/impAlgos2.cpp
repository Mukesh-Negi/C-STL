#include <bits/stdc++.h>
using namespace std;

// using all_of(), any_of(), none_of()

int main ()
{
    system("cls");
    vector <int> v = { 2, 4, 6, 8};
    cout << all_of( v.begin(), v.end(), [](int x)
    {
        return x % 2 == 0;
    } );

    cout<<endl<<endl;
    vector <int> a = { 2, -3, -4, -5};
    cout << any_of ( a.begin(), a.end(), 
    [] (int x )
    {
        return x > 0;
    });

    cout << endl <<endl;

    vector <int> b = { 1, 3, 5, 7};
    cout << none_of( b.begin(), b.end(), 
    [](int x)
    {
        return x % 2 == 0;
    });
    cout <<endl <<endl;
    return 0;
}