#include <bits/stdc++.h>
using namespace std;
int totalParticipants;
int player1;
int player2;
int roundResult;
int participant[100001];

bool isMatching()
{
    if(player1%2 == 1 && player1+1 == player2) return true;
    else false;
}
bool isTotalOdd()
{
    if(totalParticipants%2==1)
        return true;
    else return false;

}
bool isPlayerNumOdd(int player)
{
    if(player%2 == 1) return true;
    else return false;
}
void calculateTotal() 
{
    if(isTotalOdd()) totalParticipants = totalParticipants/2 + 1;
    else totalParticipants /= 2;

    return;
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> totalParticipants >> player1 >> player2;
    if(player1 > player2)
        swap(player1, player2);
    
    participant[player1] = true;
    participant[player2] = true;
    
    roundResult = 1;
    while(!isMatching())
    {
        if(isPlayerNumOdd(player1))
        {
            player1 = player1/2 + 1;
        }
        else player1 /= 2;

        if(isPlayerNumOdd(player2))
        {
            player2 = player2/2 + 1;
        }
        else player2 /= 2;
        //cout << "*****round " << roundResult <<" result*****\n";
        //cout << "player1 : " << player1 << "   player2 : "<< player2 << "\n";
        
        calculateTotal();
        roundResult++;
    
    }

    cout << roundResult;

    
    
    
}
