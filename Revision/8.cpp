// Chapter 13, Programming Challenge 8: TestScores Class
#include <iostream>
using namespace std;

// TestScores class declaration
class TestScores
{
private:
   int score1;  // Test score #1
   int score2;  // Test score #2
   int score3;  // Test score #3
   
public:
   // Default constructor
   TestScores()
      { score1 = 0; score2 = 0; score3 = 0; }
      
   // Constructor
   TestScores(int s1, int s2, int s3)
      { score1 = s1; score2 = s2; score3 = s3; }
   
   // Mutator functions
   void setScore1(int s)
      { score1 = s; }

   void setScore2(int s)
      { score2 = s; }

   void setScore3(int s)
      { score3 = s; }

   // Accessor functions
   int getScore1() const
      { return score1; }

   int getScore2() const
      { return score2; }

   int getScore3() const
      { return score3; }
   
   // The getAverage function returns
   // the average of the test scores.
   double getAverage() const
      { return (score1 + score2 + score3) / 3.0; }
};

int main()
{
   // Variable to hold a numeric value
   int value;
   
   // Create a TestScores object.
   TestScores myScores;
   
   // Get three test scores.
   cout << "Enter the first test score: ";
   cin >> value;
   myScores.setScore1(value);

   cout << "Enter the second test score: ";
   cin >> value;
   myScores.setScore2(value);

   cout << "Enter the third test score: ";
   cin >> value;
   myScores.setScore3(value);
   
   // Display the scores.
   cout << "\nHere are your test scores:\n"
        << "\tTest Score #1: " << myScores.getScore1() << endl
        << "\tTest Score #2: " << myScores.getScore2() << endl
        << "\tTest Score #3: " << myScores.getScore3() << endl
        << "\tAverage: " << myScores.getAverage() << endl;

   return 0;
}