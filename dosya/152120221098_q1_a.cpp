#include<iostream>
#include<time.h> //rand()



using namespace std;
int main() {

	time_t start, end;
	time(&start);
	int m;
	cout << "Enter the size of array" << endl;
	cin >> m;
	int* arr = new int[m];
	for (int i = 0; i < m; i++) {
		arr[i] = rand() % 10;
	}
	for (int i = 0; i < m; i++) {
		cout << arr[i]<<" ";
	}
	time(&end);
	cout << endl;
	cout << "The time complexity is O(n)" << endl;
	cout <<"The taken time for executing the code is "<<end - start <<" seconds"<< endl;

	return 0;
}