#include <iostream>
#include <chrono>
#include <cmath>

int main()
{
    //get the start time
    auto start = std :: chrono :: steady_clock ::now();

    /*run some code*/
    for(int i=0;i<pow(10,7);i++)
        std :: cout <<"";

    //get the end time
    auto end = std :: chrono ::steady_clock::now();
    //find the difference
    double elapsed_time_ns = double(std::chrono::duration_cast<std::chrono::nanoseconds>(end-start).count());

    /*output time*/
    std::cout<<"Elapsed time(s): "<<elapsed_time_ns/pow(10,9);
    std::cout << std :: endl;
    system("pause;");
    return 0;
}