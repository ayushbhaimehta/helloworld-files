#include <iostream>
using namespace std;

int main() {
	// your code goes here
	for (int i=1; i<=4; i++) {
	    for (int j=0; j<i;j++){
	        cout<<"*";
	    }  
	    int space = 8-2*i;
	    for(int j=0; j<space ;j++){
	        cout<<" ";
	    }
	    for (int j=0; j<i;j++){
	        cout<<"*";
	    }  
	    cout<<endl;
	}   
	return 0;
}
