#include <iostream>
using namespace std;

int main()
{
    int arr[]={34,25,46, 64, 54};
    int n= sizeof(arr)/sizeof (arr[0]); 

    cout<< "orginal array: ";
    for (int i=0; i<n; i++)
    cout<< arr[i]  << " ";
    cout<<endl;

    for (int i=0; i<n-1; i++){
        int min = i;
        for(int j = i+1; j<n; j++)
        {
            if (arr[j] < arr[min])
             min=j;
        }
        swap(arr[i] ,arr[min]);
    }
    cout<< "sorted array: " ;
    for (int i=0; i<n; i++)
    cout<<arr[i] <<" ";
    return 0;
}