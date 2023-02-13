#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");

    // lambda functions

    // To check if number is even of Not
    auto ans =  []( int x) { return x % 2 == 0;}; 
    cout << ans(2) <<endl;
    cout << ans(3) <<endl;

    // To find sum of two integers 
    cout<<endl<<endl;
    auto sum = [] ( int x, int y) { return x + y ;};
    cout << sum (2,3)<<endl;
    cout << sum (1, 9) <<endl;

    // To check if number is positive or not
    cout<<endl<<endl;
    auto res = []( int x) { return x >= 0;};
    cout << res(5) <<endl;
    cout << res(-1) << endl;
    return 0;
}