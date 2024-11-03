#include<iostream>
using namespace std;
int main()
{
    int arr[10]={100,10,50,9,35,7,90,39,4,71};
    // cout<<"Enter the elements of array : "<<endl;
    // for(int i=0;i<5;i++)
    // {
    //     cin>>arr[i];
    // }
    for(int i=0;i<10;i++)
    {
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}