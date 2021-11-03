#include<iostream>
void Nhapmang(float arr[], int &n, float &x, float &y);
void Lietke(float arr[], int n, int x, int y);
using namespace std;


int main() {
	float arr[100];
	int n;
	float x,y;
	Nhapmang(arr,n,x,y);
	Lietke(arr,n,x,y);
	return 0;
}

void Nhapmang(float arr[], int &n, float &x, float &y){
	do {
		cout<<"Nhap n: ";
		cin >> n;
	} while (n < 0);
	for (int i = 0; i < n; i++){
		cout<<"Arr["<<i<<"]: ";
		cin >> arr[i];
	}
	cout<<"Nhap x: ";
	cin >> x;
	cout<<"Nhap y: ";
	cin >> y;
}

void Lietke(float arr[], int n, int x, int y){
	for (int i = 0; i < n; i++){
		if ((arr[i] >= x) && (arr[i] <= y)){
			cout<<arr[i]<<" ";
		}
	}
}

