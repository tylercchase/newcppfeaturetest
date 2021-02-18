#include <iostream>
#include <vector>
int main(){
    std::cout << "Hello World" << std::endl;
    // Range base for loop with initializaer
    for(std::vector nums{1,2,3}; auto& e : nums){
        std::cout << e << std::endl;
    }
    return 0;
}