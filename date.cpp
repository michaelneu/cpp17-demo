#include "boost/date_time/gregorian/gregorian.hpp"
#include <iostream>

using namespace std;
using namespace boost::gregorian;

int main(int argc, char* argv[]) {
  auto today = day_clock::local_day();

  cout << "today is " << today << endl;

  return EXIT_SUCCESS;
}
