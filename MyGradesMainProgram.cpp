#include "MyGradesDT.hpp"
#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main ()
{
   MyGrades aG; // aG stands for all grades
   double gradeEntry = 0.0; // the grade entered by the user
   int userChoice; // menu choice entered by user
   int gradeAmount; // the number of grades to be entered
   double avgT; // average of tests
   double avgQ; // average of quiz grades
   double avgPg; //average of program grades

   cout << "Welcome to My Grades APP!" << endl << endl;

   do
    {
      cout << "Main Menu" << endl << endl;
      cout << "1. Set a Quiz Grade" << endl
           << "2. Set a Programming Assignment Grade" << endl
           << "3. Set a Test Grade" << endl
           << "4. Show all Quiz Grades" << endl
           << "5. Show all Programming Assignment Grades" << endl
           << "6. Show all Test Grades" << endl
           << "7. Show overall Grades" << endl
           << "9. Exit My Grader APP" << endl << endl;

      cout << "Enter your choice ---->";
      cin >> userChoice;
      cout << endl;

      try
       {
          if(!userChoice)
           {
            cout << "Invalid Entry"<< endl << endl;
            throw "Please enter a menu option (1-7 or 9 to exit)" ;
           }
       }
      catch (const char* msg)
       {
           cout << msg << endl << endl;
       }


   switch(userChoice)
      {
          case 1 :

              cout << "How many grades need to be entered? ";
              cin >> gradeAmount;
              while(!cin >> gradeAmount)
              {
                cin.clear();
                cin.ignore();
                cout << "Invalid Entry! Please enter the number of grades:\n";
                cin >> gradeAmount;
              }
              cout << endl << "Enter " << gradeAmount << " Quiz Grades: ";
              for(int i = 0; i < gradeAmount; i++)
              {
                 cin >> gradeEntry;
                 aG.setQuizGrade(gradeEntry);
              }

              cout << endl;
              break;

         case 2 :

              cout << "How many grades need to be entered? ";
              cin >> gradeAmount;
              while(!cin >> gradeAmount)
              {
                cin.clear();
                cin.ignore();
                cout << "Invalid Entry! Please enter the number of grades:\n";
                cin >> gradeAmount;
              }
              cout << endl << "Enter " << gradeAmount << " Programming Assignment Grades: ";
              for(int i = 0; i < gradeAmount; i++)
              {
                 cin >> gradeEntry;

                 aG.setPgGrade(gradeEntry);
              }
             cout << endl;
             break;

         case 3 :

              cout << "How many grades need to be entered? ";
              cin >> gradeAmount;
              while(!cin >> gradeAmount)
              {
                cin.clear();
                cin.ignore();
                cout << "Invalid Entry! Please enter the number of grades:\n";
                cin >> gradeAmount;
              }
              cout << endl << "Enter " << gradeAmount << " Test Grades: ";
              for(int i = 0; i < gradeAmount; i++)
              {
                 cin >> gradeEntry;

                 aG.setTestGrade(gradeEntry);
              }
             cout << endl;
             break;

         case 4 :
              aG.showQuizGrades(avgQ);
             break;

         case 5 :
              aG.showPgGrades(avgPg);
             break;

         case 6 :
              aG.showTestGrades(avgT);
             break;

         case 7 :
              aG.showQuizGrades(avgQ);
              aG.showPgGrades(avgPg);
              aG.showTestGrades(avgT);
              aG.showAllGrades(avgT, avgQ, avgPg);
             break;

         case 8 :
              cout << "Invalid Entry" << endl << endl;
             break;

         case 9 :

             cout << "Implemented by Ramsey Doner\n";
             break;

      }

    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    }while(userChoice != 9);

   return 0;
}
