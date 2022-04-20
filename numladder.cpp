#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int count=1;
	for ( int i = 1; i <= 5; i++) {
	    for ( int j = 0; j <i; j++ ) {
	        cout<<count<<" ";
	        count++;
	    }  cout<<endl;
	}  
	return 0;
}
