// This is a simple program for working with a stack

#include <iostream>
# include <string>

using namespace std;

class Stack{

    private:
        int top;
        int arr[5];

    public:
        Stack()
        {
            top = -1;
            for (int i = 0; i<5; i++)
            {
                arr[i] = 0;
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
                return true;
            else
                return false;
        }

        void push(int val)
        {
            if (isFull())
            {
                cout<< "Stack overflow"<<endl;
            }
            else
            {
                top++; // incrementing top by 1
                arr[top] = val;
            }
        }

        int pop() // function for removing a value from the top of the stack
        {
            if(isEmpty())
            {
                cout<<"Stack Underflow"<<endl;
                return 0;
            }
            else
            {
                int popValue = arr[top];
                arr[top] = 0;
                top--;
                return popValue;
            }
        }

        int count () //method for  counting all the elements in the stack
        {
            return (top+1);
        }

        int peek(int pos)
        {
            if (isEmpty())
            {
                cout<<"stack overflow"<<endl;
                return 0;
            }
            else
            {
                return arr[pos];
            }

        }

        void change (int pos, int val) // Fn for value change
        {
            arr[pos] = val;
            cout << "Value changed at location " << pos << endl;
        }

        void display() //Fn for showing all items in the stack
        {
            cout << "All values in the stack are "<<endl;
            for (int i=4; i>0; i--)
            {
                cout<<arr[i]<<endl;
            }
        }

    };

int main()
{
    Stack s1; // s1 is our stack option
    int option, position, value;


    do // Using a do while loop coz of the menu display
    {
        cout << "What operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
        cout << "1. Push()" << endl;
        cout << "2. Pop()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. isFull()" << endl;
        cout << "5. peek()" << endl;
        cout << "6. count()" << endl;
        cout << "7. change()" << endl;
        cout << "8. display()" << endl;
        cout << "9. Clear Screen" << endl << endl;

        cin >> option;
        switch(option)
        {
        case 1:
            cout<<"Enter and element to push in the stack"<<endl;
            cin>>value;
            s1.push(value);
            break;

        case 2:
            cout<< "Pop function called - popped value: "<< s1.pop()<<endl;
            break;

        case 3:
            if (s1.isEmpty())
                cout<< "Stack is Empty" <<endl;
            else
                cout<< "Stack in not empty" << endl;
            break;

        case 4:
            if (s1.isFull())
                cout << "Stack is Full" << endl;
            else
                cout << "Stack is not Full" << endl;
            break;

        case 5:
            cout << "Enter position of item you want to peek: " << endl;
            cin >> position;
            cout << "Peek Function Called - Value at position " << position << " is " << s1.peek(position) << endl;
            break;

        case 6:
            cout << "Count Function Called - Number of Items in the Stack are: " << s1.count() << endl;
            break;

        case 7:
            cout << "Change Function Called - " << endl;
            cout << "Enter position of item you want to change : ";
            cin >> position;
            cout << endl;
            cout << "Enter value of item you want to change : ";
            cin >> value;
            s1.change(position, value);
            break;

        case 8:
            cout << "Display Function Called - " << endl;
            s1.display();
            break;

        case 9:
            system("cls");
            break;
        default:
            cout << "Enter Proper Option number " << endl;
        }
    }
    while (option!=0);

    return 0;

}
