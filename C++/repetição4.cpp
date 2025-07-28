#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cout << " Digite o Numero q vc quer na Tabuada" << endl;
	cin >> n;
	 cout << "Tabuada do " << n << ":" << endl;
	for(int i = 1; i <= 100; i++){
		 cout << n << " x " << i << " = " << n * i << endl;
	}

return 0;
}
