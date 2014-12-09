#include <iostream>
#include <sstream>
using namespace std;

int main ()
{
  string inputString;
  float price=0;
  int quantity=0;

  cout << "Enter price of an Apple: ";
  getline (cin,inputString);
  stringstream(inputString) >> price;
  cout << "Enter quantity: ";
  getline (cin,inputString);
  stringstream(inputString) >> quantity;
  cout << "Total price: " << price * quantity << endl;
  return 0;
}
