#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int sum;
	    int t1=0;
	    int t2=1;
	
	for(int i=1;i<=n;i++){
	    cout<<t1;
	    sum=t1+t2;
	    t1=t2;
	    t2=sum;
	    
	}
	return 0;
}
