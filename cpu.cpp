#include <thread>
#include <iostream>
#include <vector>

void stress(){
    int a = 2;
    while(true){
    a = a ^ 2;
    }
}

int main(){
    std::vector<std::thread> threads;

    while(true){
        threads.push_back(std::thread(stress));
    }
}