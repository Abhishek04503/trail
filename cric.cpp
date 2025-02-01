#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
   vector<string> msg {"KIT2025"};

   for (const string& word : msg)
   {
      cout << word << " ";
   }
   cout << endl;
}
