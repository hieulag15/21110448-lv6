#include<iostream>
void Nhapmang(float arr[], int &n);
int Giatri(float arr[], int n);
using namespace std;


int main() {
	float arr[100];
	int n,x;
	Nhapmang(arr,n);
	cout<<"Gia tri: "<<Giatri(arr,n);
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

int Giatri(float arr[], int n){
	for (int i = 0; i < n; i++){
		if (arr[i] < 0){
			return arr[i];
		}
		
	}
	return 1;
}
