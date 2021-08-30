#include<iostream>
using namespace std;

int main(){
    int a[]={64,25,12,22,11};
    int n= sizeof(a)/sizeof(int);
    
    for (int i = 0; i < n-1; i++)
    {
        int min=i;
        for (int j = i+1; j < n; j++)
        {
            if (a[j]<a[min])
            {
                min=j;
            }
            
        }
        if (min!=i)
        {
            swap(a[min],a[i]);
        }
        
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
}