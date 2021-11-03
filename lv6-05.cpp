#include<iostream>
void Nhapmang(int arr[], int &n);
int Sum(int arr[], int n);
using namespace std;


int main() {
	int arr[100];
	int n;
	Nhapmang(arr,n);
	cout<<"Tong day vua nhap la: "<<Sum(arr,n);
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

int Sum(int arr[], int n){
	int sum = 0;
	for (int i = 0; i < n; i++){
		if (arr[i] % 2 == 0){
			sum += arr[i];
		}
	}
	return sum;
}
