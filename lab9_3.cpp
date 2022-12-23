#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int age,bounty;
    string cha;
    cout<<"Enter your age: ";
    cin>>age;
    if(age <= 25){
        double height;
        cout<<"Enter your height: ";
        cin>>height;
            if(height < 100){
                cha = "Chopper";    
            }else if(height < 180){
                cha = "Usopp";}      
            else{
                cout<<"Enter your bounty: ";
                cin>>bounty;
                    if(bounty <= 1.1*pow(10,9)){
                        cha = "Sanji"; 
                    }else{
                        cha = "Zoro";     
                    }
            }
    }else{
        if(age <= 60){
            cout<<"Enter your bounty: ";
            cin>>bounty;
                if(bounty <= 5*pow(10,8)){
                    cha = "Franky"; 
                }else{
                    cha = "Jinbe";     
                }
        }else{
            cha = "Brook";      
        }    
    }
cout<<"Your character = "<<cha;
}