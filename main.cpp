#include <iostream>
#include "analyser.h"
#include <string>
#include <algorithm>
#include <cstring>

void Task_1()
{
    std::cout << "Enter name: " << std::endl;
    std::string input;
    std::cin >> input;
    Analyser analyser = Analyser();
    std::string result = analyser.AnalyseName(input);
    std::cout << result << std::endl;
}


void Task_2()
{
    int n;
    std::cout << "Enter n: " <<std:: endl;
    std::cin >> n;

    Analyser analyser = Analyser();
    std::vector<std::string> result = analyser.AnalyseErrors(n);

    for (auto s : result)
    {
        std::cout << s << std::endl;
    }
}

void Task_3()
{
    std::cout << "Enter string: " << std::endl;
    std::string input;
    std::cin >> input;
    std::cout << input << std::endl;
    while (std::next_permutation(input.begin(), input.end()))
        std::cout << input << std::endl;
}

int main()
{
    std::cout << "Task #1: " << std::endl;
    Task_1();
    std::cout << "Task #2: " << std::endl;
    Task_2();
    std::cout << "Task #3" << std::endl;
    Task_3();
    return 0;
}
