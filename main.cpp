//Language: C++

#include <iostream>
#include <vector>

int main() {

  double total = 0.0;

  std::vector<double> groceryprice;

  //List of prices of items
  groceryprice.push_back(5.98);
  groceryprice.push_back(3.68);
  groceryprice.push_back(2.77);
  groceryprice.push_back(1.77);

  std::vector<std::string> groceryitem;

  //List of names of items
  groceryitem.push_back("Cheddar chesse");
  groceryitem.push_back("Eggs");
  groceryitem.push_back("Salad");
  groceryitem.push_back("Bread");

  //Calculation of total cost
  for (int i = 0; i < groceryprice.size(); i++) {

  total = total + groceryprice[i];

}
  std::cout << groceryitem[0] << " = $" << groceryprice[0] << "\n";
  std::cout << groceryitem[1] << " = $" << groceryprice[1] << "\n";
  std::cout << groceryitem[2] << " = $" << groceryprice[2] << "\n";
  std::cout << groceryitem[3] << " = $" << groceryprice[3] << "\n";
  std::cout << "\n";
  std::cout << "Total: $" << total << " is your total amount.\n";
}
