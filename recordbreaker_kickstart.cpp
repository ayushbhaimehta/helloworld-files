#include <iostream>
#include <climits>
using namespace std;

int main() {
	// your code goes here
	
	int n ;
    cin>>n;
    int rb=0;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int j=1;j<n;j++){
        int mx= INT_MIN;
        mx= max(a[j-1],mx);
        if(mx<a[j] && a[j]>a[j+1]){
            rb++;
        }
        
    }
    cout<<rb<<endl;
    
	return 0;
}
