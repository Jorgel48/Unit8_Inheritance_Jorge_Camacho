// Jorge Camacho cosc 1437, Dr. T 
// 05-03-2020
#include <iostream>
#include <string>
using namespace std;

int main() {
  const int hoursPerClass = 3;
  const int monthsInSemester = 4;
  const int hoursTheFulltimeStudentTakes = 12;
  const int hoursTheParttimeStudentTakes = 9;
  const int hoursTheHalftimeStudentTakes = 6; 
  const int hoursInTheDegree = 120; 
  string schoolName; 
  double costPerCreditHour; 
  double bookCostsPerClass;
  double roomAndBoardCosts; 
  double foodCostsPerMonth; 
  double travelCostsPerMonth;
  cout << "What is the school name?: ";
  getline(cin, schoolName);
  cout << "What is the cost per credit hour?: ";
  cin >> costPerCreditHour;
  cout << "What is the book cost per class?: ";
  cin >> bookCostsPerClass;
  cout << "What is the room and board cost per semester?: ";
  cin >> roomAndBoardCosts;
  cout << "What is the food cost per month?: ";
  cin >> foodCostsPerMonth;
  cout << "What is the travel cost per month?: ";
  cin >> travelCostsPerMonth;
  double totalTuitionCost = hoursInTheDegree * costPerCreditHour;
  double totalBookCost = (hoursInTheDegree / hoursPerClass) * bookCostsPerClass;
  double totalFullRoomAndBoard = (hoursInTheDegree / hoursTheFulltimeStudentTakes) * roomAndBoardCosts;
  double totalPartRoomAndBoard = (hoursInTheDegree / hoursTheParttimeStudentTakes) * roomAndBoardCosts;
  double totalHalfRoomAndBoard = (hoursInTheDegree / hoursTheHalftimeStudentTakes) * roomAndBoardCosts;
  double totalFoodCostsFull = (hoursInTheDegree / hoursTheFulltimeStudentTakes * monthsInSemester) * foodCostsPerMonth;
  double totalFoodCostsPart = (hoursInTheDegree / hoursTheParttimeStudentTakes * monthsInSemester) * foodCostsPerMonth;
  double totalFoodCostsHalf = (hoursInTheDegree / hoursTheHalftimeStudentTakes * monthsInSemester) * foodCostsPerMonth;
  double totalTravelCostsFull = (hoursInTheDegree / hoursTheFulltimeStudentTakes * monthsInSemester) * travelCostsPerMonth;
  double totalTravelCostsPart = (hoursInTheDegree / hoursTheParttimeStudentTakes * monthsInSemester) * travelCostsPerMonth;
  double totalTravelCostsHalf = (hoursInTheDegree / hoursTheHalftimeStudentTakes * monthsInSemester) * travelCostsPerMonth;
  cout << "School: " << schoolName << endl;
  cout << "Total cost for full-time student: " << totalTuitionCost + totalBookCost + totalFullRoomAndBoard + totalFoodCostsFull + totalTravelCostsFull << endl;
  cout << "Total cost for part-time student: " << totalTuitionCost + totalBookCost + totalPartRoomAndBoard + totalFoodCostsPart + totalTravelCostsPart << endl;
  cout << "Total cost for half-time student: " << totalTuitionCost + totalBookCost + totalHalfRoomAndBoard + totalFoodCostsHalf + totalTravelCostsFull << endl;
  return 0;
}