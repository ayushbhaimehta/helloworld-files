#include <iostream>
using namespace std;

void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
void selectionSort(int arr[], int n)  
{  
    int i, j, min_idx;    
    for (i = 0; i < n-1; i++)  
    {  
        min_idx = i;  
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[min_idx])  
            min_idx = j;  
        swap(&arr[min_idx], &arr[i]);  
    }  
}  
void printArray(int arr[], int size)  
{  
    int i;  
    for (i=0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}

int main() {
	// your code goes here
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
selectionSort (arr,n);

int ans;
for(int i=0;i<n;i++){
    if(arr[i]=arr[i+1]){
        ans=arr[i];
    }
}
cout<<ans<<endl;

	return 0;
}
