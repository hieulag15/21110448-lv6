#include<iostream>
void Nhapmang(int arr[], int &n);
int Kiemtra(int arr[], int n);
using namespace std;


int main() {
	int arr[100];
	int n;
	Nhapmang(arr,n);
	cout<<"Gia tri: "<<Kiemtra(arr,n);
	return 0;
}

void Nhapmang(int arr[], int &n){
	do {
		cout<<"Nhap n: ";
		cin >> n;
	} while (n < n);
	for (int i = 0; i < n; i++){
		cout<<"Arr["<<i<<"]: ";
		cin >> arr[i];
	}
}

int Kiemtra(int arr[], int n){
	for (int i = 0; i < n; i++){
		if (arr[i] == 0)
		 	return 1;
	}
	return 0;
}
