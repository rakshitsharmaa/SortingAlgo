#include<iostream>
using namespace std;

void merge(int arr[],int s,int m,int e){
    int i=s,j=m+1,k=s;
    int temp[10000];
    while (i<=m and j<=e)
    {
        if(arr[i]<=arr[j]){
            temp[k]=arr[i];
            i++,k++;        
        }
        else{
            temp[k]=arr[j];
            j++,k++;
        }
    }
    while (i<=m)
    {
        temp[k]=arr[i];
        i++,k++;
    }
    while (j<=e)
    {
        temp[k]=arr[j];
        j++,k++;
    }
    for (int p = s; p <= e; p++)
    {
        arr[p]=temp[p];
    }
}


void mergeSort(int arr[],int s,int e){
    if (s<e)
    {
        int m= (s+e)/2;
        mergeSort(arr,s,m);
        mergeSort(arr,m+1,e);
        merge(arr,s,m,e);
    }   
}

int main(){
    int arr[]={10,80,30,90,40,50,70};
    mergeSort(arr,0,6);
    for (int  i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
}