#include <iostream>
using namespace std;

int main() {
	// your code goes here
	for (int i=1;i<=3;i++){
	    for(int j=1;j<=9;j++){
	        if ((i+j)%4==0){
	            cout<<"*";
	        }
	        else if (i==2 && j%4==0){
	            cout<<"*";
	        }
	        else{
	            cout<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
