#include <iostream>
using namespace std;

class User{
    int x;

    public:
    User(int amount){
        x = amount;
        
    }

    int send(int u){
        x = x - u;
        return x ;
    }
    int withdraw(int v){
        x = x - v;
        return x ;
    }
    int deposit(int w){
         x = x + w;
        return x ;
    }



};

int main(){
    string jina;
    int pesa, choice, kiwango;
   
    cout<<"What is your name? "<<'\n';
    cin>>jina;
    cout<<"What is your MPESA balance? "<<'\n';
    cin>>pesa;
   User musk(pesa);

    cout<<"Hello "<<jina << ",Clone Mpesa offers the following services: "<<'\n';
    cout<<"1-Send Money"<<'\n';
    cout<<"2-Withdraw money"<<'\n';
    cout<<"3-Deposit money"<<'\n';
    cout<<"Which service would you like?"<<'\n';
    cin>>choice;

    if(choice==1){
        //how much money do you want to send
        cout<<"how much money do you want to send:"<<'\n';
        cin>>kiwango;
        cout<<"You have sent "<<kiwango<<" and your new balance is "<<musk.send(kiwango)<<'\n';
    }
    else if(choice ==2){
         //how much money do you want to withdrwa
         cout<<"how much money do you want to withdraw:"<<'\n';
         cin>>kiwango;
         cout<<"You have withdrawn "<<kiwango<<" and your new balance is "<<musk.withdraw(kiwango)<<'\n';
    }
    else if(choice==3){
//how much money do you want to deposit
cout<<"how much money do you want to deposit"<<'\n';
cin>>kiwango;
cout<<"You have deposited "<<kiwango<<" and your new balance is "<<musk.deposit(kiwango)<<'\n';
    }
    else{
       cout<<"Invalid input"<<'\n';
    }
    
    

    return 0;
}