// Program to insert an element Begining of an array

#include<iostream>
using namespace std;

int main()
{
    int array [10],n,x;
    cout<<"Enter size of array";
    cin>>n;
    cout<<"Enter array element: ";
    for(int i=0; i<n; i++)
    {
        cin>>array [i];
    }

    cout<<"Enter the  at the beginning : ";
    cin>>x;
    for (int i=n; i>0;i--)
    {
        array[i]= array[i-1];

    }

    array[0]=x;
    n++;

    cout<<"Array element are: ";

    for (int i=0; i<n; i++)
    {
        cout<<array[i]<<endl;
    }
    return 0;
}


