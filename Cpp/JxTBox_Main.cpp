#include <iostream>
#include "JxTBox_Head.h"
#include "不依赖任何第三方库工具/IOReadFile.h"
#include "不依赖任何第三方库工具/JxCout.h"

void JxRead_txt_Test();


int main()
{
	JxRead_txt_Test();

	std::cout << "press [ENTER] to continue " << std::endl;
	std::cin.get();
	return 0;
}

void JxRead_txt_Test()
{
	std::string path = "D:/0.xyb/3.hacker/1.python_repository/git_repository/JxTBox/CommonData/data_x.txt";
	std::vector<std::vector<double>> data;
	data = JxRead_txt(path);
	std::cout << data << std::endl;
}