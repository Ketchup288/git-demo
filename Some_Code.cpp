#include <iostream>

int main(){
    std::cout << "Hi" << "!" << std::endl;
    int number = 2050;
    if (number <= 4096)
    {
        int temp_number_1 = number / 256;
        int temp_number_2 = 256 * temp_number_1;
        int temp_number_3 = number - temp_number_2;
        if (temp_number_3 == 0){
            std::cout << "Your number is: " << temp_number_1 << std::endl;
        }
        if (temp_number_3 >= 0) {
            std::cout << "I can't divivde '" << number << "' on 256, change your number and try again!" << std::endl;
        }   
    }
    return 0;
}
