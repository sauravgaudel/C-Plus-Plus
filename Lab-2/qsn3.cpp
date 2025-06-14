// Define two namespaces : Square and Cube.In both the namespaces, define an integer variable named "num" and a function named "fun".The "fun" 
// function in "Square" namespace, should return the square of an integer passed as an argument while the "fun" function in "Cube" namespace, should 
// return the cube of an integer passed as an argument.In the main function, set the integer variables "num" of both the namespaces with different 
// values.Then, compute and print the cube of the integer variable "num" of the "Square" namespace using the "fun" function of the "Cube" namespace 
// and the square of the integer variable "num" of the "Cube" namespace using the "fun" function of the "Square" namespace.

#include <iostream>
                                                                                                                                                                                                                                                                                                                                                                                                                                                           using namespace std;

// Define namespace Square
namespace Square
{
    int num;
    int fun(int x)
    {
        return x * x;
    }
}

// Define namespace Cube
namespace Cube
{
    int num;
    int fun(int x)
    {
        return x * x * x;
    }
}

int main()
{
    // Set different values to each namespace's variable
    Square::num = 4;
    Cube::num = 5;

    // Compute cube of Square::num using Cube::fun()
    int cubeOfSquareNum = Cube::fun(Square::num);

    // Compute square of Cube::num using Square::fun()
    int squareOfCubeNum = Square::fun(Cube::num);

    // Output the results
    cout << "Cube of Square::num (i.e." << Square::num << ") = " << cubeOfSquareNum << endl;
    cout << "Square of Cube::num (i.e." << Cube::num << ") = " << squareOfCubeNum << endl;

    return 0;
}
