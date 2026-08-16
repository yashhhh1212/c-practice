#include<iostream>
#include<stack>
using namespace std;
void pushbottom(stack<int>  &s,int top){
if(s.empty()){
    s.push(top);
    return ;
}
int x =s.top();
s.pop();
pushbottom(s,top);
s.push(x);
}

void revstack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int top  =s.top();
    s.pop();
    revstack(s);
    pushbottom(s,top);
}
    int main()
    { stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    revstack(s);
    while (!s.empty()){
cout << s.top();
s.pop();
    }

return 0;
}
