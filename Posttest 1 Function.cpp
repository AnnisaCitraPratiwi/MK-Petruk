//POSTTEST 1 FUNCTION

//NO. 1
//Buat fungsi dengan nama jarak untuk menghitung jarak antara dua titik (x1,y1) dan (x2,y2).
//dimana rumus menghitung jarak adalah 

//D = [( x2 – x1 )^2 + (y2 – y1)^2] ^ 1/2

//Constraint:
//x1, x2, y1, y2 € Riil

//Prototype Fungsi:
//double jarak(double, double, double, double);

//For example:

//Test					Input					Result
//cout<<jarak(0,0,3,4);	cout<<jarak(0,0,3,4);	5

#include <iostream>
#include <cmath>

using namespace std;
double jarak (double x1, double y1, double x2, double y2)
{
    double a = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    return a;
}

//NO. 2

//Buat fungsi void dengan nama findMax tanpa parameter, fungsi membaca input dari keyboard berupa integer N, dan N data.  Lalu fungsi akan mencetak nilai terbesar dari data yang diinputkan.

//Format Input
//Baris pertama berupa integer N
//N Baris berikutnya merupakan data dengan tipe integer

//Format Output
//Output berupa nilai terbesar data yang diinputkan

//For example:
//Test			Input		Result
//findMax();	4			12
//				3 2 1 12


#include <iostream>
#include <cmath>

using namespace std;
void findMax() {
   int n, max_num;
   cin >> n;
   cin >> max_num;
   
   for (int i = 1; i < n; i++) {
      int num;
      cin >> num;

      if (num > max_num) {
         max_num = num;
      }
   }
   cout <<max_num << endl;
}


//NO. 3
//Buat fungsi void dengan nama hitungRerata tanpa parameter, fungsi membaca input dari keyboard berupa integer N, dan N data.  Lalu fungsi akan mencetak nilai rata-rata dari data yang diinputkan.

//Format Input
//Baris pertama berupa integer N
//N Baris berikutnya merupakan data dengan tipe pecahan

//Format Output
//Output berupa nilai rata-rata data yang diinputkan

//For example:
//Test				Input				Result
//hitungRerata();		4					4.5
//					3 2 1 12

#include <iostream>
#include <cmath>

using namespace std;
void hitungRerata() {
   int N;
   double  total = 0, rata_rata, nilai;
   cin >> N;
   
   for (int i = 0; i < N; i++) {
      cin >> nilai;
      total += nilai;
   }
   
   rata_rata = total / N;
   
   cout << rata_rata << endl;
}


//NO. 4

//Buat fungsi dengan nama tukar, dengan 3 parameter bilangan bulat a, b, dan c. Fungsi ini akan mengubah nilai tiap parameter dengan cara menukar antara satu dengan lainnya sehingg a < b < c. 
//
//For example:
//Test									Input							Result
//int a=114,b=22,c=13;					int a=114,b=22,c=13;			13 22 114
//    tukar(a,b,c);						tukar(a,b,c);
//cout<<a<<" "<<b<<" "<<c<<endl;		cout<<a<<" "<<b<<" "<<c<<endl;

#include <iostream>
#include <cmath>

using namespace std;
void tukar(int& a, int& b, int& c) {
    if (a > b) {
        int tempat = a;
        a = b;
        b = tempat;
    }
    if (b > c) {
        int tempat = b;
        b = c;
        c = tempat;
    }
    if (a > b) {
        int tempat = a;
        a = b;
        b = tempat;
    }
}
 

//NO. 5
//Buat fungsi dengan nama fib yang memiliki 1 parameter integer, fungsi ini untuk menghitung bilangan fibonanci  f(n) = f(n-2) + f(n-1)
//dimana f(0) = 0, dan f(1) =1

//Contoh 
//fib(5) = f(3) + f(4)
//f(4) = f(2) + f(1)
//f(3) = f(1) + f(2)
//f(2) = f(0) + f(1)

//f(5) =  5

//For example:
//Test			Input			Result
//cout<<fib(5);	cout<<fib(5);	5


#include <iostream>
#include <cmath>

using namespace std;
int fib(int n){
	if (n==0){
		return 0;
	}
	if (n==1){
		return 1;
	}
	return fib(n-1) + fib(n-2);
}






































