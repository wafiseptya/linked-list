#include <iostream>

using namespace std;

struct node { //ISI Structnya deklarasi disini
    int data;
    node *next; //ini buat ponter selanjutnya
    //node *prev; //ini buat pointer sebelumnya (kalo dibutuhkan)
};

node *head = NULL;
node *tail = NULL;

void add_data(int value){
    node *temp = new node;
    temp->data = value;
    temp->next = NULL;
    //temp->prev = NULL; //double linked list
    if (head == NULL){
        head = temp;
        tail = temp;
    }else {
        tail->next = temp; //set pointerke data yang baru
        //temp->prev = tail; //double linked list
        tail = temp; //ganti data baru jadi tail
    }
}

void add_front(int value){
    node *temp = new node;
    temp->data = value;
    if (head == NULL){
        head = temp;
        tail = temp;
        temp->next = NULL;
        //temp->prev = NULL; //double linked list
    }else {
        //head->prev = temp; //double linked list
        temp->next = head; //kasih pointer next dari data baru ke head
        head = temp; //ganti data baru jadi head
    }
}

void add_middle(int value, int pos)
  {
    node *pre = new node;
    //node *nex = new node; //double linked list
    node *cur = new node;
    node *temp = new node;
    if (head == NULL){
        temp->data = value;
        head = temp;
        tail = temp;
        temp->next = NULL;
        //temp->prev = NULL; //double linked list
    }else {
        cur = head;
        for(int i=1;i<pos;i++)
        {
          pre = cur;
          cur = cur->next;
          //nex = cur->next //double linked list
        }
        temp->data = value;
        pre->next = temp;
        //nex->prev = temp; //double linked list
        //temp->prev = pre; //double linked list
        temp->next = cur;
    }
  }

void show_data(){
    if(head == NULL){
        //if no data
    } else {
        node *temp = new node;
        temp = head;
        while(temp != NULL)
        {
          cout << temp->data<<" ";
          temp = temp->next;
        }
    }
}

/*
void show_dataTail(){ //hanya untuk double linked list
    if(head == NULL){
        //if no data
    } else {
        node *temp = new node;
        temp = tail;
        while(temp != NULL)
        {
          cout << temp->data<<" ";
          temp = temp->prev;
        }
    }
}
*/

void delete_front(){
    if (head == NULL){
        head == NULL;
        tail == NULL;
    }else {
        node *temp = new node;
        temp = head;
        head = head->next;
        //head->prev = NULL; //double linked list
        delete temp;
    }
}

/*
void delete_last(){ //double linked list only
    if (head == NULL){
        head == NULL;
        tail == NULL;
    }else {
        node *temp = new node;
        temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete temp;
    }
}
*/

void delete_last(){
    if (head == NULL){
        head == NULL;
        tail == NULL;
    }else {
        node *cur = new node;
        node *pre = new node;
        cur = head;
        while(cur->next!=NULL)
        {
          pre = cur;
          cur = cur->next;
        }
        tail = pre;
        pre->next = NULL;
        delete cur;
    }
}

void delete_pos(int pos){
    if (head == NULL){
        head == NULL;
        tail == NULL;
    }else {

    }
    node *cur = new node;
    node *pre = new node;
    //node *nex = new node; //double linked list
    cur = head;
    for(int i=1;i<pos;i++)
    {
      pre = cur;
      cur = cur->next;
    }
    pre->next = cur->next;
    //nex->prev = cur->prev; //double linked list
}

int main(){

    //INSERT CODE HERE

    return 0;
}
