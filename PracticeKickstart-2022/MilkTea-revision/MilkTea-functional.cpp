#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int score(std::string &s, std::vector<std::string> &orders)
{
    int complaints = 0;

    for (std::string el: orders)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != el[i])
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
        options.push_back({0, "0"});
        options.push_back({0, "1"});

        for (int j = 1; j < digits_amount; j++)
        {
            std::vector<std::pair<int, std::string>> temp(options.size() * 2);
            for (std::pair<int, std::string> el: options)
            {
                std::string zero = el.second.append("0");
                temp.push_back({score(zero, teaOrders), zero});

                std::string one = el.second.append("1");
                temp.push_back({score(zero, teaOrders), one});
            }

            
            if (temp.size() > forbiddenOrders_amount + 1)
            {
                std::sort(temp.begin(), temp.end());
                options.clear();

                for (int k = 0; k <= forbiddenOrders_amount; k++)
                {
                    options.push_back(temp[k]);
                }
            }
            else 
            {
                options = temp;
            }
        }

        std::cout << "Case #" << i << ": " 
            << getBest(options, forbiddenOrders) << "\n";
    }
}