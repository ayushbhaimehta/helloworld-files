#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	bool flag=0;
	
	for (int i = 2; i <= n / 2; ++i) {

        // condition for non-prime
        if (n % i == 0) {
            flag = 1;
            cout<<"non prime";
            break;
        }
    }
	  if (flag==0){
	      cout<<"prime"<<endl;
	  }
	}
	

