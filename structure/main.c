#include <stdio.h>

// Structures is an user defined data type that is used to combine data items of
// different types. (collection of hetrogenous data)

struct Pokemon {
  int pokedex_id; // structure variables or members
  char type[20];
} Charizard; // 1st way of declaring a structure object

int main(void) {
  struct Pokemon Pikachu; // 2nd way of declaring a structure object

  // Assinging values to the structure variables
  // All at once
  struct Pokemon Charizard = {3, "Fire"};
  // Separtely (used when takinng input from user)
  printf("Enter Pokedex ID of Pikachu: ");
  scanf("%d", &Pikachu.pokedex_id);
  printf("Enter type of Pikachu: ");
  scanf("%s", Pikachu.type);

  // Accessing the structure variables
  printf("\nPokedex ID of Pikachu: %d\n", Pikachu.pokedex_id);
  printf("Type of Pikachu: %s\n", Pikachu.type);
  printf("\nPokedex ID of Charizard: %d\n", Charizard.pokedex_id);
  printf("Type of Charizard: %s\n", Charizard.type);
  return 0;
}