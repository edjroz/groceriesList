#include <iostream>
#include <cstdlib>
#include "List.h"

using namespace std;

List::List()
{
  head = NULL;
  current = NULL;
  temp = NULL;
}

void List::addNode(int id, string addName, int addQuantity)
{
  nodePtr addElm = new node;
  addElm->next = NULL;
  addElm-> idProduct = id;
  addElm->name = addName;
  addElm->quantity = addQuantity;

  if(head != NULL)
  {
    current = head;
    while(current->next !=NULL)
    {
      current = current->next;
    }
    current->next = addElm;
  }
  else
  {
    head = addElm;
  }
  cout <<"The product " << addName << " has been added to your list"<< endl;
  cout<< endl;
}

void List::DeleteNode(int delData)
{
  nodePtr delPtr = NULL;
  temp = head;
  current = head;

  while(current != NULL &&  current->idProduct != delData)
  {
    temp= current;
    current = current->next;
  }
  if(current == NULL)
  {
    cout << delData << " Is not in the list" <<endl;
    delete delPtr;
  }
  else
  {
    delPtr = current;
    current = current->next;
    temp->next = current;
    if(delPtr ==head)
    {
      head = head->next;
      temp = NULL;
    }
    delete delPtr;
    cout << "The value "<<  delData<< " was deleted"<< endl;
  }
}

void List::printList()
{
  current = head;
  cout << "This is your list: "<< endl;
  while(current != NULL)
  {
    cout << current -> idProduct<< "-"<<current->name<<": "<< current->quantity<<endl;
    current = current->next;
  }

}
