/*#include <iostream>

int main() {
    std::cout << "Enter a number: "; //ask for  a certain number

    int x{}; //define
    //nt y{};
    std::cin >> x; // get one number and store them as x

    std::cout << "You entered: " << x << '\n';
    return 0;
}
*/

#include <iostream>
int main() {
    std::cout <<"Enter two numbers followed by a space: "; //asking for two values

    int x{};
    int y{};
    std::cin >> x >> y; //Get two numbers and input store them as x and y

    std::cout << "You entered: " << x << " and " << y << " respectively" << '\n';
}



