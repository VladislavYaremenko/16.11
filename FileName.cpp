#include <iostream>
using namespace std;

struct Student {
	char fullName[50];
	int age;
	double averageScore;
};

Student createStudent(const char* fullName, int age, double averageScore)
{
    Student student;
    int i = 0;
    while (fullName[i] != '\0' && i < 49) {
        student.fullName[i] = fullName[i];
        i++;
    }
    student.fullName[i] = '\0';
    student.age = age;
    student.averageScore = averageScore;
    return student;
}

void printStudent(const Student& student)
{
    cout << "Full name: " << student.fullName << ", Age: "
        << student.age << ", Average score: " << student.averageScore << endl;
}

void editAverageScore(Student& student, double newAverageScore)
{
    student.averageScore = newAverageScore;
}

int main()
{

    const int SIZE = 3;
    Student students[SIZE];
    students[0] = createStudent("Denis", 22, 11);
    students[1] = createStudent("Mark", 20, 10.5);
    students[2] = createStudent("Ivan", 23, 8.6);

    for (int i = 0; i < SIZE; i++)
    {
        printStudent(students[i]);
    }
    cout << "after GPA change" << endl;
    editAverageScore(students[1], 9.8);
    for (int i = 0; i < SIZE; i++)
    {
        printStudent(students[i]);
    }

	return 0;
}