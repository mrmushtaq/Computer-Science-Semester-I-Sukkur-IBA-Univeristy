#include <iostream>
using namespace std;
int main() {
  
    int N = 5;
    int M = 3;

   
    int firstArray[N] = {1, 2, 3, 4, 5};
	 int secondArray[M] = {6, 7, 8};
	int totalSize = N + M;
	int thirdArray[totalSize];


    for (int i = 0; i < N; i++) {
        thirdArray[i] = firstArray[i];
    }
	
	 for (int i = 0; i < M; i++) {
        thirdArray[N + i] = secondArray[i];
    }

   
    cout << "First Array: ";
    for (int i = 0; i < N; i++) {
    cout << firstArray[i] << " ";
    }
    cout << std::endl;

    cout << "Second Array: ";
    for (int i = 0; i < M; i++) {
        cout << secondArray[i] << " ";
    }
    cout << endl;

    cout << "Third Array: ";
    for (int i = 0; i < totalSize; i++) {
        cout << thirdArray[i] << " ";
    }
   

    return 0;
}


