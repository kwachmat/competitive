#include <stack>
#include <iostream>

#define MAX_SIZE 10

int main(int argc, char *argv[])
{
    int number;
    char command;
    std::stack<int> myStack;
    
    while(std::cin >> command)
    {
        if(command == '-')
        {
            // stack is empty
            if(myStack.empty()) std::cout << ":(\n";
            else
            { // pop from the top
                std::cout << myStack.top() << "\n";
                myStack.pop();
            }
        }
        else if(command == '+')
        {
            // read the number
            std::cin >> number;
            
            // check whether stack is already full or not
            if(myStack.size() == MAX_SIZE) std::cout << ":(\n";
            else { myStack.push(number); std::cout << ":)\n"; }
        }
    }
    
    return 0;
}