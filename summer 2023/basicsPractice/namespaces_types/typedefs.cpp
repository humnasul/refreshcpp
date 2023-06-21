// typedef = reseved keyword used to create an additonal name (alias) for another data type
// used to increase readability and therefore minimize errors

#include <iostream> 
#include <vector>

/* typedef std::vector<std::pair<std::string, int>> pairlist_t;
 you can create variables of this data type!
 "pairlist_t" is the name of the typedef - common naming convention is to put _t at the end for type
  *** "using" has now become more popular than using typedefs!
 */
typedef std::string text_t;
typedef int number_t;

using text2_t = std::string;
using number2_t = int;

int main() {
	// std::string firstName --> text_t firstName
	text_t firstName = "Coco";
	number_t age = 45;

	text2_t firstName2 = "Coco";
	number2_t age2 = 45;

	std::cout << firstName << '\n';
	std::cout << age << '\n';

	std::cout << firstName2 << '\n';
	std::cout << age2 << '\n';

	return 0;
}