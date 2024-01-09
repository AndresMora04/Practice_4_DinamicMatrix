#include <iostream>

const int NUM_SUBJECTS = 4;
const int NUM_QUARTERS = 3;

using namespace std;

void readGrades(double grades[NUM_SUBJECTS][NUM_QUARTERS]) {
    for (int i = 0; i < NUM_SUBJECTS; ++i) {
        cout << "Enter grades for subject " << (char)('A' + i) << ":\n";
        for (int j = 0; j < NUM_QUARTERS; ++j) {
            cout << "Quarter " << j + 1 << ": ";
            cin >> grades[i][j];
        }
    }
}

void calculateAnnualAverages(const double grades[NUM_SUBJECTS][NUM_QUARTERS], double averages[NUM_SUBJECTS]) {
    for (int i = 0; i < NUM_SUBJECTS; ++i) {
        double sum = 0;
        for (int j = 0; j < NUM_QUARTERS; ++j) {
            sum += grades[i][j];
        }
        averages[i] = sum / NUM_QUARTERS;
    }
}

void printResults(const double grades[NUM_SUBJECTS][NUM_QUARTERS], const double averages[NUM_SUBJECTS]) {
    cout << "Grades per subject:\n";
    for (int i = 0; i < NUM_SUBJECTS; ++i) {
        cout << "Subject " << (char)('A' + i) << ": ";
        for (int j = 0; j < NUM_QUARTERS; ++j) {
            cout << grades[i][j] << " ";
        }
        cout << '\n';
    }

    cout << "\nAnnual Averages:\n";
    for (int i = 0; i < NUM_SUBJECTS; ++i) {
        cout << "Subject " << (char)('A' + i) << ": " << averages[i] << '\n';
    }
}

int main() {
    double grades[NUM_SUBJECTS][NUM_QUARTERS];
    double averages[NUM_SUBJECTS];

    cout << "=== Grades Recording System ===\n";

    readGrades(grades);

    calculateAnnualAverages(grades, averages);

    printResults(grades, averages);

    return 0;
}