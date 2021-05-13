#include <iostream>
#include <string>

using namespace std;

int main () {
    string a;
    cout << a << endl;

   char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
   string str = "world", str1[2] = {"hello","world"};


   cout << str + " " +greeting << endl;
   cout <<str1[1][0];


   return 0;
}
