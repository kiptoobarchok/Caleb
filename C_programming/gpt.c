#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USERS 100

// Structure to store user information
typedef struct {
    char name[50];
    int age;
    char number[20];
    char email[50];
    char school[50];
} User;

// Structure to store the address book
typedef struct {
    User users[MAX_USERS];
    int num_users;
} AddressBook;

// Function prototypes
void add_user(AddressBook* book);
void remove_user(AddressBook* book);
void search_user(AddressBook* book);
void update_user(AddressBook* book);
void list_users(AddressBook* book);

int main() {
    AddressBook book = { .num_users = 0 };  // Initialize empty address book
    
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Add a user\n");
        printf("2. Remove a user\n");
        printf("3. Search for a user\n");
        printf("4. Update user information\n");
        printf("5. List all users\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                add_user(&book);
                break;
            case 2:
                remove_user(&book);
                break;
            case 3:
                search_user(&book);
                break;
            case 4:
                update_user(&book);
                break;
            case 5:
                list_users(&book);
                break;
            case 6:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 6);
    
    return 0;
}

void add_user(AddressBook* book) {
    if (book->num_users == MAX_USERS) {
        printf("Address book is full. Cannot add more users.\n");
        return;
    }
    
    User user;
    printf("Enter user name: ");
    scanf("%s", user.name);
    printf("Enter user age: ");
    scanf("%d", &user.age);
    printf("Enter user phone number: ");
    scanf("%s", user.number);
    printf("Enter user email: ");
    scanf("%s", user.email);
    printf("Enter user school: ");
    scanf("%s", user.school);
    
    book->users[book->num_users++] = user;
    
    printf("User added successfully.\n");
}

void remove_user(AddressBook* book) {
    char name[50];
    printf("Enter the name of the user to remove: ");
    scanf("%s", name);
    
    int index = -1;
    for (int i = 0; i < book->num_users; i++) {
        if (strcmp(book->users[i].name, name) == 0) {
            index = i;
            break;
        }
    }
    
    if (index == -1) {
        printf("User not found.\n");
        return;
    }
    
    // Shift all the elements after the index to the left
    for (int i = index; i < book->num_users - 1; i++) {
        book->users[i] = book->users[i+1];
    }
    book->num_users--;
    
    printf("User removed successfully.\n");
}

