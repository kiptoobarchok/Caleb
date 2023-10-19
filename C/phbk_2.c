#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CONTACTS 100

struct Contact {
    char name[50];
    char phone[20];
};

struct Phonebook {
    struct Contact contacts[MAX_CONTACTS];
    int num_contacts;
};

void add_contact(struct Phonebook *pb, const char *name, const char *phone) {
    if (pb->num_contacts >= MAX_CONTACTS) {
        printf("Phonebook is full!\n");
        return;
    }
    struct Contact *c = &pb->contacts[pb->num_contacts];
    strncpy(c->name, name, sizeof(c->name) - 1);
    strncpy(c->phone, phone, sizeof(c->phone) - 1);
    pb->num_contacts++;
}

void print_phonebook(const struct Phonebook *pb) {
    printf("Phonebook:\n");
    for (int i = 0; i < pb->num_contacts; i++) {
        const struct Contact *c = &pb->contacts[i];
        printf("%s: %s\n", c->name, c->phone);
    }
}

int main() {
    struct Phonebook pb = {0};
    add_contact(&pb, "John Doe", "555-1234");
    add_contact(&pb, "Jane Smith", "555-5678");
    print_phonebook(&pb);
    return 0;
}
