#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  while(1)
  {
   cout << "Groceries list" << endl;
   cout << "Choose an option:" << endl;
   cout << "1- display products" << endl;
   cout << "2- introduce a product" << endl;
   cout << "3- Eliminate a product" << endl;
   cout << "4- Exit" << endl;
   cin>> menu;
   cout << menu<< endl;
  }
  switch (menu) {
    case 1:
    {
      //something to print the list
    }
    case 2:
    {
      //something to introduce a product in the list
    }
    case 3:
    {
      //something to eliminate a product from the list
    }
    case 4:
    {
      cout << "Exiting the list, thank you for using this app" <<endl ;
      return 0;
      break;
    }
    default :
    {
      system("clear");

    }

  }
  return 0;

}
