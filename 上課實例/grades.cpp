#include <iostream>
#include <iomanip>
using namespace std;

const int students = 10;
const int tests = 3;

void outputGrades( const int [][ tests ], int, int );
double average( const int [], int );

int main()
{
   int studentGrades[ students ][ tests ] =
      { { 87, 96, 70 },
        { 68, 87, 90 },
        { 94, 100, 90 },
        { 100, 81, 82 },
        { 83, 65, 85 },
        { 78, 87, 65 },
        { 85, 75, 83 },
        { 91, 94, 100 },
        { 76, 72, 84 },
        { 87, 93, 73 } };

   outputGrades( studentGrades, students, tests );

}

void outputGrades( const int grades[][ tests ], int pupils, int exams )
{
	cout << "            ";
	for(int test=0; test<exams; test++)
	{
		cout << "Test " << test+1 << "  ";
	}
	cout << endl;
	for(int student=0; student<pupils; student++)
	{
		cout << "Student " << setw(2) << student+1;
		for(int test=0; test<exams; test++)
		{
			cout << setw(8) << grades[student][test];
		}
		cout << endl;
	}
}
