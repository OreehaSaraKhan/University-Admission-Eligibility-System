#include <iostream>
#include <string>
using namespace std;

// University Admission System based on Intermediate Marks

// Function to check eligibility for admission
void checkAdmissionEligibility() {
    double interMarks, totalMarks;

    cout << "\nUniversity Admission System\n";
    cout << "Enter your Intermediate marks: ";
    cin >> interMarks;

    cout << "Enter total marks of Intermediate: ";
    cin >> totalMarks;

    double percentage = (interMarks / totalMarks) * 100;

    cout << "\nYour Percentage: " << percentage << "%\n";

    // Check eligibility criteria
    if (percentage >= 60) {
        cout << "Congratulations! You are eligible for admission.\n";
    } else {
        cout << "Sorry, you are not eligible for admission.\n";
    }
}

int main() {
    // Check admission eligibility
    checkAdmissionEligibility();

    return 0;
}
