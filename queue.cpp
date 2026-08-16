#include<iostream>
using namespace std;
#include<queue>
class queue{
    int* a;
    int n;
    int cs,f,r;
    public:
    queue(int s=5){
        a=new int[s];
        n=s;
f=cs=0;
r=n-1;
    }
    void push(int d){
        if(cs>=n){
            cout << "overflow";
            return ;
        }
        void pop(){
            if(cs>0){
                f=(f+1 )%n;
                cs--;
            }
            else{

                cout << "undeflow";


            }
        }
        int front(){
            return a[f];
        }
        bool empty(){
            return cs==0;
        }
        int size(){
            return cs[;
        }
    }
};
int main(){
    queue q;
    q.push(1);
      q.push(2);
        q.push(3);
          q.push(4);
            q.push(5);
            while (!s.empty()){
cout << q.front();
q.pop();
    }
    return 0;
}
