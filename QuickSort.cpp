#include<iostream>
using namespace std;

int partition(int a[],int s,int e){
    int pivot=a[e];
    int pIndex=s;
    for (int i = s; i < e; i++)
    {
        if (a[i]<=pivot)
        {
            swap(a[i],a[pIndex]);
            pIndex++;
        }
        
    }
    swap(a[e],a[pIndex]);
    return pIndex;
}

void QuickSort(int a[],int s, int e){
    if (s<e)
    {
        int p = partition(a,s,e);
        QuickSort(a,s,p-1);
        QuickSort(a,p+1,e);
    }
    
}

int main(){
    int a[]={5,4,8,1,6,2,7,3};
    QuickSort(a,0,7);
    for (int i = 0; i < 8; i++)
    {
        cout<<a[i]<<" ";
    }
    

}