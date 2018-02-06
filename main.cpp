#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
class Convert{
	int j;
	public :
		int cnvrt(long o);
	void decimalTohex(long n) ;
void cnvrt();
		
};

void Convert::cnvrt()
	{
	long sd;
	cout<<"\n\nEnter Decimal number: ";
	cin>>sd;
	decimalTohex(sd);
}
void Convert::decimalTohex(long value){
{
    if (value == 0)
        return;

    int rem = value % 16;
    value /= 16;
    decimalTohex(value);
    if (rem > 9)
        cout << (char)(rem - 10 + 'A');
    else
        cout << rem;
}

	
}
int Convert::cnvrt(long number)
{
    int remainder;
 
    if(number <= 1) {
        cout <<"Binary number is  "<< number;
        return number;
    }
 
 
    remainder = number%2;
    cnvrt(number >> 1);
    cout << remainder;
}



int main(){
		long sa;
		cout << "\nEnter decimal number: ";
		cin >> sa;
		Convert a;
		a.cnvrt(sa);
		a.cnvrt();	
	}
