#include <iostream>
using namespace std;

float add(float x, float y){
	return x+y;
}

float substract(float x, float y){
	return x-y;
}

float multiply(float x, float y){
	return x*y;
}

float divide(float x, float y){
	return x/y;
}

float exp(float base, float exp){
	float val = 1;
	for(float i=0; i<exp; i++){
		val = val * base;
	}
	return val;
}

float sin(float theta){
	float res = theta - ((exp(theta, 3))/6) + ((exp(theta, 5))/120);
	return res;
}

float cos(float theta){
	float res = 1 - ((exp(theta, 2))/2) + ((exp(theta, 4))/24);
	return res;
}

float tan(float theta){
	float res = theta + ((exp(theta, 3))/3) + ((exp(theta, 5))* (2/225));
	return res;
}

void start(){
		cout << "Select operation : " << endl;
		cout << "1. Addition" << endl;
		cout << "2. Substraction" << endl;
		cout << "3. Multiplication" << endl;
		cout << "4. Division" << endl;
		cout << "5. Exponentiation" << endl;
		cout << "6. Sin" << endl;
		cout << "7. Cos" << endl; 
		cout << "8. Tan" << endl;
		int mode;
		cin >> mode;
	
		float res = 0;

		switch(mode){
		float a, b;

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
			
		case 4:
			cout << "Enter first number" << endl;
			cin >> a;
			cout << "Enter second number" << endl;
			cin >> b;
			res = divide(a,b);
			break;
			
		case 5:
			cout << "Enter the base" << endl;
			float base;
			cin >> base;
			cout << "Enter the power" << endl;
			float power;
			cin >> power;
			res = exp(base, power);
			break;
			
		case 6:
			cout << "For degree input enter 1 and for radians enter 2" << endl;
			float unit;
			cin >> unit;
			cout << "Enter angle value" << endl;
			float angle;
			cin >> angle;
			if(unit == 1){
				angle = angle * 0.01745;
			}
			res = sin(angle);
			break;
			
		case 7:
			cout << "For degree input enter 1 and for radians enter 2" << endl;
			//int unit;
			cin >> unit;
			cout << "Enter angle value" << endl;
			//float angle;
			cin >> angle;
			if(unit == 1){
				angle = angle * 0.01745;
			}
			res = cos(angle);
			break;
			
		case 8:
			cout << "For degree input enter 1 and for radians enter 2" << endl;
			//int unit;
			cin >> unit;
			cout << "Enter angle value" << endl;
			//float angle;
			cin >> angle;
			if(unit == 1){
				angle = angle * 0.01745;
			}
			res = tan(angle);
			break;
		
		default:
			break;
	}
	
	cout << "Result : " << res << endl;
}

int main() {
	start();
		
	cout << "Enter 1 to restart or 0 to exit" << endl;
	int reset;
	cin >> reset;
	if (reset==1){
		start();
	}
	
	return 0;
}


//HAHAHAHAHAHAHAHA
