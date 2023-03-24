//LATIHAN SOAL 1 MK PETRUK 

//NO.1

//Diberikan bilangan positif n, lakukan:
//
//jika 1 < n < 9, cetak dalam huruf kecil angka yang diberikan (misal satu, dua, tiga, dst)
//jika n> 9, cetak Lebih dari 9
//Format Input
//
//Sebuah integer n
//
//Format Output
//
//Sesuai deskripsi soal
//
//Constraint
//
//1 < n < 109
//For example:
//
//Test	Input	Result
//tc01	1		satu

#include<iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
if (a==1) { 
	cout<<"satu ";
}else if (a==2) {
	cout<<"dua ";
}else if (a==3) {
	cout<<"tiga ";
}else if (a==4) {
	cout<<"empat ";
}else if (a==5) {
	cout<<"lima ";
}else if (a==6) {
	cout<<"enam ";
}else if (a==7) {
	cout<<"tujuh ";
}else if (a==8) {
	cout<<"delapan ";
}else if (a==9) {
	cout<<"sembilan ";
}else if (a > 9) {
	cout<<"Lebih dari 9 ";
}


	return 0;	
}


//NO. 2

//Tulis sebuah fungsi int max_of_four(int a, int b, int c, int d) yang mengembalikan maksimum dari empat argumen yang diterimanya.
//
//For example:
//
//Test								Input								Result
//int a=3,b=1,c=4,d=0;				int a=3,b=1,c=4,d=0;				4
//cout<<max_of_four(a, b, c, d);	cout<<max_of_four(a, b, c, d);
//

#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a,int b,int c,int d){
	int data [] = {a,b,c,d};
	int max = data [0];
	
for(int i=1; i<=4; i++){
	if (max<data[i])
	max=data[i];
	
}
return max;
}

//NO. 3
//Buat sebuah fungsi  tanpa return dengan nama bilangan , dimana parameter fungsi berupa sebuah bilangan positif n, fungsi dapat melakukan :
//
//jika 1 < n < 9, cetak dalam huruf kecil angka yang diberikan (misal satu, dua, tiga, dst)
//jika n> 9, cetak Lebih dari 9

//Berikut struktur fungsinya 

//void bilangan(int n){

//}

//For example:
//Test			Input			Result
//bilangan(1)	bilangan(1)		satu

#include<iostream>
using namespace std;

void bilangan(int n){
	if (n >= 1 && n <= 9){
		string bil_kecil[9] = {"satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};
		cout<<bil_kecil[n-1];
	} else if (n > 9){
		cout<<"Lebih dari 9";
	}
}



//NO. 4 sama dengan no.3

//NO. 5 sama dengan no.3

//NO. 6 
//Task
//Read  numbers from stdin and print their sum to stdout.
//
//Input Format
//One line that contains  space-separated integers: a, b, and c.
//
//Constraints
//1 < a,b,c <1000
//
//Output Format
//Print the sum of the three numbers on a single line.
//
//For example:
//
//Test	Input	Result
//tc01	1 1 1	3

#include<iostream>
using namespace std;
int main() {
int a,b,c,jumlah;

cin >> a;
cin >> b;
cin >> c;
jumlah = a + b + c;
 
cout << jumlah;
}






















