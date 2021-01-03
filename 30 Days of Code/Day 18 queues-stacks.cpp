#include <iostream>

using namespace std;

class Solution {
    //Write your code here
    string s;
    int rear = -1;
    int front = -1;
     int top = -1;

    public:
    void pushCharacter(char ch)
    {
        top++;
        s[top]=ch;
    }

    void enqueueCharacter(char ch)
    {
        if(rear==-1)
        {
            front=rear=0;
            s[rear]=ch;
        }

        else
        {

            rear++;
            s[rear]=ch;
        }
    }

    char popCharacter()
    {
        char b;
        b=s[top];
        top--;
        return b;
    }

    char dequeueCharacter()
    {
        char a;
        a=s[front];
        front++;
        return a;
    }
};

int main() {
    // read the string s.
    string s;
    getline(cin, s);

  	// create the Solution class object p.
    Solution obj;

    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }

    bool isPalindrome = true;

    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;

            break;
        }
    }

    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }

    return 0;
}
