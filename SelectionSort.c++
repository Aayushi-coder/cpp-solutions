#include<iostream>
using namespace std;
int main()
{
    int i,j,min;
    int a[10]={1,10,50,9,35,7,90,39,4,71};
    for(i=0;i<10;i++){
        cout<<a[i]<<"\t";
    }
    
    for(i=0;i<10;i++){
        min=i;
        for(j=i+1;j<10;j++){
            if (a[j]<a[min])
                min=j;
        }
        int k=a[i];
        a[i]=a[min];
        a[min]=k;
    } 
    cout<<"Sorted Array : ";
    for(i=0;i<10;i++){
        cout<<a[i]<<"\t";
    }
    return 0;
}