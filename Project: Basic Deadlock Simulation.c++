#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex m1, m2;

void task1(){
    m1.lock();
    m2.lock();
    cout<<"Task1\n";
    m2.unlock();
    m1.unlock();
}

void task2(){
    m2.lock();
    m1.lock();
    cout<<"Task2\n";
    m1.unlock();
    m2.unlock();
}

int main(){
    thread t1(task1), t2(task2);
    t1.join();
    t2.join();
}
