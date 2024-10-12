#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string courseName;
    int courseNumber;
    int courseCredit, totalGrade = 0.0;
    float courseGrade, totalCredit = 0.0;

    cout << "Enter Number of Courses: ";
    cin >> courseNumber;

    for (int i = 1; i <= courseNumber; i++)
    {
        cout << "\nEnter details for Course " << i << ":\n";
        cout << "Enter Course Name: ";
        cin >> courseName;
        cout << "Grade (on a scale of 0.0 to 10.0): ";
        cin >> courseGrade;
        cout << "Credits: ";
        cin >> courseCredit;

        totalGrade += courseGrade * courseCredit;
        totalCredit += courseCredit;
    }
    
    float CGPA = totalGrade / totalCredit;

        cout << "\nTotal Credits: " << totalCredit << endl;
        cout << "CGPA: " << fixed << setprecision(2) << CGPA << endl;

        return 0;
}