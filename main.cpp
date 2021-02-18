#include <iostream>
#include <vector>
#include <string>
void checkCoolness(const std::string &inputString){
    std::cout << "That's a pretty " << (inputString.ends_with("Cool!") ? "cool" : "boring" ) << " string you've got there" << std::endl;
}
int main(){
    std::cout << "Hello World" << std::endl;
    // Range base for loop with initializaer
    for(std::vector nums{1,2,3}; auto& e : nums){
        std::cout << e << std::endl;
    }
    // String method ends_with
    std::string coolString = "This string is really cool! Cool!";
    checkCoolness(coolString);
    std::string uncoolString = "This string is not really that cool.";
    checkCoolness(uncoolString);
    return 0;
}
