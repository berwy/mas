#include <iostream>
using namespace std;

int main() 
{
  int n, m, mas[1000]; 
 cout << "Input n (skaitļu skaits masīvā)" << endl;
 cin >> n; 


 cout << "Input n masīva elementus" << endl;

for (int i=0; i<n; i++) 
{
cin >> mas[i];
}



for (int i=0; i<n; i++) 
{
cout << mas[i] << "  ";
}

return 0;
}
