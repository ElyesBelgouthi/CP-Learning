#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    map<char,int> cardScores;
    cardScores['2'] = 1;
    cardScores['3'] = 2;
    cardScores['4'] = 3;
    cardScores['5'] = 4;
    cardScores['6'] = 5;
    cardScores['7'] = 6;
    cardScores['8'] = 7;
    cardScores['9'] = 8;
    cardScores['T'] = 9;
    cardScores['J'] = 10;
    cardScores['Q'] = 11;
    cardScores['K'] = 12;
    cardScores['A'] = 13;
    cin >> n;
    for(int j=0; j<n; j++)
    {
        vector<char> player1, player2;
        std::string line;
        std::cin >> std::ws;
        std::getline(std::cin, line);
        for (char c : line)
        {
            if (c != ' ')
                player1.push_back(c);
        }
        std::cin >> std::ws;
        std::getline(std::cin, line);
        for (char c : line)
        {
            if (c != ' ')
                player2.push_back(c);
        }
        /*cout << "player1: ";

        for(int i=0; i<player1.size(); i++)
        {
            cout << player1[i] << " ";
        }
        cout << " " <<endl;
        cout << "player2: ";

        for(int i=0; i<player2.size(); i++)
        {
            cout << player2[i] << " ";
        }
        cout << " " <<endl;*/
        while(!player1.empty() && !player2.empty() && (player1 != player2))
        {
            if(cardScores[player1[0]] > cardScores[player2[0]])
            {
                player1.erase(player1.begin());
                player1.push_back(player2[0]);
                player2.erase(player2.begin());
            }
            else if (cardScores[player1[0]] < cardScores[player2[0]])
            {
                player2.erase(player2.begin());
                player2.push_back(player1[0]);
                player1.erase(player1.begin());
            } else
            {
                player2.erase(player2.begin());
                player2.push_back(player1[0]);
                player1.push_back(player1[0]);
                player1.erase(player1.begin());
            }
        }
        if(player1 == player2)
        {
            cout << "draw" << endl;
        } else if(player1.empty())
        {
            cout << "player 2" << endl;
        } else
        {
            cout << "player 1" << endl;
        }
    }
    return 0;

}
