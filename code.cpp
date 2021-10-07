#include <iostream>

int main() {

    char userResponse;

    std::cout << "Do you like code? (yes or no): ";
    std::cin >> userResponse;

    if (userResponse == 'y' || userResponse == 'Y') {

        std::cout << "Wait until, you see what you can do with coding!";

    }
    else {

        std::cout << "Keep trying! I bet you'll change or mind, coding can be a blast.\n";

    }
    
}