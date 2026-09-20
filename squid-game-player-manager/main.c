#include <stdio.h>

#include "player_manager.h"

static void clearInputBuffer(void)
{
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
    {
    }
}

int main(void)
{
    Player players[MAX_PLAYERS];
    int playerCount;
    int choice;

    if (!loadPlayers("players.txt", players, MAX_PLAYERS, &playerCount))
    {
        printf("Error: Could not read or parse players.txt\n");
        return 1;
    }

    do
    {
        printf("\n--- Squid Game, UIU ---\n");
        printf("1. Update Player Status Based on Total Score\n");
        printf("2. Search Player by ID\n");
        printf("3. Display All Players\n");
        printf("4. Display Total Prize Money and Alive Players\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input. Please enter a number from 1 to 5.\n");
            clearInputBuffer();
            continue;
        }

        switch (choice)
        {
            case 1:
                updateStatus(players, playerCount);
                printf("Player statuses updated.\n");
                break;
            case 2:
            {
                int searchId;
                int index;

                printf("Enter player ID to search: ");
                if (scanf("%d", &searchId) != 1)
                {
                    printf("Invalid player ID input.\n");
                    clearInputBuffer();
                    break;
                }

                index = findPlayerIndexById(players, playerCount, searchId);
                if (index < 0)
                {
                    printf("Player with ID %d not found.\n", searchId);
                }
                else
                {
                    displayPlayerDetails(&players[index]);
                }
                break;
            }
            case 3:
                displayAllPlayers(players, playerCount);
                break;
            case 4:
                displayAlivePlayers(players, playerCount);
                printf("\nTotal prize money from eliminated players: %d units\n",
                       calculateEliminatedPrize(players, playerCount));
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
    } while (choice != 5);

    return 0;
}
