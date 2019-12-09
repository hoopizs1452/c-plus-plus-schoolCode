#include <iostream>
#include <iomanip>
using namespace std;

const int students = 10;
const int tests = 3;

void outputGrades( const int [][ tests ], int, int );
double average( const int [], int );
double average(const int setOfGrades[], const int);
int maximum(const int grades[][ tests ], int, int);
int minimum(const int grades[][ tests ], int, int);

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
   cout << "Highest of grades: " << maximum(studentGrades, students, tests) << endl;
   cout << "lowest of grades: " << minimum(studentGrades, students, tests) << endl;
}

int maximum(const int grades[][ tests ], int pupils, int exams)
{
	int max = grades[0][0];
	
	for(int student=0; student<pupils; student++)
	{
		for(int test=0; test<exams; test++)
		{
			if(grades[student][test]>max)
				max = grades[student][test];
		}
	}
	return max;
}

int minimum(const int grades[][ tests ], int pupils, int exams)
{
	int min = grades[0][0];
	
	for(int student=0; student<pupils; student++)
	{
		for(int test=0; test<exams; test++)
		{
			if(grades[student][test]<min)
				min = grades[student][test];
		}
	}
	return min;
}

double average(const int setOfGrades[], const int gradeCount)
{
	int total=0;
	
	for(int i=0; i<gradeCount; i++)
	{
		total += setOfGrades[i];
	}
	return static_cast<double>(total)/gradeCount;
}

void outputGrades( const int grades[][ tests ], int pupils, int exams )
{
	cout << "            ";
	for(int test=0; test<exams; test++)
	{
		cout << "Test " << test+1 << "  ";
	}
	cout << "Average";
	cout << endl;
	for(int student=0; student<pupils; student++)
	{
		cout << "Student " << setw(2) << student+1;
		for(int test=0; test<exams; test++)
		{
			cout << setw(8) << grades[student][test];
		}
		cout << setw(9) << setprecision(2) << fixed << average(grades[student], exams);
		cout << endl;
	}
}
