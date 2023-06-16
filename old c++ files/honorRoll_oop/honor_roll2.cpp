/*Name: Humna Sultan
*6 November 2019
*Honor Roll Coder/Tester 1 - OBJECT ORIENTED
Requirements:
1. Student must have a 90 average, at least 5 classes, and no
infractions for eligibility for honor roll
2. Maximum of 8 courses/Minimum of 1 Course
3. Input includes name, classes, and grades
4. Class name is limited to 20 characters
5. Grades are integers - Maximum 100/Minimum 0
6. Average is rounded to the nearest integer
7. Discipline issue is randomly assigned
8. Random assignment is truly random and properly coded

9. Inappropriate values entered results in the user being able
to re-input info
10. Values that are not appropriate to a certain variable type
produce no errors - user is able to re-enter info
11. All infomation is printed after input is taken
12. Disciplinary status and Average are printed
13. Output is neat, organized, formatted correctly
14. All outputs are included
15. Procedural and Object Oriented are both included and
submitted
16. Comments are descriptive
17. Header includes name, date, lab name, requirements
18. Invalid input messages are included if input is not
appropriate
*/
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <stdio.h>
#include <time.h>
#include "GetData2.h"
#include "honor_roll_class.h"
//includes
using namespace std;
//namespace
int main()
//main
{
	honor_roll_class h = honor_roll_class();
	//creates object of honor roll class
	h.name();
	//calls name function

	return 0;
	//return statement
}