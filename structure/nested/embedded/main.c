// Nesting through Embedded Structures
#include <stdio.h>

// Declare the parent structure with embedded child structure
struct Pokedex {
		char pokemon_name[20];
		struct {
				int hp;
				int attack;
				int defense;
		} stats;
};

int main() {
		struct Pokedex kanto[100];

		// Assigning
		printf("Enter Name: ");
		scanf("%s", &kanto[0].pokemon_name);
		printf("Enter HP: ");
		scanf("%d", &kanto[0].stats.hp);
		printf("Enter Attack: ");
		scanf("%d", &kanto[0].stats.attack);
		printf("Enter Defense: ");
		scanf("%d", &kanto[0].stats.defense);

		// Accessing
		printf("%s's Stats:\n", kanto[0].pokemon_name);
		printf("HP: %d\n", kanto[0].stats.hp);
		printf("Attack: %d\n", kanto[0].stats.attack);
		printf("Defense: %d\n", kanto[0].stats.defense);

		return 0;
}
