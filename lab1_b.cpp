#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;
    cout << num;

    while (num>1){
	if (num%2!=0){
	    num=num*3+1;
	    cout << " " << num;
	}
	else{
	    num=num/2;
	    cout << " " << num;
	}
    }
    cout << endl;

    return 0;

}
