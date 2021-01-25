#include <iostream>
#include <string>

int main() {
  double weight;
  int x;
  std::string planet = "";
  std::string league = "";
  
  std::cout << "What is your weight on Earth in kg?\n";
  std::cin >> weight;
  std::cout << "Your weight is " << weight << "kg.\n";

  if (weight <= 50)
  {
    league = "Featherweight";
  }
  else if (weight > 50 && weight <= 75)
  {
    league = "Lightweight";
  }
  else if (weight > 75 && weight <= 100)
  {
    league = "Middleweight";
  }
  else if (weight > 100 && weight <= 150)
  {
    league = "Heavyweight";
  }
  else
  {
    league = "Superheavyweight";
  }
  
  std::cout << "\nHere is a list of planets you can visit:\n1. Mercury \n2. Venus\n3. Mars\n4. Jupiter\n5. Saturn\n6. Uranus\n7. Neptune\n\n";

  std::cout << "Please enter the number of planet would you like to visit: \n";
  std::cin >> x;
  
  if (x == 1)
  {
    weight = weight * 0.38;
    planet = "Mercury";
  }
  else if (x == 2)
  {
    weight = weight * 0.91;
    planet = "Venus";
  }
  else if (x == 3)
  {
    weight = weight * 0.38;
    planet = "Mars";
  }
  else if (x == 4)
  {
    weight = weight * 2.34;
    planet = "Jupiter";
  }
  else if (x == 5)
  {
    weight = weight * 1.06;
    planet = "Saturn";
  }
  else if (x == 6)
  {
    weight = weight * 0.92;
    planet = "Uranus";
  }
  else if (x == 7)
  {
    weight = weight * 1.19;
    planet = "Neptune";
  }
  
  std::cout << "Your weight on planet " << planet << " is: " << weight << "kg. You will be fighting in the " << league << " league. Good luck!";
}