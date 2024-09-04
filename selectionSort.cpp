/* Q5 – Selection Sort

@ AJ Enrique Arguello (9/02/24)

Big O = O(n^2)

*Objectives:
  Selection Sort. What is the Big O(n)? What other kind of Sorts are there?

  Create a Selection sort to sort 7 numbers

  Create a Flowchart
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> numbers;

void selectionSort(vector<int> &numbers);
void vectorPrint(const vector<int> &numbers);

int main() {
  int userInput;

  cout << "Enter 7 Numbers:\n";
  for (int i = 0; i < 7; i ++) {
    cin >> userInput;
    numbers.push_back(userInput);
  }

  selectionSort(numbers);

  cout << "\nSorted numbers: ";
  vectorPrint(numbers);

  return 0;
}

void selectionSort(vector<int> &numbers) {
  int minIndex;
  int minValue;
  int temp;
  int n = numbers.size();
  
   for (int start = 0; start < n - 1; start++) {
        minIndex = start;

        // Find the index of the minimum element
        for (int index = start + 1; index < n; index++) {
            if (numbers[index] < numbers[minIndex]) {
                minIndex = index;
            }
        }

        // Swap the found minimum element with the first element
        if (minIndex != start) {
            temp = numbers[minIndex];
            numbers[minIndex] = numbers[start];
            numbers[start] = temp;
        }
    }
}

void vectorPrint(const vector<int> &numbers) {
   for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
}

