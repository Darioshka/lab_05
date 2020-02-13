// Copyright 2018 Your Name <your_email>

#ifndef INCLUDE_HEADER_HPP_
#define INCLUDE_HEADER_HPP_
#include <iostream>
#include <cstring>

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
        if (top < 30){
            ArrStack[top] = value;
            top++;
        }
    }
    void push(const T& value){
        if (top < 30){
            ArrStack[top] = value;
            top++;
        }
    }
    void pop(){
        if (top > 0){
            ArrStack[--top];
        }
    }
    const T& head() const{
        return ArrStack[top-1];
    }
};

template <typename T>
class stack{

private:
    T ArrStack[30];
    int top;

public:
    stack(){
        top = 0;
    }
    template <typename ... Args>
    void push_emplace(Args&&... value){
        T obj(std::forward<Args>(value)...);
        if (top < 30) {
            ArrStack[top] = obj;
            top++;
        }
    }
    void push(T&& value){
        if (top < 30) {
            ArrStack[top] = value;
            top++;
        }
    }
    const T& head() const{
        return ArrStack[top-1];
    }
    
    T pop(){
        if (top > 0){
            T rezult = ArrStack[top-1];
            ArrStack[--top];
            return rezult;
        }
    }
};

#endif // INCLUDE_HEADER_HPP_
