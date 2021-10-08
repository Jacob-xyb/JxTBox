#include <fstream>
#include <sstream>
#include <vector>
#include "IOReadFile.h"

void IO_Test();
std::vector<std::vector<double>> JxRead_txt(std::string& path);
std::vector<std::vector<double>> JxRead_txt(const std::string& path);



void IO_Test()
{
	std::cout << "This is a test function." << std::endl;
}

std::vector<std::vector<double>> JxRead_txt(std::string& path)
{
	std::vector<std::vector<double>> res;
	if (path.find(".txt") == -1) { std::cout << "error:this file is not txt" << std::endl; return res; }
	std::ifstream infile(path);
	if (!infile) { std::cout << "Unable to read file." << std::endl; return res; }

	std::vector<double> values;
	std::string line;
	int row = 0, col = 0;
	while (getline(infile, line))
	{
		++row;
		std::istringstream ss(line);
		while (!ss.eof())		//如果没有到结尾
		{
			double temp;
			ss >> temp;
			values.push_back(temp);
		}
	}
	col = values.size() / row;

	if (col * row != values.size()) { std::cout << "error:data is inconformity." << std::endl; return res; }

	//std::cout << col << std::endl;
	/*-- output --*/
	res = std::vector<std::vector<double>>(row, std::vector<double>(col));
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			res[i][j] = values[i * col + j];
		}

	}
	return res;
}
std::vector<std::vector<double>> JxRead_txt(const std::string& path)
{
	std::vector<std::vector<double>> res;
	if (path.find(".txt") == -1) { std::cout << "error:this file is not txt" << std::endl; return res; }
	std::ifstream infile(path);
	if (!infile) { std::cout << "Unable to read file." << std::endl; return res; }

	std::vector<double> values;
	std::string line;
	int row = 0, col = 0;
	while (getline(infile, line))
	{
		++row;
		std::istringstream ss(line);
		while (!ss.eof())		//如果没有到结尾
		{
			double temp;
			ss >> temp;
			values.push_back(temp);
		}
	}
	col = values.size() / row;

	if (col * row != values.size()) { std::cout << "error:data is inconformity." << std::endl; return res; }

	//std::cout << col << std::endl;
	/*-- output --*/
	res = std::vector<std::vector<double>>(row, std::vector<double>(col));
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			res[i][j] = values[i * col + j];
		}

	}
	return res;
}