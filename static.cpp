#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count; //cant initialize to 1000 here

public:
    void setData(void){
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void){
        cout << "The id of this employee is "<<id <<"and this is employee number "<<count<<endl;
    }

    static void getCout(void){
        cout << "The value of count is " << count << endl;
    }
};


int Employee:: count; //defaut value is zero

int main(){
    Employee harry, rohan, lovish;
    harry.setData();
    harry.getData();
    Employee::getCout();

    rohan.setData();
    rohan.getData();
    Employee::getCout();

    lovish.setData();
    lovish.getData();
    Employee::getCout();

    return 0;
}