#include <iostream>

int main() {
  double earth_weight = 0;
  int planet_number = 0;
  double next_weight = 0;
  /* ask the earth weight and store it in a variable*/
  std::cout << "what's your weight when you're on earth :\n";
  std::cin >> earth_weight;
  std::cout << "On wich planet do you plan to fight next ? (tip the planet number):\n 1 for Venus\n 2 for Mars\n 3 for jupiter\n 4 for saturn\n 5 for uranus\n 6 for Neptune\n";
  std::cin >> planet_number;
  /* conversion programme wich should store results in next_weight*/
  switch(planet_number){
    case 1:
      next_weight = earth_weight * 0.78;
      std::cout << "On Venus your weight will be " << next_weight << "\n";
      break;
    case 2:
      next_weight = earth_weight * 0.39;
      std::cout << "On Mars your weight will be " << next_weight << "\n";
      break;
    case 3:
      next_weight = earth_weight * 2.65;
      std::cout << "On Jupiter your weight will be " << next_weight << "\n";
      break;
    case 4:
      next_weight = earth_weight * 1.17;
      std::cout << "On Saturn your weight will be " << next_weight << "\n";
      break;
    case 5:
      next_weight = earth_weight * 1.05;
      std::cout << "On Uranus your weight will be " << next_weight << "\n";
      break;
     case 6:
      next_weight = earth_weight * 1.23;
      std::cout << "On Neptune your weight will be " << next_weight << "\n";
      break;
  }
}
