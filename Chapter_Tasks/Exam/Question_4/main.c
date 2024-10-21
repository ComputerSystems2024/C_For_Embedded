#include <stdio.h>

// Struct representing a player with health, strength, and agility attributes
typedef struct {
  int health;
  int strength;
  int agility;
} Player;

#define MAX_PLAYERS 2  // Maximum number of players

// Array to hold player data
// Player players[MAX_PLAYERS];
Player players[3];
// Function that updates player's statistics based on interaction with the
// environment (e.g., picking up an item)
void updateStats(Player* player, int item) {
  switch (item) {
    case 1:  // Health potion
      player->health += 10;
      break;
    case 2:  // Strength potion
      player->strength += 5;
      break;
    case 3:  // Agility potion
      player->agility += 7;
      break;
    default:
      printf("Unknown item!\n");
  }
}

// Function that displays a player's current stats
void displayStats(const char* playerName, Player player) {
  printf("%s's Stats:\n", playerName);
  printf("Health: %d\n", player.health);
  printf("Strength: %d\n", player.strength);
  printf("Agility: %d\n", player.agility);
  printf("\n");
}

int main() {
  // Initialize two players with different stats

  
  Player player0 = {100, 50, 30};
  Player player1 = {90, 55, 35};
  Player player2 = {1, 2, 3};

  // Store the players in the players array
  players[0] = player0;
  players[1] = player1;

  players[2] = player2;

  // Player 1 picks up a health potion
  updateStats(&players[0], 1);
  printf("Player 1 picked up a health potion!\n\n");
  displayStats("Player 1", players[0]);

  // Player 2 picks up a strength potion
  updateStats(&players[1], 2);
  printf("Player 2 picked up a strength potion!\n\n");
  displayStats("Player 2", players[1]);

  // Player 2 picks up a strength potion
  updateStats(&players[2], 3);
  printf("Player 2 picked up a strength potion!\n\n");
  displayStats("Player 2", players[2]);

  return 0;
}