#include <iostream>
using namespace std;

int main() {
	int T;
	int X,Y;
	cin>>T;
    while(T--){
        cin>>X>>Y;
        if(Y <= (1.07*X) +X)
            cout<<"YES "<<"\n";
        else
            cout<<"NO"<<"\n";
    }
	return 0;
}
