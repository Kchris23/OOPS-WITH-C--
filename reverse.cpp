#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int number,reversed_num=0;
    cout << "Enter a number for find reverse" << endl;
    cin>>number; //Taking a number as an input and stores number variable
    cout << "you entered: "<<number;
    for(; number!=0;){
        reversed_num=reversed_num*10;
       reversed_num=reversed_num+number%10;
       number=number/10;//updating statements
    }
    cout << "\nReversed number is: "<<reversed_num;
    getch();
    return 0;
}
