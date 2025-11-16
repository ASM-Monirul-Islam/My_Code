#include <bits/stdc++.h> // for setw
using namespace std;

// Function to get the day of week for 1st of a month
// 0 = Sunday, 1 = Monday, ..., 6 = Saturday
int dayOfWeek(int day, int month, int year) {
    if (month < 3) {
        month += 12;
        year--;
    }
    int k = year % 100;
    int j = year / 100;
    int h = (day + 13*(month + 1)/5 + k + k/4 + j/4 + 5*j) % 7;
    return (h + 6) % 7; // Adjust to 0=Sunday
}

// Function to check leap year
bool isLeap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to print calendar
void printCalendar(int month, int year) {
    string months[] = {"January", "February", "March", "April", "May", "June",
                       "July", "August", "September", "October", "November", "December"};
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (month == 2 && isLeap(year)) daysInMonth[1] = 29;

    cout << "     " << months[month-1] << " " << year << endl;
    cout << "Su Mo Tu We Th Fr Sa\n";

    int startDay = dayOfWeek(1, month, year);

    // Print spaces for the first week
    for (int i = 0; i < startDay; i++) cout << "   ";

    for (int day = 1; day <= daysInMonth[month-1]; day++) {
        cout << setw(2) << day << " ";
        if ((day + startDay) % 7 == 0) cout << "\n";
    }
    cout << endl;
}

int main() {
	string date, d, m, y;
    int day, month, year;
    cout << "Enter the date: (dd/mm/yyyy): ";
    cin>>date;
	stringstream ss(date);
	getline(ss,  d, '/');
	getline(ss,  m, '/');
	getline(ss,  y, '/');

	day=stoi(d);
	month=stoi(m);
	year=stoi(y);
	
    printCalendar(month, year);
    return 0;
}
