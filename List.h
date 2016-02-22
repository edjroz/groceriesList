#include <iostream>
#include <string>

class List
{
private:
  //Define the basic structure of an element within the list
  typedef struct node
  {
    int idProduct;
    int quantity;
    std::string name;
    node* next;
  } * nodePtr;

  //pointers of the first, current and a temprary node
  nodePtr head;
  nodePtr current;
  nodePtr temp;

public:
    List();
    void addNode(int id, std::string addName, int addQuantity);
    void DeleteNode(int delData);
    void printList();
};
