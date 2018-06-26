#include <iostream>
using namespace std;

struct List
{
    int num;
    List *next;
};

//在下一行建立头指针
List *head;

List *Create()
{
    //从下一行开始构造单链表,创建两个指针P和Q，P指向待插入的节点，Q用于在其后插入节点，并把链表置为空
    List *p=NULL;
    List *q=NULL;
    head=NULL;
    for(int i=0;i<3;i++){ //创建3个节点，分别存放用户输入的3个数字
        p=new List;    //给P节点分配空间，并将用户输入的内容赋给P节点的结构成员
        cin>>p->num;
        if(head==NULL){//当head为空时，要插入第一个节点，让头指针指向节点P，否则P就不是头节点，把P节点插入到Q节点后面。添加节点的操作结束后，Q应该指向最后一个节点
            head=p;
        }else{
            q->next=p;
        }
        q=p;
    }
    if(head!=NULL){ //头指针不为空，说明单链表至少有一个节点，让q所指的最后一个节点的指针域为空，说明已经到达链尾
        q->next=NULL;
    }
    return head;
}

void displayList(List *head)
{
    while ( head != NULL ) {
        cout << head->num << endl;
        head = head->next;
    }
}

int main() {
    Create();
    displayList(head);
    return 0;
}
