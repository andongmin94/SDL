#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

<<<<<<< Updated upstream
    int a, b;
    cin >> a >> b;
    cout << a + b +3;
=======
    stack<char> stack;
    string string;
    
    cin >> string;
    int sum = 0;
    int temp = 1;

    for(int i = 0; i < string.size(); i++)
    {
        if(string[i] == '(')
        {
            temp *= 2;
            stack.push(string[i]);
        }

        if(string[i] == '[')
        {
            temp *= 3;
            stack.push(string[i]);
        }
        
        if(string[i] == ')')
        {
            if(stack.empty() || stack.top() != '(')
            {
                cout << 0;
                return 0;
            }
            
            if(i != 0 && string[i - 1] == '(')
                sum += temp;
            
            stack.pop();
            temp /= 2;     
        }
        
        if(string[i] == ']')
        {
            if(stack.empty() || stack.top() != '[')
            {
                cout << 0;
                return 0;
            }
            
            if(i != 0 && string[i - 1] == '[')
                sum += temp;
            
            stack.pop();
            temp /= 3;
        }
    }
    if(stack.empty()) cout << sum;
    else cout << 0;
>>>>>>> Stashed changes
}