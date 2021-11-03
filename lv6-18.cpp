#include<iostream>
void Nhapmang(int arr[], int &n);
void Daonguoc(int arr[], int n);
int Xuatmang(int arr[], int n);
using namespace std;


int main() {
	int arr[100];
	int n;
	Nhapmang(arr,n);
	Xuatmang(arr,n);
	cout<<endl;
	Daonguoc(arr,n);
	Xuatmang(arr,n);
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

void Daonguoc(int arr[], int n){
	int tmp;
	for (int i = 0; i < n/2; i++){
		tmp = arr[i];
		arr[i] = arr[n - 1 - i];
		arr[n - 1 - i] = tmp;
	}
}

int Xuatmang(int arr[], int n){
	for (int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
}
