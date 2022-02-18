#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::vector<std::string> buildPossibilities(std::vector<std::string> OG)
{
    std::vector<std::string> building;
    
    for (int i = 0; i < OG.size(); i++)
    {
        std::string temp = "0";
        temp.append(OG[i]);
        building.push_back(temp);

        temp = "1";
        temp.append(OG[i]);
        building.push_back(temp);
    }

    return building;
}

int getComplaints(std::string target, std::vector<std::string> orders)
{
    int complaints;

    for (int i = 0; i < orders.size(); i++)
    {
        for (int j = 0; j < orders[i].size(); j++)
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

        std::vector<std::string> bannedOnes(forbidden);

        for (int j = 0; j < forbidden; j++)
        {
            std::cin >> bannedOnes[j];
        }

        std::vector<std::string> chances;
        chances.push_back("0");
        chances.push_back("1");

        for (int j = 1; j < options; j++)
        {
            chances = buildPossibilities(chances);
        }

        for (int j = 0; j < bannedOnes.size(); j++)
        {
            chances.erase(std::remove(chances.begin(), chances.end(), bannedOnes[j]), chances.end());
        }

        /* IT SEEMS "1111" NOT DELETED CORRECTLY 
        std::cout << "/////////" << "\n";
        for (std::string x: chances)
        {
            std::cout << x << "\n";
        }

        return 0;*/

        std::vector<int> answers;
        for (int j = 0; j < chances.size(); j++)
        {
            answers.push_back(getComplaints(chances[j], orders));
        }

        std::cout << "Case #" << i << ": " << *std::min_element(answers.begin(), answers.end()) << std::endl;
        /*std::cout << "{";
        for (std::string luck: chances)
        {
            std::cout << "'" << luck << "',";
        }
        std::cout << "}";

        std::cout << "{";

        for (std::string x : orders)
        {
            std::cout << "'" << x << "', ";
        }

        std::cout << "}";

        std::cout << "\n{";

        for (std::string x : bannedOnes)
        {
            std::cout << "'" << x << "', ";
        }

        std::cout << "}";*/

    }
}