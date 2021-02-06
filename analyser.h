#include <string>
#include <vector>
#ifndef ANALYSER_H
#define ANALYSER_H

class Analyser
{
public: Analyser();
      std::string AnalyseName(const std::string& input) const;
      std::vector<std::string> AnalyseErrors(const int numberOfErrors) const;
};

#endif  // ANALYSER_H
