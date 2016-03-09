#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int n;
	cout<<"Please enter an Integer: "<<endl;
	cin>>n;
	for(;;){
		cout<<n<<" ";
		if(n==1){
			exit(0);
		}
		else if(n%2){
			n = 3*n + 1;
		}
		else{
			n = n/2;
		}
	}
}
