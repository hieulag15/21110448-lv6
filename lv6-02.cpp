#include<iostream>
void Nhapmang(float arr[], int &n);
float Sum(float arr[], int n);
using namespace std;


int main() {
	float arr[100];
	int n;
	Nhapmang(arr,n);
	cout<<"Tong day vua nhap la: "<<Sum(arr,n);
	
	return 0;
}

void Nhapmang(float arr[], int &n){
	do {
		cout<<"Nhap n: ";
		cin >> n;
	} while (n < n);
	for (int i = 0; i < n; i++){
		cout<<"Arr["<<i<<"]: ";
		cin >> arr[i];
	}
}

float Sum(float arr[], int n){
	float sum = 0;
	for (int i = 0; i < n; i++){
		sum += arr[i];
	}
	return sum;
}
