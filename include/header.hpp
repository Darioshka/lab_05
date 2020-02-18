// Copyright 2018 Your Name <your_email>

#ifndef INCLUDE_HEADER_HPP_
#define INCLUDE_HEADER_HPP_
#include <iostream>
#include <cstring>
#define ERROR -1

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
            --top;
        }
    }
    const T& head() const{
        return ArrStack[top-1];
    }
};

template <typename T>
class stack{
private:
    T *ArrStack;
    int top;
    int size;

public:
    explicit stack(int s){
        size = s;
        top = 0;
        ArrStack = new T[size];
    }
    ~stack(){
        delete [] ArrStack;
    }
    template <typename ... Args>
    void push_emplace(Args&&... value){
        T obj(std::forward<Args>(value)...);
        if (top < size) {
            ArrStack[top] = obj;
            top++;
        }
    }
    void push(T&& value){
        if (top < size) {
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
            --top;
            return rezult;
        }
        exit(ERROR);
    }
};

#endif // INCLUDE_HEADER_HPP_
