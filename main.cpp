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

void countriesToShow(string country[5], int info[5])
{
    country[0] = "Coutntry 1 - some info";
    country[1] = "Coutntry 2 - some info";
    country[2] = "Coutntry 3 - some info";
    country[3] = "Coutntry 4 - some info";
    country[4] = "Coutntry 5 - some info";

    for (int i = 0; i <= 4; i++) {
        int durj = 0;
        durj = rand() % 1000 + 1;
        info[i] = durj;
        cout<<country[i]<<" Infected: "<<info[i]<<endl;
    }

}

int givepresidents(int choice, int info[5], int presidents) {
    if (choice == 1) {
        cout<<"You choosed country - 1"<<endl<<endl;
        if (info[0] < info[1] && info[0] < info[2] && info[0] < info[3] && info[0] < info[4]) {
            cout<<"Nice, you saved one president.";
            presidents++;
            cout<<"Current number of presidents: "<<presidents<<endl<<endl;
        } else {
            presidents--;
        }
    } else if (choice == 2) {
        cout<<"You choosed country - 2"<<endl<<endl;
        if (info[1] < info[0] && info[1] < info[2] && info[1] < info[3] && info[1] < info[4]) {
            cout<<"Nice, you saved one president."<<endl;
            presidents++;
            cout<<"Current number of presidents: "<<presidents<<endl<<endl;
        } else {
            presidents--;
        }
    } else if (choice == 3) {
        cout<<"You choosed country - 3"<<endl<<endl;
        if (info[2] < info[0] && info[2] < info[3] && info[2] < info[4] && info[2] < info[1]) {
            cout<<"Nice, you saved one president.";
            presidents++;
            cout<<"Current number of presidents: "<<presidents<<endl<<endl;
        } else {
            presidents--;
        }
    } else if (choice == 4) {
        cout<<"You choosed country - 4"<<endl<<endl;
        if (info[3] < info[1] && info[3] < info[2] && info[3] < info[0] && info[3] < info[4]) {
            cout<<"Nice, you saved one president.";
            presidents++;
            cout<<"Current number of presidents: "<<presidents<<endl<<endl;
        } else {
            presidents--;
        }
    } else if (choice == 5) {
        cout<<"You choosed country - 5"<<endl<<endl;
        if (info[4] < info[1] && info[4] < info[2] && info[4] < info[3] && info[4] < info[0]) {
            cout<<"Nice, you saved one president.";

            cout<<"Current number of presidents: "<<presidents<<endl<<endl;
        } else {
            presidents--;
        }
    } else {
        cout<<"Please choose number between 1-18: "<<endl;
        cin>>choice;
        givepresidents(choice, &info[5], presidents);
    }
}

int main()
{
    printCharacter();
    printStory();

    int choice = 0;
    int presidents = 0;
    int info[5];
    string country[5];

    cout<<"Let's play some shit...";

    cout<<"Here is a list with the countries: "<<endl<<endl;

    for (int j = 0; j <= 4; j++) {

    cout<<"Please choose one of the countries you would like to try to save presidents... (1-18)"<<endl;
    cin>>choice;

    givepresidents(choice, &info[5], presidents);

    if (presidents < 0) {
        cout<<"No presidents left...";
        break;
    } else if (presidents == 18) {
        cout<<"Congrats, you win!";
        break;
    }
    cout<<"Press any key to continue...";
    cin.get();
}

    cout<<endl<<endl<<"No more tries left...";
}
