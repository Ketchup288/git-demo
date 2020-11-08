#include <iostream>

int main(){
    std::cout << "Hello, " << "boys!" << std::endl;
    int number = 2048;
    if (number <= 4096)
    {
        int temp_number_1 = number / 256;
        int temp_number_2 = 256 * temp_number_1;
        int temp_number_3 = number - temp_number_2;
        if (temp_number_3 == 0){
            std::cout << "Your number is: " << temp_number_1 << std::endl;
        }
    }
    return 0;
}
