#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100

// Structure to store contact details
struct Contact {
    char name[50];
    char phone[15];
};

// Function to search for a contact by name
void searchContact(struct Contact contacts[], int n, char searchName[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(contacts[i].name, searchName) == 0) {
            printf("Contact found!\n");
            printf("Name: %s, Phone: %s\n", contacts[i].name, contacts[i].phone);
            return;
        }
    }
    printf("Contact not found.\n");
}

int main() {
    struct Contact contacts[MAX_CONTACTS];
    int n;
    
    // Input number of contacts
    printf("Enter number of contacts: ");
    scanf("%d", &n);
    
    // Input contact details
    for (int i = 0; i < n; i++) {
        printf("Enter name of contact %d: ", i + 1);
        scanf("%s", contacts[i].name);
        printf("Enter phone number of contact %d: ", i + 1);
        scanf("%s", contacts[i].phone);
    }

    char searchName[50];
    printf("Enter the name to search: ");
    scanf("%s", searchName);

    // Search for the contact
    searchContact(contacts, n, searchName);

    return 0;
}
