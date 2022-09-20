#include<iostream>
using namespace std;

class Stack
{
private:
    int top;
    int arr[5];
    
public:
    Stack()
    {
        top=-1;
        for (int i = 0; i < 5; i++)
        {
            arr[i]=0;
        }
    }


    bool isEmpty()
    {
        if (top==-1)
        {
           return true;
        }
        else
           return false;
    }

    bool isFull()
    {
        if (top==4)
        {
            return true;
        }
        else
            return false;
    }

    void push(int val)
    {
        if(isFull())
        {
            cout<<"Stack Overflow"<<endl;
        }
        else
        {
            top++;
            arr[top]=val;
            cout<<"Item "<<val<<" has been pushed.\n";


        }
    }

    int pop()
    {
        if(isEmpty())
        {
            cout<<"Stack UnderFlow"<<endl;
            cout<<"poped value:";
            return 0;
        }
        else
        {
            int k=arr[top];
            arr[top]=0;
            top--;
            cout<<"Poped Value: ";
            return k;
        }
    }

    int count()
    {
        return top+1;
    }

    int peek(int pos)
    {
        if (isEmpty())
        {
            cout<<"Stack Underflow"<<endl;
        }
        else
            return arr[pos];
        
    }

    void change(int pos,int val)
    {
        if(isEmpty())
        {
            cout<<"Stack is in UnderFlow State\n";
        }
        else if(pos>top)
        {
            cout<<"There's nothing assigned before in position "<<pos<<endl;
        }
        else
        {
            arr[pos]=val;
            cout<<"Value Changed at position "<<pos<<endl;
        }

    }

    void display()
    {
        cout<<"All values in Stack here: "<<endl;
        for (int i = 4; i >=0; i--)
        {
            cout<<arr[i]<<endl;
        }
    } 
};

int main()
{
    int option,position,value;
    Stack s1;

    do
    {
        cout<<"What operation do you want to perform?Select option number.Enter 0 to exit"<<endl;
        cout<<"1.push()"<<endl;
        cout<<"2.pop()"<<endl;
        cout<<"3.isEmpty()"<<endl;
        cout<<"4.isFull()"<<endl;
        cout<<"5.peek()"<<endl;
        cout<<"6.count()"<<endl;
        cout<<"7.change()"<<endl;
        cout<<"8.display()"<<endl;
        cout<<"9.Clear Screen"<<endl;

        cin>>option;

        switch (option)
        {
        case 0:
            break;
        case 1:
            cout<<"Enter an item you wanna push in the Stack: \n";
            cin>>value;
            s1.push(value);
            break;
            
        case 2:
            cout<<"Pop function called \n";
            cout<<s1.pop()<<endl;
            break;
             
        case 3:
            if(s1.isEmpty())
                {
                    cout<<"Stack is Empty\n";
                }
            else
                cout<<"Stack is not Empty\n";
            break;
        
        case 4:
            if(s1.isFull())
                {
                    cout<<"Stack is Full\n";
                }
            else
                cout<<"Stack is not Full\n";
            break;
  
        case 5:
            cout<<"Enter a Position you wanna peek from the Stack: \n";
            cin>>position;
            cout<<"Peeked value at position '"<<position<<"' is : "<<s1.peek(position)<<endl;
            break;
          
        case 6:
            cout<<"Count function called. /n Number of items in the Stack are :"<<s1.count()<<endl;
            break;
                
        case 7:
            cout<<"Enter position of Item you wanna chanage :";
            cin>>position;
            cout<<"Enter Value of Item you wanna chanage :";
            cin>>value;
            s1.change(position,value);
            break;
           
        case 8:
            s1.display();
            break;

        case 9:
            system("cls");
            break;
                
        default:
            cout<<"Enter proper option."<<endl;
            break;
   
        }

    }while(option!=0);

}
