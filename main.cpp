#include <iostream>
#include <cstdlib>

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

int * countriesToShow(string country[])
{

    static int info[5];

    for (int i = 0; i <= 4; i++) {
        int durj = 0;
        durj = rand() % 1000 + 1;
        info[i] = durj;
        cout<<"Which country you want to go: ";
        cin>>country[i];
        cout<<country[i]<<" Infected: "<<info[i]<<endl;
    }

    return info;

}

int givePresidents(int choice, int* info, int presidents) {

    int chosenValue = *(info + choice - 1);
    int min = *info;

    for (int i = 1; i <= 4; i++) {
        if (*(info + i) < min) {
            min = *(info + i);
        }
    }

    if (min == chosenValue) {
        cout<<"Nice, you saved one president.";
        presidents++;
        cout<<"Current number of presidents: "<<presidents<<endl<<endl;
    } else {
        cout<<"You lose one president..."<<endl;
        presidents--;
        cout<<"You are left with "<<presidents<<endl;
    }

    return presidents;
}

int main()
{
    printCharacter();
    printStory();

    int choice = 0;
    int presidents = 0;
    string country[5];
    int * info;

    cout<<endl<<endl;

    country[0] = "USA -";
    country[1] = "Spain -";
    country[2] = "China -";
    country[3] = "Japan -";
    country[4] = "Bulgaria -";

    cout<<"Let's play some shit...";

    cout<<"Here is a list with the countries: "<<endl;

    for (int j = 0; j <= 4; j++) {
    cout<<endl;
    info = countriesToShow(country);

    cout<<endl;

    cout<<"Please choose one of the countries you would like to try to save presidents... (1-5)"<<endl;
    cin>>choice;

    presidents = givePresidents(choice, info, presidents);

    if (presidents < 0) {
        cout<<"No presidents left...";
        break;
    } else if (presidents == 5) {
        cout<<"Congrats, you win!";
        break;
    }
    cout<<"Press any key to continue...";
    cin.get();
}
}
