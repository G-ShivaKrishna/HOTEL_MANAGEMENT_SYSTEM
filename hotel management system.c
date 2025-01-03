#include <stdio.h>
#include <string.h>

#define MAX_ROOMS 100

// Structure to store guest information
typedef struct {
    int roomNumber;
    char guestName[50];
    int numberOfDays;
    float amountPaid;
} Booking;

// Function prototypes
void addBooking(Booking bookings[], int *count);
void viewBookings(Booking bookings[], int count);

int main() {
    Booking bookings[MAX_ROOMS];
    int count = 0;
    int choice;

    while (1) {
        // Menu options
        printf("\nHotel Management System\n");
        printf("1. Add Booking\n");
        printf("2. View Bookings\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBooking(bookings, &count);
                break;
            case 2:
                viewBookings(bookings, count);
                break;
            case 3:
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

// Function to add a booking
void addBooking(Booking bookings[], int *count) {
    if (*count >= MAX_ROOMS) {
        printf("Sorry, no more rooms available.\n");
        return;
    }

    Booking newBooking;

    printf("Enter room number: ");
    scanf("%d", &newBooking.roomNumber);

    printf("Enter guest name: ");
    scanf(" %[^\n]", newBooking.guestName); // Using " %[^\n]" to allow spaces in names

    printf("Enter number of days: ");
    scanf("%d", &newBooking.numberOfDays);

    printf("Enter amount paid: ");
    scanf("%f", &newBooking.amountPaid);

    bookings[*count] = newBooking;
    (*count)++;

    printf("Booking added successfully!\n");
}

// Function to view all bookings
void viewBookings(Booking bookings[], int count) {
    if (count == 0) {
        printf("No bookings available.\n");
        return;
    }

    printf("\nCurrent Bookings:\n");
    printf("--------------------------------------------------\n");
    printf("Room Number\tGuest Name\tDays\tAmount Paid\n");
    printf("--------------------------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%d\t\t%s\t\t%d\t%.2f\n",
               bookings[i].roomNumber,
               bookings[i].guestName,
               bookings[i].numberOfDays,
               bookings[i].amountPaid);
    }
}
