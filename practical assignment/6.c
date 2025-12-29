// login Authentication System
#include <stdio.h>
#include <string.h>
int main() {
    char username[20], password[20];

    // Input username and password
    printf("Enter username: ");
    scanf("%s", &username);
    printf("Enter password: ");
    scanf("%s", &password);

    // Check if username and password match the predefined values
    if (strcmp(username, "admin") == 0 && strcmp(password, "1234") == 0) {
        printf("Login Successful\n");
    } 
    else {
        printf("Invalid Login \n");
    }
    return 0; 
}