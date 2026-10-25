// Name: Andrew Savio
// CIS 5 - Week 9 Homework: Menu on the lab

#include <iostream>
using namespace std;

// Takes the scores array and its size; returns the average as a double. Does not print.
double average(const int a[], int n) {
    if (n == 0) return 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return static_cast<double>(sum) / n;
}

// Takes the scores array and its size; returns the largest score.
int high(const int a[], int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) max = a[i];
    }
    return max;
}

// Takes an average; prints it. Returns nothing.
void printSummary(double avg) {
    cout << "Average: " << avg << endl;
}

// Takes nothing; prints the menu choices. Returns nothing.
void printMenu() {
    cout << "1) Average  2) High  3) Quit" << endl;
}

int main() {
    const int N = 4;
    int scores[N] = {80, 90, 70, 100};
    int choice = 0;

    while (choice != 3) {
        printMenu();
        cout << "Choice: ";
        if (!(cin >> choice)) break;

        if (choice == 1) {
            double avg = average(scores, N);
            printSummary(avg);
        } else if (choice == 2) {
            int h = high(scores, N);
            cout << "High: " << h << endl;
        }
    }

    return 0;
}
