#include <bits/stdc++.h>
using namespace std;

// Commonly Used Algorithms of STL
int main()
{
    system("cls");
    vector <int> v = { 2, 3, 1, 6, 7, 6};
    cout<<" VECTOR :-> ";
    for (auto val : v)
    {
        cout <<val <<" ";
    }
    cout<<endl<<endl;

    // finding minimum element
    auto it = min_element(v.begin(),v.end());
    cout << "MINIMUM ELEMENT :-> " <<(*it)<<endl;

    // finding maximum element
    it = max_element( v.begin(), v.end());
    cout << "MAXIMUM ELEMENT :-> "<<(*it)<<endl;

    // finding sum of all elements
    auto sum = accumulate(v.begin(), v.end(), 0);
    cout <<"SUM OF ALL ELEMENTS :-> " << sum << endl;

    // finding count of a element
    auto  cnt = count(v.begin(), v.end(), 6);
    cout << "Count of 6 is :-> "<< cnt << endl;

    // reversing the vector
    reverse (v.begin(), v.end());
    cout<<"After Reversing :-> ";
    for (auto val : v)
    {
        cout <<val <<" ";
    }
    cout<<endl<<endl;

    // reversing a string
    string str = "Mukesh Negi";
    cout<< "String : " << str <<endl;
    reverse( str.begin(),str.end());
    cout << "After Reversing : " << str << endl << endl;


    return 0;
}