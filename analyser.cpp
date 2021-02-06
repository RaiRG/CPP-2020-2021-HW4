#include "analyser.h"
#include <set>
#include <utility>
#include <sstream>
#include <iostream>
#include <istream>
#include <iterator>
#include <algorithm>
Analyser::Analyser()
{
}

std::string Analyser::AnalyseName(const std::string& input) const
{
    std::set<char> allLetters;
    for (int i = 0; i < (int)input.size(); i++)
    {
        allLetters.insert(input[i]);
    }
    return allLetters.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!";
}

std::vector<std::string> Analyser::AnalyseErrors(int n) const
{
    std::vector<std::string> firstErrors;
    std::cout << "Enter first errors:" << std::endl;  // n

    for (int i = 0; i < n; i++)
    {
        std::string inp;
        std::cin >>inp;
        firstErrors.push_back(inp);
    }

    std::vector<std::string> secondErrors;
    std::cout << "Enter second errors:" << std::endl;  // n
    for (int i = 0; i < n-1; i++)
    {
        std::string inp;
        std::cin >> inp;
        secondErrors.push_back(inp);
    }

    std::vector<std::string> thirdErrors;
    std::cout <<"Enter third errors:" << std::endl;  // n
    for (int i = 0; i < n-2; i++)
    {
        std::string inp;
        std::cin >> inp;
        thirdErrors.push_back(inp);
    }


    std::sort(firstErrors.begin(), firstErrors.end());
    std::sort(thirdErrors.begin(), thirdErrors.end());

    std::vector<std::string> diff;
    std::set_difference(firstErrors.begin(), firstErrors.end(), thirdErrors.begin(), thirdErrors.end(),
        std::inserter(diff, diff.begin()));
    return diff;


}





