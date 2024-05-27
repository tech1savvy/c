#include <stdio.h>

// Defining an enumeration for Pokemon types
enum PokemonType {
	/*
		by defualt its elements index starts from 0 
		but we can change it by assinging a value to the elements
	*/
	NORMAL = 2, // 2
	FIRE, // 3
	WATER, // 4
	GRASS, // 5
	ELECTRIC // 6
	// notice that these are not strings rather data types
};

int main() {
	// we can declare variables of the enumeration type
	enum PokemonType pikachuType = ELECTRIC;
	/*
		similar to `int x = 6;` but we need enumeartion 
		to make variables and values more user frinedly and meaningful
	*/
	enum PokemonType bulbasaurType = GRASS;

	// Accessing (we use %d as the format specifier for enumeration elements)
	printf("Pikachu's type: %d\n", pikachuType);
	printf("Bulbasaur's type: %d\n", bulbasaurType);

	return 0;
}
