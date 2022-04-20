#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	
	int array[n];
	for(int i=0;i<n;i++){
	    cin>>array[i];
	}
	int j;
	int mx=-9999999;
	for(j=0;j<n;j++){
	    mx=max(mx,array[j]);
	    cout<<mx<<endl;
	    }
	
	
	
	return 0;
}
