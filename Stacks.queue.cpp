//Stack using Queue

#include <iostream>
#include <queue>
using namespace std;

class Stack{
    private:
    queue <int> q;
    public:

    void push(int x){
    int s = q.size();
    q.push(x);
    q.push(q.front());
    q.pop();
    }
    
    int Pop(){
        int n = q.front();
        q.pop();
        return n;

    }

    int Top(){
        return q.front();
    }

    int Size(){
        return q.size();
    }
};




