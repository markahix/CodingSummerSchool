#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

double multiply(double var1, double var2);
void print_this(string var1);

int main()
{
	double my_var1, my_var2;
	my_var1 = 10.5;
	my_var2 = 2.0;
	double answer;
	cout << "The values are " << my_var1 << " and " << my_var2 << endl;
	answer = multiply(my_var1,my_var2);
	cout << "The result is " << answer << endl;
	cout << "The values are " << my_var1 << " and " << my_var2 << endl;
	print_this("random string");
	return 0;
}

double multiply(double var1, double var2)
{
	double answer;
	answer = var1*var2;
	cout << "changing var1 to something else" << endl;
	var1 = 55.3;
	cout << "var1 is now " << var1 << endl;
	return answer;

}

void print_this(string var1)
{
	cout << "Passed variable was: " << var1 << endl;
	// NOTE THE LACK OF RETURN HERE!
}
