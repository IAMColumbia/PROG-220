#include <iostream>
#include <vector>
#include <set>

int main()
{

    int x[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    for(int i = 0; i <= 10; i++)
    {
       std::cout << x[i]  << std::endl;
    }

    std::vector<int> x2 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    x2.push_back(11);
    int y = x2.size();

    for(std::vector<int>::iterator it = x2.begin(); it != x2.end(); it++)
    {
        std::cout << *it << std::endl;
    }

    for(int x : x2)
    {
        std::cout << x << std::endl;
    }

    for(auto x : x2)
    {

    }

    std::set<int> s = { 1, 2, 3, 4, 5, 6, 7, 7 };
    for(auto b : s)
    {
        std::cout << b << std::endl;
    }
    return 0;

}
