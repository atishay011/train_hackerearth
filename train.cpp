#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
void front_seat_generator(){
    int seat_no , front_seat_no;
    string seat_type;
    bool rnd = false;
    cout<<"\n"<<"enter the seat number  between 1 and 108 :  ";
    cin>>seat_no;
    if(seat_no < 1 || seat_no > 108){
        cout<<"\n"<<"invalid seat number";
    }
    else if(seat_no%12==0){
        seat_type = "WS";
        front_seat_no = seat_no-11;
    }
    else if((seat_no+11)%12==0){
        seat_type = "WS";
        front_seat_no = seat_no+11;
    }
    else if(seat_no%12!=0&& seat_no %6 == 0){
        seat_type = "WS";
        front_seat_no = seat_no+1;
    }
     else if((seat_no-1)%12!=0&& (seat_no-1) %6 == 0){
        seat_type = "WS";
        front_seat_no = seat_no-1;
    }
    else if((seat_no+1)%12==0)
    {
        seat_type = "MS";
        front_seat_no = seat_no-9;
    }
    else if((seat_no+10)%12==0)
    {
        seat_type = "MS";
        front_seat_no = seat_no+9;
    }
    else if((seat_no+1)%3==0&&(seat_no+1)%6!=0){
        seat_type = "MS";
        front_seat_no = seat_no-3;
    }
    else if((seat_no+4)%3==0&&(seat_no+4)%6!=0){
        seat_type = "MS";
        front_seat_no = seat_no+3;
    }
    else if((seat_no+2)%12==0)
    {
        seat_type = "AS";
        front_seat_no = seat_no - 7;
    }
    else if((seat_no+9)%12==0)
    {
        seat_type = "AS";
        front_seat_no = seat_no + 7;
    }
    else if((seat_no + 3)%12==0){
        seat_type = "AS";
        front_seat_no = seat_no - 5;
    }
    else if((seat_no + 8)%12==0){
        seat_type = "AS";
        front_seat_no = seat_no + 5;
    }
    
    
    
    
    
    cout<<front_seat_no<<" "<<seat_type;

    
    
    
    }





int main(){
    int test_cases;
    int count = 0;
    cout<<"enter the number of test cases  : ";
    cin>>test_cases;
    while(count < test_cases){
        front_seat_generator();
        count++;
    }
    return 0;
}