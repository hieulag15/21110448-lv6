#include<iostream>
void Nhapmang(int arr[], int &n, int &x);
int Sum(int arr[], int n, int x);
using namespace std;



int main() {
	int arr[100];
	int n,x;
	Nhapmang(arr,n,x);
	cout<<"Tong cac so lon hon x la: "<<Sum(arr,n,x);
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

int Sum(int arr[], int n, int x){
	int sum = 0;
	for (int i = 0; i < n; i++){
		if (arr[i] > x){
			sum += arr[i];
		}
	}
	return sum;
}

