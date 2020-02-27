#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
bool isPrinme(int a){
    bool check = false;
    for(int i = 2; i <= a/2; i++)
    {
        if(a%i==0){
            check = true;
        }
    }
    if(check == false){return true;}
    else{return false;}
}
void replace(char s){

        int a;
        int count = 0;
        a = s;
        while(isPrinme(a)==false){
                if(isPrinme(a-count))
                a = a-count;
                else if(isPrinme(a+count))
                a = a + count;
                else if(isPrinme(a-count)&&isPrinme(a+count))
                a = a-count;
                else{
                    count++;
                }

        }
    s = a;
    cout<<s;
}
int main(){
    
    int t , l;
    cin>>t;  
    string s;
    for(int i = 0; i < t; i++){
    cin>>l;
    cin>>s;
    for(int i = 0; i <l; i++ ){
        replace(s[i]);
    }
    }
return 0;
}


    
    


