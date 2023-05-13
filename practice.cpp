// #include "iostream"
// using namespace std;
// // class Vehicle{
// //     private :
// //         int a = 1;

// //     public :

// //         Vehicle (const Vehicle & p){

// //         }
// //         int getA(){
// //             return a;
// //         }
// // };

// void print_add(int & p){
//     cout << "2 "<< p << endl;
// }

// void print_add(int * a){
//     cout << "1 " << a << endl;
// }



// void pass_by_value(int* p)
// {
//     //Allocate memory for int and store the address in p
//     p = new int;
// }

// void pass_by_reference(int*& p)
// {
//     p = new int;
// }

// int main(){
//     // Vehicle a;
//     // std::cout << a.getA() << std::endl;
//     int a = 1;
//     int * p = &a;
//     // int * p = &a;

//     // cout << p << endl;

//     // print_add(p);
//     // print_add_Ref(&a);

//     print_add(p);
//     return 0;
// }


// #include <iostream>
// using namespace std;

// void foo(int *ptr)
// {
//     cout <<"Before assignement addr :\t" << ptr <<  "In foo:  \t" << *ptr << "\n";
//     *ptr = 10;    // Modifying the pointer to point to a different location
//     cout <<"after assignment  foo addr :\t" << ptr <<  "In foo :\t" << *ptr << "\n"; 
        
// }

// void bar(int *& ptr)
// {
//     ptr = new int(80);    // Modifying the pointer to point to a different location
//     cout << "In bar:\t" << *ptr << "\n"; 
//     // Deleting the pointer will result the actual passed parameter dangling
// }
// int main()
// {
//     int temp = 100 ;
//     int *p = &temp ;

//     cout <<"Before foo addr :\t" << p <<  "Before foo:\t" << *p << "\n";
//     foo(p) ;
//     cout << "After foo:\t" << *p << "\n";

//     cout << "Before bar:\t" << *p << "\n";
//     bar(p) ;
//     cout << "After bar:\t" << *p << "\n";

//     delete p;

//     return 0;
// }





// #include <iostream>
// using namespace std;

// int main(){
//     int a = 5;
//     cout << "a " << a << endl;
//     cout << "address of a " << &a << endl;

//     int *b = &a;
//     cout << "b " << b << endl;
//     cout << "address of b " << &b << endl;

//     int &c = a;
//     cout << "c " << c << endl;
//     cout << "address of c " << &c << endl;

//     int *d = b;
//     cout << "d " << d << endl;
//     cout << "address of d " << &d << endl;

//     int *& e = b;
//     cout << "e " << e << endl;
//     cout << "address of e " << &e << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

// int main(){
//     // double a = 3.14;
//     // const int &b = a;                    // different location even after refernece
//     // cout << a << " " << &a<< endl;
//     // cout << b << " " << &b<< endl;


//     // int a = 1;
//     // const int &b = a;                                         //same location even using constant
//     // cout << a << " " << &a<< endl;
//     // cout << b << " " << &b<< endl;
//     return 0;
// }

#include <iostream>
#include <string>

class Account{
public:
  Account(double b): balance(b){}
  Account(double b, std::string c):balance(b), cur(c){}

private:
    double balance;
    std::string cur;
};

void strange(Account a){
  std::cout << "It works!" << std::endl;
}

int main(){

   Account account = 100.0; // No ERROR
   Account account1(100.0);
   Account account2 = {100.0, "EUR"};
   strange(100.0);        // No ERROR
   strange(false);

}