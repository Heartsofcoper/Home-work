#include <iostream>

using namespace std;

void delete_annoying_primes (){
int n, m, i, j, k;
cin >> n;
int* Array = new int [n];
int* Array1 = new int [n];
for (i=0; i<n ; i++) {
    cin >> Array[i];
}
 for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
           for (k = 2; k<(Array[k]*Array[k]); k++) {
    if (Array[k] % i == 0) {
       Array1[k]=Array[k];
    }
}
			if ((Array[i] == Array[j]) && (Array1[i] == Array[i]) && (i != j) ){
				for (m=i; m < n; m++) {
                Array[m] = Array[m + 1];
}
     n=n-1;
  }
 }
}
for (j = 0; j < n; j++){
    cout << Array[j]<< ' ';
 }
}
int main()
{
	delete_annoying_primes();
	return 0;
}
