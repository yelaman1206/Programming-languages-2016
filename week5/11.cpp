#include <iostream>

using namespace std;


int main(){
	int n, a;
	cin >>n;

	for(int i = 0; i <= n; i++){
		cin >> a;
		if(a % 2 == 0) cout << a << "= even\n";
		else cout << a << "= odd\n";
	}	
	
return 0;
}
