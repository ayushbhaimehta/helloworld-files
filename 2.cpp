#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    if(n%2==0 && n%3==0) {
        cout<<"Divisible by both"<<endl;
    }
    else if (n%2==0 && n%3!=0) {
        cout<<"divisible by 2 but not by 3"<<endl;
    }
    else if (n%2!=0 && n%3==0) {
        cout<<"divisible by 3 but not by 2"<<endl;
    }
    else {
        cout<<"Not divisible by both"<<endl;
    }
    
  
  return 0;
}