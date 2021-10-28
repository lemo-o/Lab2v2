#include <iostream>
using namespace std;

//If I was smart, I would make these voids into one instead of typing them twice,
//If I was smarter, I would take the list that was given and parse it instead of typing it in manually.
void g(string placeholder){ //g for guess
    cout <<"My answer:"<< placeholder << endl;
}

void j(int jeffrey){ //j for jeffrey
    cout << jeffrey << endl;
    if(jeffrey){
        cout << "true" << endl << endl;
    }
    else{
        cout << "false" <<endl << endl;
    }
}

void (*ptr)(int) = &j;

int main()
{
    g("false");
    j(0); //false
    g("false");
    j(-7); //false
    g("false");
    j(-1 + -2); //false
    g("false");
    j(-7 + 7);//false
    g("true");
    j(7 < 8); //true
    g("false");
    j(10 > 10); //false
    g("true");
    j((7 < 10) || (7 > 10)); //true
    g("false");
    j((7 < 10) && (7 > 10)); //false
    g("false");
    j(-5 >= 5); //false
    g("false");
    j((7 > 10) || (-5 == 5)); //false
    g("true");
    j(!(6 == 7)); //true
    g("false");
    j((10 != 11) && (7 > 8)); //false
    g("true");
    j((7 == 6) || (7 == 7) || (7 == 8)); //true
    g("false");
    j((6 < (8 && 9))); //false
    g("true");
    j((1 == (6 < 8)) ); //true
    g("false");
    j((0 == (0 || 1))); //False
    g("true");
    j(6 < (5 + 2)); //Torn. Maybe true. Maybe false. True is instinct
    g("false");
    j(6 + (5 == 5)); //false
    g("false");
    j((6 < 7) + (7 >= 5)); //false
    g("false");
    j((0 < 7) - (0 < 7)); //false
    cout << "You know how you read a word so much it doesn't seem real anymore?" << endl << "Thats what false feels like to me." << endl;
    return 0;

}