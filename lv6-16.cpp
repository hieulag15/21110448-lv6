#include<iostream>
void Nhapmang(int arr[], int &n);
int GiaTri(int arr[], int n);
using namespace std;


int main() {
	int arr[100];
	int n;
	Nhapmang(arr,n);
	cout<<"Gia tri: "<<GiaTri(arr,n);
	return 0;
}

void Nhapmang(int arr[], int &n){
	do {
		cout<<"Nhap n: ";
		cin >> n;
	} while (n < 0);
	for (int i = 0; i < n; i++){
		cout<<"Arr["<<i<<"]: ";
		cin >> arr[i];
	}
}

int GiaTri(int arr[], int n){
	for (int i = n - 1; i >= 0; i--){
		if (arr[i] > 0){
			return arr[i];
		}
	}
	return -1;
}
