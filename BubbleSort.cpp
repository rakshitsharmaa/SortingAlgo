#include<iostream>
using namespace std;



int main(){
    int a[]={8,5,7,3,2};
    int n=sizeof(a)/sizeof(int);
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4-i; j++)
        {
            if (a[j]>a[j+1])
            {
                swap(a[j+1],a[j]);
            }
            
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<" ";
    }
    
}