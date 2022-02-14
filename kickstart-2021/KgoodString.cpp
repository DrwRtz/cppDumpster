#include <iostream>
#include <string>

int checkGoodness(int length, std::string s)
{
    int score = 0;

    for (int i = 0; i < length / 2; i++) 
    {
        if (s[i] != s[length - (i + 1)])
        {
            score++;
        }
    }

    return score;
}

void solveCase(int caseNum)
{
    int n, k;
    std::string s;
    std::cin >> n >> k >> s;

    int currentGoodness = checkGoodness(n, s);
    int minOperations = 0;

    if (currentGoodness < k)
    {
        for (int i = 0; i < n / 2; n++)
        {
            if (s[i] == s[n - (i + 1)])
            {
                currentGoodness++;
                minOperations++;
            }

            if (currentGoodness == k)
            {
                break;
            }
        }
        //minOperations = k - currentGoodness;
    }
    else if (currentGoodness > k)
    {
        for (int i = 0; i < n / 2; n++)
        {
            if (s[i] != s[n - (i + 1)])
            {
                currentGoodness--;
                minOperations++;
            }

            if (currentGoodness == k)
            {
                break;
            }
        }
        //minOperations = currentGoodness - k;
    }

    std::cout << "Case #" << caseNum << ": " << minOperations << "\n";
}

int main()
{
    int testCases;
    std::cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        solveCase(i + 1);
    }
}