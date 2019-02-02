#include <iostream>
#include <vector>


class MyGrades
{
   private:
      std::vector <double> quizGrades;
      std::vector <double> pgGrades;
      std::vector <double> testGrades;
   public:
      MyGrades();
      void setQuizGrade(double gradeEntry);
      void setPgGrade (double gradeEntry);
      void setTestGrade (double gradeEntry);
      void showQuizGrades (double &avgQ);
      void showPgGrades (double &avgPg);
      void showTestGrades (double &avgT);
      void showAllGrades (double avgT, double avgQ, double avgPg);
};