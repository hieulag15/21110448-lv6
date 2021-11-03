#include<iostream>
void Nhapmang(int arr[], int &n, int &x);
int Dem(int arr[], int n, int x);
using namespace std;


int main() {
	int arr[100];
	int n,x;
	Nhapmang(arr,n,x);	
	cout<<"Co tat ca cac so bang x la: "<<Dem(arr,n,x);
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

int Dem(int arr[], int n, int x){
	int dem = 0;
	for (int i = 0; i < n; i++){
		if (arr[i] == x){
			dem++;
		}
	}
	return dem;
}
