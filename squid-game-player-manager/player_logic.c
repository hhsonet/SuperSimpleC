#include <string.h>

#include "player_manager.h"

int calculateTotal(const Player *player)
{
    int sum = 0;

    for (int i = 0; i < SCORES_COUNT; i++)
    {
        sum += player->scores[i];
    }

    return sum;
}

void updateStatus(Player players[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (calculateTotal(&players[i]) >= 250)
        {
            strcpy(players[i].status, "Alive");
        }
        else
        {
            strcpy(players[i].status, "Eliminated");
        }
    }
}

int findPlayerIndexById(const Player players[], int n, int searchId)
{
    for (int i = 0; i < n; i++)
    {
        if (players[i].id == searchId)
        {
            return i;
        }
    }

    return -1;
}

int calculateEliminatedPrize(const Player players[], int n)
{
    int prize = 0;

    for (int i = 0; i < n; i++)
    {
        if (strcmp(players[i].status, "Eliminated") == 0)
        {
            prize += 50000;
        }
    }

    return prize;
}
