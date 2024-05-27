#include <stdio.h>

// defining an union
union Data {
  int intValue;
  float floatValue;
  char stringValue[20];
};

int main() {
  union Data myData;

  // Assign values
  myData.intValue = 42;
  printf("Integer value: %d\n", myData.intValue);

  myData.floatValue = 3.14;
  printf("Float value: %f\n", myData.floatValue);
  // printf("Integer value: %d\n", myData.intValue);
  // >> will give garbage value as union can only store one variable at a time
  // therefore we print the values, right after taking an input

  strcpy(myData.stringValue, "Hello, Data 1!");
  printf("String value: %s\n", myData.stringValue);

  // Size of the union will be the size of the largest member
  printf("Size of the union: %d bytes = max of(%u , %u , %u) \n",
         sizeof(union Data), sizeof(myData.floatValue),
         sizeof(myData.floatValue), sizeof(myData.stringValue));

  return 0;
}

// difference between structure and union, very important
/*
        *Structures*

        - Memory Allocation:
                In a structure, each member has its own memory space,
                and the total size of the structure is the sum     of the sizes
   of its individual members.
        - Usage:
                Structures are used when you need all the members
   simultaneously.

        *Unions*

        - Memory Allocation:
                In a union, all members share the same memory space.
                The size of the union is determined by the largest member.
        - Usage:
                Unions are useful when you only need one member at a time.
*/