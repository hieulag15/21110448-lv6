#include<iostream>
void Nhapmang(int arr[], int &n, int &x);
int Giatri(int arr[], int n, int x);
using namespace std;


int main() {
	int arr[100];
	int n,x;
	Nhapmang(arr,n,n);
	cout<<"Gia tri: "<<Giatri(arr,n,x);
	return 0;
}

void Nhapmang(int arr[], int &n, int &x){
	do {
		cout<<"Nhap n: ";
		cin >> n;
	} while (n < n);
	for (int i = 0; i < n; i++){
		cout<<"Arr["<<i<<"]: ";
		cin >> arr[i];
	}
	cout<<"Nhap x: ";
	cin >> x;
}

int Giatri(int arr[], int n, int x){
	for (int i = 0; i < n; i++){
		if (arr[i] == x){
			return i;
		}
		
	}
	return -1;
}
