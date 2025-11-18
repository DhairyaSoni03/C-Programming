#include <stdio.h>
#include <string.h>

#define MAX_TEAMS 10

struct Coach {
    char coachName[50];
    int age;
    int experience;
};

struct Team {
    char teamName[50];
    char sportType[50];
    struct Coach coachInfo;
};

struct Team teams[MAX_TEAMS];
int teamCount = 0;

void addTeam() {
    if (teamCount >= MAX_TEAMS) {
        printf("Cannot add more teams. System is full.\n");
        return;
    }

    struct Team newTeam;

    while (getchar() != '\n');

    printf("Enter Team Name: ");
    scanf(" %[^\n]", newTeam.teamName);

    printf("Enter Sport Type: ");
    scanf(" %[^\n]", newTeam.sportType);

    printf("Enter Coach's Name: ");
    scanf(" %[^\n]", newTeam.coachInfo.coachName);

    printf("Enter Coach's Age: ");
    scanf("%d", &newTeam.coachInfo.age);

    printf("Enter Coach's Years of Experience: ");
    scanf("%d", &newTeam.coachInfo.experience);

    teams[teamCount] = newTeam;
    teamCount++;

    printf("Team '%s' added successfully.\n", newTeam.teamName);
}

void searchTeam() {
    char searchName[50];
    int found = 0;

    while (getchar() != '\n');

    printf("Enter Team Name to search: ");
    scanf(" %[^\n]", searchName);

    for (int i = 0; i < teamCount; i++) {
        if (strcmp(teams[i].teamName, searchName) == 0) {
            printf("\n--- Team Found ---\n");
            printf("Team Name: %s\n", teams[i].teamName);
            printf("Sport: %s\n", teams[i].sportType);
            printf("Coach: %s\n", teams[i].coachInfo.coachName);
            printf("Coach Age: %d\n", teams[i].coachInfo.age);
            printf("Coach Exp: %d years\n", teams[i].coachInfo.experience);
            printf("--------------------\n");
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Team '%s' not found.\n", searchName);
    }
}

void displayAllTeams() {
    if (teamCount == 0) {
        printf("No teams registered yet.\n");
        return;
    }

    printf("\n--- All Registered Teams ---\n");
    for (int i = 0; i < teamCount; i++) {
        printf("Team %d:\n", i + 1);
        printf("  Name: %s (%s)\n", teams[i].teamName, teams[i].sportType);
        printf("  Coach: %s (Age: %d, Exp: %d years)\n",
               teams[i].coachInfo.coachName,
               teams[i].coachInfo.age,
               teams[i].coachInfo.experience);
        printf("------------------------------\n");
    }
}

int main() {
    int choice = -1;

    do {
        printf("\nCHARUSAT Sports Management System\n");
        printf("1. Add New Team\n");
        printf("2. Search for a Team\n");
        printf("3. Display All Teams\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addTeam();
                break;
            case 2:
                searchTeam();
                break;
            case 3:
                displayAllTeams();
                break;
            case 0:
                printf("Exiting... Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);
printf("\n Name : Dhairya Soni \n ID : 25ce119");

    return 0;
}
