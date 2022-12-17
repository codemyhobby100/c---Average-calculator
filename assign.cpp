#include <iostream>

using namespace std;

int main() {
  // Declare variables to store the sum and average
  int sum = 0;
  float average = 0;

  // Prompt the user to enter a number ten times
  for (int i = 0; i < 10; i++) {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    sum += num;
  }

  // Calculate the average of the numbers
  average = (float)sum / 10;

  // Display the sum and average
  cout << "Sum: " << sum << endl;
  cout << "Average: " << average << endl;

  // Declare a constant variable
  const int CONSTANT_VARIABLE = 5;

  // Print the constant variable and add it to the average
  cout << "Constant variable: " << CONSTANT_VARIABLE << endl;
  cout << "Total: " << average + CONSTANT_VARIABLE << endl;

  return 0;
}
