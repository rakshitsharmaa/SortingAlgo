#include<iostream>
using namespace std;


int main(){
    int a[]={4,3,2,10,12,1};
    int n= sizeof(a)/sizeof(int);
    for (int i = 1; i < n; i++)
    {
        int j = i-1,key=a[i];
        while (j>=0 and a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
     a[j+1]=key;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }   
}