#include <iostream>
using namespace std;

int main() {
	// your code goes here

    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    const int N = 1e6 + 2;
    bool check[N];

    for(int i=0;i<N;i++){
        check[i] = false ;
    }

    for (int i=0;i<N;i++){
        if(check[i]>=0){
            true;
        }

    }
    int ans;
    for(int i=1;i<n;i++){
        if (check==0){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
    

	return 0;
}
