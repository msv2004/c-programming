#include <stdio.h>

struct book {
    char title[100];
    char author[100];
    int year;
};

int main() {
   
    struct book books[3];

   
    for (int i = 0; i < 3; i++) {
        printf("Enter title for book %d: ", i+1);
        fgets(books[i].title, 100, stdin);
        printf("Enter author for book %d: ", i+1);
        fgets(books[i].author, 100, stdin);
        printf("Enter year for book %d: ", i+1);
        scanf("%d", &books[i].year);
        getchar();
    }

    printf("\nBook Records:\n");
    for (int i = 0; i < 3; i++) {
        printf("Book %d:\n", i+1);
        printf("Title: %s", books[i].title);
        printf("Author: %s", books[i].author);
        printf("Year: %d\n", books[i].year);
    }

    return 0;
}
//OUTPUT:

Enter title for book 1: wings of fire(apj)
Enter author for book 1: APJ 
Enter year for book 1: 2004
  
Enter title for book 2: MSV
Enter author for book 2: MSV
Enter year for book 2: 2020
  
Enter title for book 3: SARIGAMA
Enter author for book 3: SINGU
Enter year for book 3: 2021
  
Book Records:
Book 1:
Title: wings of fire(apj)
Author: APJ 
Year: 2004
  
Book 2:
Title: MSV
Author: MSV
Year: 2020
  
Book 3:
Title: SARIGAMA
Author: SINGU
Year: 2021
