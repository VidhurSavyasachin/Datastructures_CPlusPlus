#include "List.h"
#include "tool.h"
List::List(){
    this->length = 0;
    this->head = NULL;
}
List::~List(){
   
}
void List::insert(string data){
    Cell* node = new Cell();
    node->data = data;
    node->next = this->head;
    this->head = node;
    this->length++;
}
void List::print(){
   
    Cell* head = this->head;
    int i = 1;
    while(head){
        cout << head->data << std::endl;
        head = head->next;
        i++;
    }
    
}
void List::insertion() {
    Cell * scan = head;
    Cell * currentCell = head->next;
    Cell * previousCell = head;

    if (scan == nullptr || scan->next == nullptr) {
        return;
    }
    
    while (currentCell != nullptr) {
        
        if(previousCell->data <= currentCell->data){
            currentCell = currentCell->next;
            previousCell = previousCell->next;
        }
        else{
           
            if (head->data > currentCell->data) {
                previousCell->next = currentCell->next;
                currentCell->next = head;
                head = currentCell;
            }else {
                scan = head;
                while (scan->next != NULL && scan->next->data < currentCell->data) {
                    scan = scan->next;
                }
                previousCell->next = currentCell->next;
                currentCell->next = scan->next;
                scan->next = currentCell;
            }
        }
        currentCell = previousCell->next;
    }
}
void List::find(){
  
}

void List::getData(){
    List* list = new List();
    string line;
    ifstream myfile ("/Users/vidhursavyasachin/Library/Autosave Information/P3LinkedList/P3LinkedList/meow.txt");
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
           list->insert(line);
        }
        list->insertion();
        list->print();
        myfile.close();
    }
    
    else cout << "Unable to open file";
    delete list;
}
