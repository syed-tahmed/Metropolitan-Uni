//Inser at spacific position in array in c++

#include <iostream>
using namespace std;
int main ()
{
    int array [10] , n, pos, x;
    cout<<"Enter The size of array: ";
    cin>>n;

    cout<<"Enter The  array element : ";
    for (int i=0; i<n; i++)
    {
        cin >> array[i];
    }

    cout<<"Enter The insertion Location: ";
    cin>>pos;

    cout<<"Enter the value to insert : ";
    cin>>x;

    for (int i=n-1; i>=pos-1; i--)
    {
        array[i+1]=array[i];
    }

    array [pos-1]=x;
    n++;

    for(int i=0; i<n; i++)
    {
        cout<< array [i] <<endl;
    }


}











