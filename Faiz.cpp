//Name:AHMAD FAIZZUDDIN BIN FAKHRUL ANWAR
//MATRICS:23303878

#include <iostream>
#include <string>
using namespace std;


int main()
{
    string username;
    int password, truepassword = 4231, Options ;
    double Gadget[6][2],Accesories[9][2], Component[12][2];


        cout << "Please insert username and password";
        getline(cin,username);
        cin >> password;

        do
        {
            cout << " Your password is incorrect";
            return 1;
        }while(password != truepassword);
        
    cout <<"Welcome " << username << endl;
            return 0;
}


/*else
        {
            // the update stock function
           
            cout << "Please choose the categories that needed update stock:\n";
            cout << "1. Gadget\n";
            cout << "2. Accesories\n";
            cout << "3. Components\n";
            cin >> Options;
            if (Options == 1)
            {
                
            }
            


        }
*/