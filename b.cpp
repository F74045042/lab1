#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int n, i;
	cout<<"Please enter an integer: "<<endl;
	cin>>n;
	for(;;){
	if(n==1){
		exit(0);
	}
	else if((n%2)){
		n = 3*n+1;
	}
	else{
		n = n/2;
	}
	cout<<n<<" ";
	}

	return 0;
}
