#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n1,n2;
	cin>>n1>>n2;
	int target;
	cin>>target;
	int mat[n1][n2];
	for(int i=0;i<n1;i++){
	    for(int j=0;j<n2;j++){
	        cin>>mat[i][j];
	    }
	}
	int r=0 , c=n2-1;
	bool found=false;
    while (r<n1 and c>=0){
        if(mat[r][c]==target){
            found = true;
        }
        if (mat[r][c]>target){
            c--;
        }
        else{
            r++;
        }
    }
    if(found){
        cout<<"haha"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
	return 0;
}
