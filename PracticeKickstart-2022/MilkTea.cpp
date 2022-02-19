#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::vector<std::string> buildPossibilities(std::vector<std::string> &OG)
{
    std::vector<std::string> building;

    for (std::string curr: OG)
    {
        std::string temp = "0";
        temp.append(curr);
        building.push_back(temp);

        temp = "1";
        temp.append(curr);
        building.push_back(temp);
    }

    return building;
}

std::vector<std::string> splitEntryWork(int &forbid, int &opt)
{
    std::vector<std::string> chances;
    chances.push_back("0");
    chances.push_back("1");

    for (int j = 1; j < opt; j++)
    {
        chances = buildPossibilities(chances);
    }

    std::string bannedOrder;

    for (int j = 0; j < forbid; j++)
    {
        std::cin >> bannedOrder;
        chances.erase(std::remove(chances.begin(), chances.end(), bannedOrder), chances.end());
    }

    return chances;
}

int getComplaints(std::string &target, std::vector<std::string> &orders)
{
    int complaints = 0, outer = orders.size(), inner = orders[0].size();   

    for (int i = 0; i < outer; i++)
    {
        for (int j = 0; j < inner; j++)
        {
            if (target[j] != orders[i][j])
            {
                complaints++;
            }
        }
    }

    return complaints;
}

int main()
{
    int testCases;
    std::cin >> testCases;

    for (int i = 1; i <= testCases; i++)
    {
        int friends, forbidden, options;
        std::cin >> friends >> forbidden >> options;

        std::vector<std::string> orders(friends);

        for (int j = 0; j < friends; j++)
        {
            std::cin >> orders[j];
        }

        std::vector<std::string> chances = splitEntryWork(forbidden, options);

        int answer, chanceSize = chances.size();
        for (int j = 0; j < chanceSize; j++)
        {
            int possibleAnswer = getComplaints(chances[j], orders);
            //std::cout << "#" << j << ": " << possibleAnswer << "\n";
            if (j == 0)
            {
                answer = possibleAnswer;
            }
            else
            {
                if (possibleAnswer < answer)
                {
                    answer = possibleAnswer;
                }
            }
        }

        std::cout << "Case #" << i << ": " << answer << std::endl;
    }
}