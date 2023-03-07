#include "Student.h"
#include <string.h>
#include <stdio.h>
#include "Student.h"
#include <string.h>

void Student::setName(const char* name) {
    strcpy_s(this->name, 20, name);
}

char* Student::getName()
{
    return this->name;
}

void Student::setMathGrade(float grade)
{
    mathGrade = grade;
}

float Student::getMathGrade()
{
    return mathGrade;
}

void Student::setEnglishGrade(float grade)
{
    englishGrade = grade;
}

float Student::getEnglishGrade() {
    return englishGrade;
}

void Student::setHistoryGrade(float grade)
{
    historyGrade = grade;
}

float Student::getHistoryGrade()
{
    return historyGrade;
}

float Student::getAverageGrade()
{
    return (mathGrade + englishGrade + historyGrade) / 3.0f;
}




