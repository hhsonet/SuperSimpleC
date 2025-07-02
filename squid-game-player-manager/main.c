#include <stdio.h>
#include <string.h>

#define MAX_PLAYERS 100

struct Player
{
    int id;
    char name[50];
    int scores[5];
    char status[15];
};

int calculateTotal(struct Player p)
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += p.scores[i];
    }
    return sum;
}

void updateStatus(struct Player players[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int total = calculateTotal(players[i]);
        if (total >= 250)
            strcpy(players[i].status, "Alive");
        else
            strcpy(players[i].status, "Eliminated");
    }
}

void displayAll(struct Player players[], int n)
{
    printf("ID\tName\t\t\tTotal Score\tStatus\n");
    printf("------------------------------------------------------------\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%-20s\t%d\t\t%s\n", players[i].id, players[i].name,
               calculateTotal(players[i]), players[i].status);
    }
}

void searchPlayer(struct Player players[], int n, int searchId)
{
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (players[i].id == searchId)
        {
            int total = calculateTotal(players[i]);
            printf("Name: %s\n", players[i].name);
            printf("Total Score: %d\n", total);
            printf("Status: %s\n", players[i].status);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Player with ID %d not found.\n", searchId);
    }
}

void displayPrizeAndAlive(struct Player players[], int n)
{
    int prize = 0;
    printf("\nAlive players:\n");
    for (int i = 0; i < n; i++)
    {
        if (strcmp(players[i].status, "Eliminated") == 0)
        {
            prize += 50000;
        }
        else if (strcmp(players[i].status, "Alive") == 0)
        {
            printf("- (%d) %s\n", players[i].id, players[i].name);
        }
    }
    printf("\nTotal prize money from eliminated players: %d units\n", prize);
}

int main()
{
    struct Player players[MAX_PLAYERS];
    int n, choice;
    FILE *fp;

    fp = fopen("players.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    fscanf(fp, "%d", &n);
    for (int i = 0; i < n; i++)
    {
        fscanf(fp, "%d %s", &players[i].id, players[i].name);
        for (int j = 0; j < 5; j++)
        {
            fscanf(fp, "%d", &players[i].scores[j]);
        }
        strcpy(players[i].status, "Unknown");
    }
    fclose(fp);

    do
    {
        printf("\n--- Squid Game, UIU ---\n");
        printf("1. Update Player Status Based on Total Score\n");
        printf("2. Search Player by ID\n");
        printf("3. Display All Players\n");
        printf("4. Display Total Prize Money and Alive Players\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            updateStatus(players, n);
            printf("Player statuses updated.\n");
            break;
        case 2:
        {
            int searchId;
            printf("Enter player ID to search: ");
            scanf("%d", &searchId);
            searchPlayer(players, n, searchId);
            break;
        }
        case 3:
            displayAll(players, n);
            break;
        case 4:
            displayPrizeAndAlive(players, n);
            break;
        case 5:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice! Please try again.\n");
        }

    }
    while (choice != 5);

    return 0;
}
