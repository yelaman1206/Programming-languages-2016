#include <iostream>

using namespace std;


int main(){

	int n;
	cin >> n;
    
	int s = 0;	
	for(int i = 0; i <= n; i++){
		s = s + i; // s += i
	}	
	cout << s;
    

    /*
    int s = 1;
    for(int i = 2; i <= n; i++){
    	s += i;
    }
    cout << s;
    */

return 0;
}
