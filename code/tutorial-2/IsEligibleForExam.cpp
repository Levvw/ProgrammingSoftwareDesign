#include <iostream>
using  namespace std;

int main ()
{
	cout << "Youn need 75% or more to pass" << endl;

	float held,attend;  // Variables Declaration
    char m;

		
    cout << "How many classes did u held?" << endl;    //Input Held Classes
	cin >> held;
 
	cout << "How many classes did u attend" << endl;    //Input Attended Classes
	cin >> attend;

  if((attend/held)*100 < 75)  //Condition
  {
	  cout << "Do u have a Medical Condition?" << endl;  
	  cin >> m;

	  switch (m)   //Asking whether the student has a medical condition or not
	  {
	  case 'Y':
		 cout <<  "Pass + alf salama"<< endl;
	  break;

	  case 'N':
		  cout << "You dont pass" << endl;
	  break;
	  
     default:
	cout << " please enter Y for yes and N for No "<< endl;
	break;
	  }
  
  }
  else 
  {
  cout << "You pass nigga";
  }

	system("pause");
	return 0;
}
