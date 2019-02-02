#include "MyGradesDT.hpp"
#include <iostream>
#include <vector>

using namespace std;

MyGrades::MyGrades()
{
   quizGrades.clear();
   pgGrades.clear();
   testGrades.clear();
}
void MyGrades::setQuizGrade(double gradeEntry)
{
   quizGrades.push_back(gradeEntry);
}

void MyGrades::setPgGrade(double gradeEntry)
{
   pgGrades.push_back(gradeEntry);
}

void MyGrades::setTestGrade(double gradeEntry)
{
   testGrades.push_back(gradeEntry);
}
void MyGrades::showQuizGrades(double &avgQ)
{
   int size1 = quizGrades.size(); //size of vector
   double sum = 0; //sum of all grades
   int counter = 0; //counts number of grades
   avgQ = 0; //holds the average of the grades


    if (size1==0)
   {
       cout << "No Quiz Grades have been entered." << endl;
   }
   else
   {
       cout << "Your Quiz Grades are: " << endl;
   }


   for(int i=0; i < size1; i++)
    {
       if (size1 != 0)
        {
            cout << quizGrades[i] << " ";
            sum += quizGrades[i];
            counter++;
        }
    }


   if (size1 != 0)
    {
       if(counter==1)
       {
           avgQ = sum;
       }
       else
       {
           avgQ = ((sum/counter));
       }

       cout << endl;
       cout << "Average Quiz Grade is: " << avgQ << " out of 10." << endl;
    }

   cout << endl;
}
void MyGrades::showPgGrades(double &avgPg)
{
   int size1 = pgGrades.size(); //size of vector
   double sum = 0; //sum of all grades
   int counter = 0; //counts number of grades
   avgPg = 0; //holds the average of the grades


   if (size1==0)
   {
       cout << "No Programming Assignment Grades have been entered." << endl;
   }
   else
   {
       cout << "Your Programming Assignment Grades are: " << endl;
   }


   for(int i=0; i < size1; i++)
   {
       if (size1 != 0)
        {
            cout <<pgGrades[i] << " ";
            sum += pgGrades[i];
            counter++;
        }
   }


   if (size1 != 0)
    {
       if(counter==1)
       {
           avgPg = sum;
       }
       else
       {
           avgPg = ((sum/counter)*2);
       }

       cout << endl;
       cout << "Average Programming Assignment Grade is: " << avgPg << " out of 20." << endl;
    }

   cout << endl;
}
void MyGrades::showTestGrades(double& avgT)
{
   int size1 = testGrades.size(); //size of vector
   double sum = 0; //sum of all grades
   int counter = 0; //counts number of grades
   avgT = 0; //holds the average of the grades

   if (size1==0)
   {
       cout << "No Test Grades have been entered." << endl;
   }
   else
   {
       cout << "Your Test Grades are: " << endl;
   }

   for(int i=0; i < size1; i++)
   {
       if(size1!=0)
       {
           cout << testGrades[i] << " ";
           sum += testGrades[i];
           counter++;
       }
   }

   if (size1 != 0)
    {
       if(counter==1)
       {
           avgT = sum;
       }
       else
       {
           avgT = ((sum/counter)*2);
       }

       cout << endl;
       cout << "Average Test Grade is: " << avgT << " out of 40." << endl;
    }

   cout << endl;
}
void MyGrades :: showAllGrades(double avgT, double avgQ, double avgPg)
{
   int outOf = 0; //hold the number that the overall average is out of
   double total = 0; //total of averages from the three sections
   double totalQ = 0; // quiz total
   double totalPg = 0; //program total
   double totalT = 0; //test total

   if(avgQ != 0)
   {
       totalQ = avgQ;
       outOf += 10;
       total += totalQ;
   }
   if(avgPg != 0)
   {
       totalPg = avgPg;
       outOf += 20;
       total +=totalPg;
   }
   if(avgT != 0)
   {
       totalT = avgT;
       outOf += 40;
       total += totalT;
   }

   cout << "Your over all average is: " << total << " out of " << outOf << endl
        << endl << endl;
}
