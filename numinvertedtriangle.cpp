#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	for( int i=5; i>0; i--) {
	    for (int j=0 ; j<i; j++) {
	        int count=j+1;
	        cout<<count<<" ";
	        count++;
	    }
	    cout<<endl;
	}
	return 0;
}
