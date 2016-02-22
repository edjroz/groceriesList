#include <iostream>
#include <string>

class List
{
private:
  //Define the basic structure of an element within the list
  typedef struct node
  {
    int quantity;
    string name;
    node* next;
  } * nodeElm;

  //pointers of the first, current and a temprary node
  nodeElm head;
  nodeElm current;
  nodeElm temp;

public:
    List();
    void addNode(int addData);
    void DeleteNode(int delData);
    void printList();
}
