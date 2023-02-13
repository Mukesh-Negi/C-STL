#include <bits/stdc++.h>
using namespace std;
void printVector(vector <int> &v)
{
    for( auto val : v)
    {
        cout<<val<<"  ";
    }
    cout<<endl<<endl;
}
void printArray(int arr[], int N)
{
    for( int i = 0; i < N; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl<<endl;
}
int main()
{
    system("cls");

    // sorting a vector
    vector <int> v = {10, 8, 12, 3, 1};
    cout<<"Before Sorting :-> ";
    printVector(v);
    sort(v.begin(),v.end());
    cout<<"After Sorting :-> ";
    printVector(v);
    cout<<endl<<endl;

    //sorting an array
    int arr[] = { 5, 4, 3, 2, 1};
    cout<<"Before Sorting :-> ";
    printArray(arr,5);
    sort( arr, arr+5);
    cout<<"After Sorting :->";
    printArray(arr,5);
    cout<<endl<<endl;
    return 0;
}