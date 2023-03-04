#include<iostream>
using namespace std;

class Calculator{
      
      int x,y;

      public:
       void result(){
          cout<<"Enter your two numbers:";
          cin>>x;
          cin>>y;
       }

       int Add(){
           return x + y;
       }

       int Subtract(){
           return x - y;
       }

       int Multiply(){
            return x * y;
       }

       int Divide(){
            return x / y;
       }

       int Modulus(){
            return x % y;
       }
};


int main(){
    cout<<" 1.Add \n 2.Subtract \n 3.Multiply \n 4.Divide \n 5.Modulus";

    Calculator c;

    int choice;
    cout<<"\nEnter a number between 1-5:";
    cin>>choice;

   switch(choice){
            case 1:
              c.result();
              cout<<"\nResult :"<<c.Add()<<endl;
              break;

            case 2:
              c.result();
              cout<<"\nResult :"<<c.Subtract()<<endl;
              break;

            case 3:
              c.result();
              cout<<"\nResult :"<<c.Multiply()<<endl;
              break;

            case 4:
              c.result();
              cout<<"\nResult :"<<c.Divide()<<endl;
              break;

            case 5:
              c.result();
              cout<<"\nResult :"<<c.Modulus()<<endl;
              break;
  
            default:
              cout<<"\nInvalid Input.Try Again";
      
        }
    }
