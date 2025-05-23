// Ejercicios1C.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main() {
	//EJERCICIO1
	/*
	* float A,B,C,D,E,F;

	A=B=C=D=E=F = 0;

	cout << "Ingrese el primer digito";
	cin >> A;

	cout << "Ingrese el segundo digito";
	cin >> B;

	C = A + B;
	cout << "La suma de los digitos es "<< C;

	D = A - B;
	cout << "La resta de los digitos es "<< D;

	E = A * B;
	cout << "El producto es " << E;

	F = A / B;
	cout << "el cociente es " << F;
	*/

	//EJERCICIO2
	/*
	cout << "Números entre 1 y 4" << 1 << 2 << 3 << 4;

	cout << "Números entre 1 y 4" << 1 << 2 << 3 << 4;

	cout << "Primer numero entre 1 y 4" << 1<< endl;
	cout << "Segundo número entre 1 y 4" << 2<< endl;
	cout << "Tercer número entre 1 y 4" << 3<< endl;
	cout << "Último número entre 1 y 4" << 4<< endl;
	*/

	//EJERCICIO3
	/*
	float A,B,C,S,P,M,N,L;
	A = B = C = S = P = M = N = L = 0;

	cout << "Ingrese el primer número" <<A;
	cin >> A;

	cout << "Ingrese el segundo número" <<B;
	cin >> B;

	cout << "Ingrese el último número" <<C;
	cin >> C;

	S = A + B + C;
	cout << "La suma es"<<S<<endl;

	L = A * B * C;
	cout << "el producto es" << L << endl;

	P = (A + B + C) / 3;
	cout << "El promedio es" << P << endl;

	if (A > B && A > C) {
		M = A;
			cout << "El mayor es " << M << endl;
	}
	if (B > A && B > C) {
		M = B;
			cout << "El mayor es " << M << endl;
	}
	if (C > A && C > B) {
		M = C;
			cout << "El mayor es " << M << endl;
	}

	if (A < B && A < C) {
		N = A;
			cout << "El menor es " << N << endl;
	}
	if (B < A && B < C) {
		N = B;
			cout << "El menor es " << N << endl;
	}
	if (C < A && C < B) {
		N = C;
			cout << "El menor es " << N << endl;
	}
	*/

	//EJERCICIO4
	/*
	float R,D,C,PI,A;
	R = D = C = A = 0;
	PI = 3.1416;

	cout << "Ingrese el radio" <<R;
	cin >> R;

	D = 2 * R;
	cout << "El diametro es " << D << endl;

	C = 2 * R * PI;
	cout << "La circunferencia es de " << C << endl;

	A = PI * (R * R);
		cout << "El area es de " << A << endl;
	*/
	//EJERCICIO5 
	/*
	cout << 0 << "Cuadrado de 0" << 0 * 0 << "Cubo de 0" << 0 * 0 * 0 << endl;
	cout << 1 << "Cuadrado de 1" << 1 * 1 << "Cubo de 1" << 1 * 1 * 1 << endl;
	cout << 2 << "Cuadrado de 2" << 2 * 2 << "Cubo de 2" << 2 * 2 * 2 << endl;
	cout << 3 << "Cuadrado de 3" << 3 * 3 << "Cubo de 3" << 3 * 3 * 3 << endl;
	cout << 4 << "Cuadrado de 4" << 4 * 4 << "Cubo de 4" << 4 * 4 * 4 << endl;
	cout << 5 << "Cuadrado de 5" << 5 * 5 << "Cubo de 5" << 5 * 5 * 5 << endl;
	cout << 6 << "CUADRADO DE 6 " << 6 * 6 << "Cubo de 6" << 6 * 6 * 6 << endl;
	cout << 7 << "Cuadrado de 7" << 7 * 7 << "Cubo de 7" << 7 * 7 * 7 << endl;
	cout << 8 << "Cuadrado de 8" << 8 * 8 << "Cubo de 8" << 8 * 8 * 8 << endl;
	cout << 9 << "Cuadrado de 9" << 9 * 9 << "Cubo de 9" << 9 * 9 * 9 << endl;
	cout << 10 << "Cuadrado de 10" << 10 * 10 << "Cubo de 10" << 10 * 10 * 10 << endl;
	*/

	//EJERCICIO6
	/*
	float N,D1,D2,D3,D4,D5;

	cout << "Ingrese un numero entero de 5 digitos:";
	cin >> N;

	D1 = N / 10000;
	D2 = (N / 1000) % 10;
	D3 = (N / 100) % 10;
	D4 = (N / 10) % 10;
	D5 = N % 10;

	cout <<"el primer digito es " << D1 << endl;
	cout << "El segundo digito es " << D2 << endl;
	cout << "El tercer digito es " << D3 << endl;
	cout << "El cuarto digito es "<< D4 << endl;
	cout << "El ultimo digito es " << D5 << endl;
	*/

	//EJERCICIO7
	/*
	int D, M, A, F;

	cout << "Ingrese el dia: ";
	cin >> D;

	cout << "Ingrese el mes: ";
	cin >> M;

	cout << "Ingrese el anio: ";
	cin >> A;

	F = A * 10000 + M * 100 + D;
	cout << "La fecha es: " << F<< endl;
	*/

	//EJERCICIO8
	/*
	int D, M, A, F;

	cout << "Ingrese 8 digitos";
	cin >> F;

	A = F / 10000;
	M = (F / 100) % 100;
	D = F % 100;

	cout << "El año es : " << A << endl;
	cout << "El mes es : " << M << endl;
	cout << "El dia es: " << D << endl;
	*/

	//EJERCICIO9

	int N, R, Q, T;

	cout << "Ingrese un numero ";
	cin >> N;

	Q = N / 5;
	R = N % 5;
	T = Q / 3;

	cout << "La quinta parte es: " << Q << endl;
	cout << "El resto es: " << R << endl;
	cout << "La tercera es: " << T << endl;


	//EJERCICIO.PSINT1


	return 0;
}