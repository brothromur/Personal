#include <iostream>
#include <map>
#include <string>

using namespace std;

map <string, float> GradeToPoints;

void GradeToPoint() 
{
    GradeToPoints["A"] = 4.0;
    GradeToPoints["A-"] = 3.7;
    GradeToPoints["B+"] = 3.3;
    GradeToPoints["B"] = 3.0;
    GradeToPoints["B-"] = 2.7;
    GradeToPoints["C+"] = 2.3;
    GradeToPoints["C"] = 2.0;
    GradeToPoints["C-"] = 1.7;
    GradeToPoints["D+"] = 1.3;
    GradeToPoints["D"] = 1.0;
    GradeToPoints["F"] = 0.0;
}


int main()
{
    GradeToPoint();

    int CourseNum;
    cout << "How many courses do you have? ";
    cin >> CourseNum;

    int x = 0;
    float TotalGradePoints = 0;
    float TotalCreditHours = 0;
    string course;

    for(int i = 0; i < CourseNum; i++)
    {
        string grade;
        int CreditHours; 

        cout << "Course: ";
        cin >> course;
        cout << "Grade: ";
        cin >> grade;

        cout << "Credit Hours: ";
        cin >> CreditHours; 

        x = CreditHours * GradeToPoints[grade];
        TotalCreditHours = TotalCreditHours + CreditHours;
        TotalGradePoints = TotalGradePoints + x;
    }
    
    if (TotalCreditHours == 0) 
    {
        cout << "Error: Total credit hours cannot be zero.\n";
    } 
    else 
    {
        cout << "Your GPA is: " << TotalGradePoints / TotalCreditHours << endl;
    }
}
