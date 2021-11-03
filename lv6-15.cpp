#include<iostream>
void Nhapmang(int arr[], int &n);
int Giatri(int arr[], int n);
using namespace std;


int main() {
	int arr[100];
	int n,x;
	Nhapmang(arr,n);
	cout<<"Gia tri: "<<Giatri(arr,n);
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

int Giatri(int arr[], int n){
	for (int i = 0; i < n; i++){
		if (arr[i] % 2 == 0){
			return arr[i];
		}
		
	}
	return -1;
}
