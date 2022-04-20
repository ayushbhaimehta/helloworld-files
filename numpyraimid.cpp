#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for (int i=1; i<=n; i++){
	    for (int j=1; j<=n-i;j++){
	        cout<<" ";
	    }
	    for(int j=1;j<=i;j++){
	        int suar=j;
	        cout<<suar<<" ";
	        
	    }
	    cout<<endl;
	}
	
	return 0;
}
