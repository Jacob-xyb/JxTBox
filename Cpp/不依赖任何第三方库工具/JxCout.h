#pragma once
#include <iostream>
#include <vector>

std::ostream& operator<<(std::ostream& cout, std::vector<double>& v);
std::ostream& operator<<(std::ostream& cout, std::vector<std::vector<double>>& v);
