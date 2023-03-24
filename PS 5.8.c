#include <stdio.h>

struct Address {
  char street[50];
  char city[50];
  char state[50];
};

struct Person {
  char name[50];
  int age;
  struct Address address;
};

int main() {
 struct Person person1;

  strcpy(person1.name, "John Doe");
  person1.age = 30;
  strcpy(person1.address.street, "123 Main St");
  strcpy(person1.address.city, "Anytown");
  strcpy(person1.address.state, "CA");

  printf("Name: %s\n", person1.name);
  printf("Age: %d\n", person1.age);
  printf("Address: %s, %s, %s\n", person1.address.street, person1.address.city, person1.address.state);

  return 0;
}

output:
Name: John Doe
Age: 30
Address: 123 Main St, Anytown, CA
