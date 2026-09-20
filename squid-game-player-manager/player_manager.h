#ifndef PLAYER_MANAGER_H
#define PLAYER_MANAGER_H

#define MAX_PLAYERS 100
#define SCORES_COUNT 5

typedef struct
{
    int id;
    char name[50];
    int scores[SCORES_COUNT];
    char status[15];
} Player;

int loadPlayers(const char *filename, Player players[], int maxPlayers, int *count);
void displayAllPlayers(const Player players[], int n);
void displayPlayerDetails(const Player *player);
void displayAlivePlayers(const Player players[], int n);

int calculateTotal(const Player *player);
void updateStatus(Player players[], int n);
int findPlayerIndexById(const Player players[], int n, int searchId);
int calculateEliminatedPrize(const Player players[], int n);

#endif
