#include <iostream>
using namespace std;

int fact(int num){
    int fact=1;
    for (int i=1;i<=num;i++){
        fact=fact*i;
        }
        return fact;
}
    
int main() {
	// your code goes here
	int ans;
	int n;
	cin>>n;
	
	ans= fact(n);
	cout<<ans<<endl;
	return 0;
}
