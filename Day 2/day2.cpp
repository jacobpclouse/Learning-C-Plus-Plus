#include <iostream>

// https://www.learncpp.com/cpp-tutorial/variable-assignment-and-initialization/
int main()
{
    // Here's some math/physics values that we copy-pasted from elsewhere
    double pi { 3.14159 };
    double gravity { 9.8 };
    double phi { 1.61803 };

    std::cout << pi << '\n';  // pi is used
    std::cout << phi << '\n'; // phi is used

    // The compiler will likely complain about gravity being defined but unused

    return 0;
}





// int main()
// {
// 	int width; // define a variable named width
// 	width = 5; // copy assignment of value 5 into variable width

// 	std::cout << width; // prints 5

//   std::cout << "\n ====== \n";
// 	width = 7; // change value stored in variable width to 7

// 	std::cout << width; // prints 7
//   std::cout << "\n ====== \n";


// 	return 0;
// }













// int main() {
//   for (int i = 0; i < 5; i++) {
//     std::cout << i << ": Hello World" << "\n";
//   }

// }

