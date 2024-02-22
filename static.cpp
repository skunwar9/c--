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
};


int Employee:: count=1000; //defaut value is zero

int main(){
    Employee harry, rohan, lovish;
    harry.setData();
    harry.getData();

    rohan.setData();
    rohan.getData();

    lovish.setData();
    lovish.getData();

    return 0;
}