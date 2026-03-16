#include <iostream>
#include <string>
using namespace std;

int main () {

	string Ten;
	double Toan,Van;

	cout <<"Nhap ho ten va diem 2 mon toan va van lan luot:";
	cin >>Ten>>Toan>>Van;

	cout <<"Ten:"<<Ten<<endl;
	cout <<"DTB:"<<(Toan+Van)/2;

	return 0;
}