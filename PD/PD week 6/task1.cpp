#include <iostream>
#include <string>
using namespace std;
string activity(string temperature, string humidity);
main()
{
  string temperature, humidity, work;
  while (true)
  {
    cout << "Enter the temperature (warm or cold) : ";
    cin >> temperature;
    cout << "Enter the humidity  (dry or humid ) : ";
    cin >> humidity;
    work = activity(temperature, humidity);
    cout << work << endl
         << endl;
  }
}

string activity(string temperature, string humidity)
{
  string result;
  if (temperature == "warm" && humidity == "dry")
  {
    result = "Play tennis";
  }
  else if (temperature == "warm" && humidity == "humid")
  {
    result = "swim";
  }
  else if (temperature == "cold" && humidity == "humid")
  {
    result = "Watch tv";
  }
  else if (temperature == "warm" && humidity == "dry")
  {
    result = "Play basketball";
  }
  else
  {
    result = "Not valid";
  }
  return result;
}