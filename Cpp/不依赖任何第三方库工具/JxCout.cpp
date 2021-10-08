#include "JxCout.h"

std::ostream& operator<<(std::ostream& cout, std::vector<double>& v)
{
    for (std::vector<double>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << std::endl;
	return cout;	//连式编程
}

std::ostream& operator<<(std::ostream& cout, std::vector<std::vector<double>>& v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (std::vector<double>::iterator it = v[i].begin(); it != v[i].end(); it++)
        {
            cout << *it << " ";
        }
        cout << std::endl;
    }
    return cout;	//连式编程
}