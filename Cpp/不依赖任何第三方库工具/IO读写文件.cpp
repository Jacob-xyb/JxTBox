#include <fstream>
#include <sstream>
#include <vector>
#include "../JxTBox_Head.h"

void IO_Test();
void JxRead_txt(std::string& path);
void JxRead_txt(const std::string& path);



void IO_Test()
{
	std::cout << "This is a test function." << std::endl;
}

void JxRead_txt(std::string& path)
{
	if (path.find(".txt") == -1) { std::cout << "error:this file is not txt" << std::endl; return; }
	std::ifstream infile(path);
	if (!infile) { std::cout << "Unable to read file." << std::endl; return; }

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
	std::cout << col << std::endl;
	/*-- output --*/
	std::vector<std::vector<double>> res(row, std::vector<double>(col));
	for (int i = 0; i < row*col; i++)
	{
		if (&res[i][0] == &res[0][0] + i)
		{
			std::cout << "True" << std::endl;
		}
		else { std::cout << "False" << std::endl; }
		
	}


	std::cout << "引用调用" << std::endl;
}
void JxRead_txt(const std::string& path)
{
	std::cout << "直接调用" << std::endl;
}