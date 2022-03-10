#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int score(std::string &s, std::vector<std::string> &orders)
{
    int complaints = 0;

    for (std::string bin: orders)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) != bin.at(i))
            {
                complaints++;
            }

        }
    }

    return complaints;
}

int getBest(std::vector<std::pair<int, std::string>> &opt, std::vector<std::string> &forbidden)
{
    for (std::pair<int, std::string> el: opt)
    {
        if (std::find(forbidden.begin(), forbidden.end(), el.second) 
            == forbidden.end())
        {
            /* std::cout << "\n Binary String: " << el.second << " Length: " << el.second.length() << "\n"; */
            return el.first;
        }
    }

    return -1;
}

int main()
{
    int testCases;
    std::cin >> testCases;

    for (int i = 1; i <= testCases; i++)
    {
        int teaOrders_amount, forbiddenOrders_amount, digits_amount;
        std::cin >> teaOrders_amount >> forbiddenOrders_amount >>
            digits_amount;

        std::vector<std::string> teaOrders(teaOrders_amount);
        for (int j = 0; j < teaOrders_amount; j++)
        {
            std::cin >> teaOrders[j];
        }

        std::vector<std::string> forbiddenOrders(forbiddenOrders_amount);
        for (int j = 0; j < forbiddenOrders_amount; j++)
        {
            std::cin >> forbiddenOrders[j];
        }

        std::vector<std::pair<int, std::string>> options;
        options.push_back({0, ""});
        //options.push_back({0, "1"});

        for (int j = 0; j < digits_amount; j++)
        {
            std::vector<std::pair<int, std::string>> temp(options.size() * 2);
            int it = 0;

            /* for (std::pair<int, std::string> eli: temp)
            {
                std::cout << "Iteration j :" << j << " Score: " << eli.first << " Binary:" <<
                    eli.second << "\n";
            } */
            
            for (std::pair<int, std::string> el: options)
            {
                std::string zero = el.second + "0";
                temp[it] = {score(zero, teaOrders), zero};

                it++;

                std::string one = el.second + "1";
                temp[it] = {score(one, teaOrders), one};
                it++;
            }

            std::sort(temp.begin(), temp.end());

            options.clear();

            for (int k = 0; k <= forbiddenOrders_amount && k < temp.size(); k++)
            {
                options.push_back(temp[k]);
            }
        }

        //std::cout << "///// Result: /////" << "\n";
        /* for (std::pair<int, std::string> el: options)
        {
            std::cout << "Score: " << el.first << " Binary: " << 
                el.second << std::endl;
        } */
    
        
        std::cout << "Case #" << i << ": " 
            << getBest(options, forbiddenOrders) << "\n";
    }
}