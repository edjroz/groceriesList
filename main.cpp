#include <iostream>
#include <cstdlib>
#include "List.h"

using namespace std;

int main()
{
  List groceries;
  int menu;
  int i = 1;
  string name;
  int key;

  while(1)
  {
    cout << "------------------------" <<endl;
    cout << "Groceries list" << endl;
    cout << "Choose an option:" << endl;
    cout << "1- display products" << endl;
    cout << "2- introduce a product" << endl;
    cout << "3- Eliminate a product" << endl;
    cout << "4- Exit" << endl;
    cin>> menu;
    system("clear");
    if (menu == 1)
      groceries.printList();
      if (menu == 2)
      {
        cout <<"Whats the name of your product? ";
        cin >> name;
        cout << "How many products do you wish to add? ";
        cin  >>key;
        groceries.addNode(i,name,key);
        i++;
      }
      if (menu == 3)
      {
        groceries.printList();
        cout <<endl;
        cout << "Que numero en la lista desea eliminar? ";
        cin >>key;
        groceries.DeleteNode(key);
      }
      if (menu == 4)
      {
        cout << "Exiting the list, thank you for using this app" <<endl ;
        return 0;
        break;
      }
      //system("clear");

  }


}

/*switch (menu) {
  case 1:
  {
    groceries.printList();
  }
  case 2:
  {

    cout <<"Whats the name of your product?";
    cin >> name;
    cout << "How many products do you wish to add?";
    cin >> quantity;
    groceries.addNode(i,name,quantity);
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
}*/
