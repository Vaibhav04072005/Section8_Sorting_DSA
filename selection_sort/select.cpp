#include<iostream>
using namespace std;

void selectionsort(int arr[],int n){
    for (int  i = 0; i < n; i++)
    {
        int min_index=i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[min_index])
            {
                min_index=j;
            }
            
        }
        swap(arr[min_index],arr[i]);
    }
    
}

int main()
{
     int arr[]={10,5,8,9,5,6};
     int n = sizeof arr/sizeof arr[0];

     selectionsort(arr,n);
     for (int i = 0; i < n; i++)
     {
        cout<<arr[i]<<" ";
        cout<<endl;
     }
     
return 0;
}