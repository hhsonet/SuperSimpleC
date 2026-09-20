#include <stdio.h>
#include <string.h>

#include "player_manager.h"

int loadPlayers(const char *filename, Player players[], int maxPlayers, int *count)
{
    FILE *fp = fopen(filename, "r");

    if (fp == NULL)
    {
        return 0;
    }

    if (fscanf(fp, "%d", count) != 1 || *count < 1 || *count > maxPlayers)
    {
        fclose(fp);
        return 0;
    }

    for (int i = 0; i < *count; i++)
    {
        if (fscanf(fp, "%d %49s", &players[i].id, players[i].name) != 2)
        {
            fclose(fp);
            return 0;
        }

        for (int j = 0; j < SCORES_COUNT; j++)
        {
            if (fscanf(fp, "%d", &players[i].scores[j]) != 1)
            {
                fclose(fp);
                return 0;
            }
        }

        strcpy(players[i].status, "Unknown");
    }

    fclose(fp);
    return 1;
}

void displayAllPlayers(const Player players[], int n)
{
    printf("ID\tName\t\t\tTotal Score\tStatus\n");
    printf("------------------------------------------------------------\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t%-20s\t%d\t\t%s\n",
               players[i].id,
               players[i].name,
               calculateTotal(&players[i]),
               players[i].status);
    }
}

void displayPlayerDetails(const Player *player)
{
    printf("Name: %s\n", player->name);
    printf("Total Score: %d\n", calculateTotal(player));
    printf("Status: %s\n", player->status);
}

void displayAlivePlayers(const Player players[], int n)
{
    printf("\nAlive players:\n");

    for (int i = 0; i < n; i++)
    {
        if (strcmp(players[i].status, "Alive") == 0)
        {
            printf("- (%d) %s\n", players[i].id, players[i].name);
        }
    }
}
