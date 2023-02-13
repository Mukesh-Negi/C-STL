#include <bits/stdc++.h>
using namespace std;
// implementing lower and upper bound in array/vectors
int main()
{
    system("cls");
    vector <int> v = { 4, 5, 5, 7, 8, 25};
    cout<<"ELEMENTS OF VECTOR :->";
    for( auto val : v)
    {
        cout<<val<<"  ";
    }
    cout<<endl<<endl;

    // lower_bound
    cout<<"  Lower Bounds :"<<endl;
    auto it = lower_bound( v.begin(), v.end(),5);
    if( it != v.end() )
    {
        cout<<"Lower Bound of 5 :-> "<<(*it)<<endl;
    }

    it = lower_bound(v.begin(), v.end(), 6);
    if( it != v.end() )
    {
        cout<<"Lower Bound of 6 :-> "<<(*it)<<endl;
    }

     it = lower_bound( v.begin(), v.end(), 26);
     if( it != v.end())
        cout<<"L.B of 26 :-> "<<(*it)<<endl;
     else 
        cout<<"L.B OF 26 NOT PRESENT"<<endl;

    // Upper Bound
    cout<<endl<<endl;
    cout<<"  Upper bounds :"<<endl;
    auto itr = upper_bound(v.begin(),v.end(),5);
    if( itr != v.end())
        cout<<"U.B of 5 :->"<<(*itr)<<endl;

    itr = upper_bound(v.begin(),v.end(),6);
    if( itr != v.end())
        cout<<"U.B of 6 :->"<<(*itr)<<endl;

    itr = upper_bound(v.begin(),v.end(),26);
    if( itr != v.end())
        cout<<"U.B of 26 :->"<<(*itr)<<endl;
    
    else 
        cout<<"U.B of 26 is NOT Present"<<endl;

    cout<<endl<<endl;
    return 0;
}