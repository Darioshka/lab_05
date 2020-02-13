// Copyright 2018 Your Name <your_email>

#ifndef INCLUDE_HEADER_HPP_
#define INCLUDE_HEADER_HPP_
#include <iostream>
#include <cstring>
using namespace std;
template <typename T>
class Stack{
private:
    T ArrStack[30];
    int top;
public:
    Stack(){
        top = 0;
    }


    void push(T&& value){
        if(top < 30) {
            ArrStack[top] = value;
            top++;
        }

    }
    void push(const T& value){
        if(top < 30) {
            ArrStack[top] = value;
            top++;
        }


    }
    void pop(){
        if(top > 0){
            ArrStack[--top];
        }

    }
    const T& head() const{
        return ArrStack[top-1];
    }
};
#endif // INCLUDE_HEADER_HPP_
