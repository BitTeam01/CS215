#include <ctime>
#include <iostream>
using namespace std;

int main()
{
	time_t current_time;

        // Stores time in current_time
	time(&current_time);
	cout << current_time << " seconds has passed since 00:00:00 GMT, Jan 1, 1970";

	return 0;
}
