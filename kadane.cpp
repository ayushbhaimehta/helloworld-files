#include <iostream>
#include <climits>
using namespace std;

int kadane(int a[], int n){
    int currsum=0;
    int maxsum=INT_MIN;

    for(int i=0;i<n;i++){
        currsum+=a[i];
        if (currsum<0){
            currsum=0;
        }
        maxsum= max(currsum, maxsum);
        
    }
    return maxsum;

}

int main() {
	// your code goes here

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int wrapsum;
    int nonwrapsum;

    nonwrapsum = kadane(a,n);

    int totalsum=0;
    for(int i=0;i<n;i++){
        totalsum+=a[i];
        a[i]=-a[i];
    }
    wrapsum= totalsum + kadane(a,n);
    cout<<wrapsum<<endl;

	return 0;
}
