#include <iostream>
#define STACK_MAX 5
#define QUEUE_MAX 5
void _push(int);
void _pop(int);
int total=0;
using namespace std;

class Stack {
    private:
        int data[STACK_MAX];
        int Size;
    public:
        Stack(){Size = 0;}
       ~Stack(){}
        int Top(){
            if (Size == 0) {
                cout<<"\n Error: stack empty \n";
                return -1;
            }
            return data[Size-1];
        }

        void Push(int d) {
            if (Size < STACK_MAX)
            data[Size++] = d;
            else
            cout<<"\n Error: stack full \n";
        }
        void Pop() {
            if (Size == 0)
            cout<<"\n Error: stack empty \n ";
            else
            Size--;
        }
        void Show(){
           cout<<"Your Stack Is Content : ";
           for(int k=0;k<STACK_MAX;k++){
           cout<<"["<<data[k]<<"]";
           }
        }
};
class Queue{
    private:
        int a[QUEUE_MAX];
        int Front;
        int rear;
    public:
        Queue(){
            Front=0;
            rear=0;
        }
        ~Queue(){
            delete []a;
        }
        void Insert(int i){
            if(isfull()){
            cout<<"Queue is FULL !!!\n";
            return;
        }
        a[rear] = i;
        rear++;
        }
        int Remove(){
        if(isempty()){
        cout<<"Queue Empty !!! \n";
        return 0;
        }
        return(a[Front++]);
        }
        int isempty(){
        if(Front == rear)
        return 1;
        else
        return 0;
        }
        int isfull(){
        if(rear == QUEUE_MAX)
        return 1;
        else
        return 0;
        }
};


Stack _stack;
Queue _queue;


int main(){
    int _op1,_op2,n=0,x;
    cout<<"\t Data Structures \n 1-Stack \n 2-Queue \n 3-Cqueue \n\n";
    cout<<"Enter Number Of DS Type from the list :  ";
    cin>>_op1;

 switch(_op1){
    case 1:
            while(_op2!=0){
            cout<<"\n Options : [1] PUSH | [2] POP | [0] Back \n >>";
            cin>>_op2;
                switch(_op2){
                    case 1:
                            cout<<"\nYou have ["<<total<<"] Elements "<<"and the  max size of stack is ["<<STACK_MAX<<"]\n";
                            cout<<"How many Element Do you need :";
                            cin>>n;
                            _push(n);break;
                    case 2:
                            cout<<"\nYou have ["<<total<<"] Elements "<<"and the  max size of stack is ["<<STACK_MAX<<"]\n";
                            cout<<"How many Element Do you want to Delete :";
                            cin>>x;_pop(x);;break;
                    default:
                            cout<<"\n Try again : ";break;
                }
            }

            break;
    case 2:
    break;
    case 3:
    break;
    default:
    cout<<"Error You Have only 3 DS Type !";
    break;
  }

return 0;
}

    void _push(int n){
    int elemnt;
    for(int i=0;i<n;i++){
        cout<<"Enter Element["<<i<<"]";
        cin>>elemnt;
        _stack.Push(elemnt);
        total++;
        if(total>STACK_MAX) total=5;
        }
    }

    void _pop(int n){
    for(int i=0;i<n;i++){
        _stack.Pop();
        total--;
        if(total<0) total=0;
        }
    }
