#include <iostream>

using namespace std;

void printCharacter()
{
    string a;

    cout<<"Choose your sex Male or Female: ";
    cin>>a;

    if(a == "male" || a == "Male"){

    cout<<endl;

    cout<<"Male Character"<<endl;
    cout<<"Name: Hector"<<endl;
    cout<<"Sex: Male"<<endl;
    cout<<"Age: 26"<<endl;
    cout<<"Place of birth: USA"<<endl;
    cout<<"Occupation: Soldier(BodyGuard)"<<endl;
    cout<<"Current location: Japan"<<endl;

    }else if(a == "female" || a == "Female"){

    cout<<endl;

    cout<<"Female Character"<<endl;
    cout<<"Name: Alice (Ali)"<<endl;
    cout<<"Sex: Female"<<endl;
    cout<<"Age: 25"<<endl;
    cout<<"Place of birth: Spain"<<endl;
    cout<<"Occupation: Soldier(BodyGuard)"<<endl;
    cout<<"Current location: Italy"<<endl;

    }
}

void printStory()
{
    cout<<endl<<endl;
    cout<<"The two presidents gathered to talk about their military power. At one time a president falls to the ground with a high fever and difficulty breathing and snuggle bouquet. Immediately evacuated another president and start Studies have body president. It soon became clear that he had been infected with the Covid-19."<<endl;
    cout<<"The president decides to leave his country.He wonders who will choose to be with him as a bodyguard and decides to choose you."<<endl;
    cout<<"The President: If someone has to be my bodyguard, I prefer it to be you.";
}

int main()
{
    printCharacter();
    printStory();
}
