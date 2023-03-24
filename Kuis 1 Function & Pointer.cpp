//KUIS 1 FUNCTION & POINTER

//1.  Buatlah sebuah program yang berisi macro utnuk mencetak bilangan terbesar (bagi yang ber NPM ganjil) 
//	atau terkecil (bagi yang ber NPM genap), bilangan tersebut merupakan bilangan 2 digit terakhir (
//	digit ke 9 dan 10) NPM anda masing2.

#include<iostream>

#define nilaiterkecil(x, y) (x<y? x : y)

using namespace std;



int main(){

	int digit9, digit10;

	cout << "Masukan digit npm ke-9 = ";

	cin >> digit9 ;

	cout << "Masukan digit npm ke-10 = ";

	cin >> digit10 ;

	

	cout << "Bilangan terkecil : " << nilaiterkecil(digit9,digit10) << endl;



	return 0;

}


//2. 	Buatlah sebuah program yang memiliki fungsi rekursif yang mengalikan digit 
//	ke 10 (terakhir) NPM anda sebanyak x kali, dimana x merupakan nilai digit 
//	ke 9 NPM anda masing2.

#include <iostream>

using namespace std;



int hitung(int a, int b){

	 if (b == 0)

		 return 1 ;

	else 

         return a * hitung(a,b-1);

} 



int main(){

	

	int digit10,digit9;

	cout << "digit NPM ke-10 : ";

	cin >> digit10;

	cout << "digit NPM ke-9 : ";

	cin >> digit9;

	cout << endl;

	cout << "hasil = " << hitung(digit10,digit9) << endl;

}


//3.  Buatlah program yang memiliki sebuah pointer yang menyimpan nilai dua digit 
//	npm terakhir anda, output yang diharapkan adalah isi pointer dan alamat 
//	tempat data NPM anda tersebut disimpan.

#include <iostream>

using namespace std;



int main(){

	int a, *pa;

	pa = &a;

	*pa = a;

	

	cin>>a;

    cout<< "\nvalue = " << *pa << endl;

    cout<< "address = " << pa << endl;



}
