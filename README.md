
# Hotel Management System

## Overview
The Hotel Management System is a simple C program designed for first-year programming students. It allows users to manage hotel room bookings by adding and retrieving booking information. The program is designed without file handling for simplicity, using an array to store booking details.

## Features
1. **Add Booking**:
   - Enter details like room number, guest name, number of days, and the amount paid.
   - Saves the booking in an in-memory array.
2. **View Bookings**:
   - Displays all current bookings with details.
3. **Exit**:
   - Ends the program gracefully.

## How to Run
1. **Prerequisites**:
   - A C compiler like GCC.
   - Basic knowledge of running programs from the terminal.

2. **Steps to Compile and Run**:
   - Open a terminal.
   - Navigate to the directory containing the `hotel_management.c` file.
   - Compile the program:
     ```bash
     gcc hotel_management.c -o hotel_management
     ```
   - Run the program:
     ```bash
     ./hotel_management
     ```

## Sample Usage

**Menu Example**:
```
Hotel Management System
1. Add Booking
2. View Bookings
3. Exit
Enter your choice: 1
```

**Adding a Booking**:
```
Enter room number: 101
Enter guest name: John Doe
Enter number of days: 3
Enter amount paid: 150.50
Booking added successfully!
```

**Viewing Bookings**:
```
Current Bookings:
--------------------------------------------------
Room Number     Guest Name      Days    Amount Paid
--------------------------------------------------
101             John Doe        3       150.50
```

---

## Program Details
### Code Structure
- **Main Function**:
  - Displays a menu for the user to interact with.
  - Handles user choices for adding or viewing bookings.
- **Functions**:
  - `addBooking`:
    - Collects booking details and adds them to the array.
  - `viewBookings`:
    - Displays all bookings stored in the array.

### Data Storage
- Uses an array of structures (`Booking`) to store details:
  ```c
  typedef struct {
      int roomNumber;
      char guestName[50];
      int numberOfDays;
      float amountPaid;
  } Booking;
  ```

### Limitations
- The program does not persist data between runs.
- Limited to managing 100 bookings (`MAX_ROOMS`).

## Enhancements for the Future
- Add file handling to save and retrieve bookings persistently.
- Include error checking for duplicate room numbers.
- Implement additional features like deleting or updating bookings.


## Author
Developed as an introductory project for programming students. A great way to learn the basics of structures, arrays, and simple menu-based programs in C.
