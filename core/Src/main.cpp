#include "helloworld.hpp"

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include <stdlib.h>
#include <stdlib.h>

using namespace std;

int main()
{

    HelloWorld world; // create object world of type helloworld
    world.say();      //say() is a public method of the helloworld object from which world inheritade

    string filename("../ress/score.txt");

    /* ofstream Prince_sFlux(filename.c_str());

 if (Prince_sFlux)
 {
    cout <<" it's working \n " << endl;

    printf("I am just testing stuf out bro \n"); //sucessfully tested C fonction in cpp prog xD

    Prince_sFlux <<" write a line \n or two ^^ "<< endl;}
 else
 {
    cout << "failureeee xD" << endl;
 }

 Prince_sFlux.close();
 

 ifstream Prince_sFlux(filename.c_str());

 string val; 
 for (int i =0; i<=1; i++) /beause I know I only have 2 line in the file 
 {
    getline(Prince_sFlux,val);
    cout << val << endl;
 } // Prince_sFlux >> val;

 Prince_sFlux.close();

 */

    fstream Prince_sFlux(filename.c_str());

    if (Prince_sFlux)
    {
        cout << " it's working \n " << endl;

        Prince_sFlux << " write a line \n or two ^^  \n add another ... just to see xD" << endl;

        
    }
    else
    {
        cout << "failureeee xD" << endl;
    }
    //Prince_sFlux.close();
    //Prince_sFlux(filename.c_str());
    string val_of_line;

    if (Prince_sFlux)
    {
        cout << " I am trying to read this damn file ..  \n " << endl;

        int position = Prince_sFlux.tellg();
        cout << "position du curseur " << position  << "\n" << endl;

        Prince_sFlux.seekg(ios::beg);
        
        position = Prince_sFlux.tellg();    
        cout << "position du curseur " << position << "\n" << endl;
        
        while (getline(Prince_sFlux, val_of_line))
        {
            cout << val_of_line << endl;
        }
        Prince_sFlux.close();
    }
    else
    {
        cout << "failureeee xD" << endl;
    }

    return 0;
}
// https://prod.liveshare.vsengsaas.visualstudio.com/join?4C3DFB5C16BF1216938683A54B1BE5AACB03