#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int add(int x,int y){
	return x+y;
}

int substract(int x, int y){
	return x-y;
}

int multiply(int x, int y){
	return x*y;
}

float exp(float base, int exp){
	float val = 1;
	for(int i=0; i<exp; i++){
		val = val * base;
	}
	return val;
}

float sin(float theta){
	float res = theta - ((exp(theta, 3))/6) + ((exp(theta, 5))/120);
	return res;
}

int main() {
	cout << "Select operation : " << endl;
	cout << "1. Addition" << endl;
	cout << "2. Substraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "5. Sin" << endl;
	int mode;
	cin >> mode;
	float res = 0;
	
	
	switch(mode){
		int a, b;

		case 1:
			cout << "Enter first number" << endl;
			cin >> a;
			cout << "Enter second number" << endl;
			cin >> b;
			res = add(a,b);
			break;
		
		case 2:
			cout << "Enter first number" << endl;
			cin >> a;
			cout << "Enter second number" << endl;
			cin >> b;
			res = substract(a,b);
			break;
			
		case 3:
			cout << "Enter first number" << endl;
			cin >> a;
			cout << "Enter second number" << endl;
			cin >> b;
			res = multiply(a,b);
			break;
			
		case 5:
			cout << "For degree input enter 1 and for radians enter 2" << endl;
			int unit;
			cin >> unit;
			cout << "Enter angle value" << endl;
			float angle;
			cin >> angle;
			if(unit == 1){
				angle = angle * 0.01745;
			}
			res = sin(angle);
			break;
		
		default:
			break;
	}
	
	cout << res << endl;
	
	return 0;
	
}
