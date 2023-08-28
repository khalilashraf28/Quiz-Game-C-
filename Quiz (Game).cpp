#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

struct our_quiz_game{  // if we are using multiple functions and they are connected together it is imp to use the structure function.
	char u_name[100];  // we have just put the numbers of chracters for the name.
	char u_roll[100];  // same for the this line.
	int marks, t;
};

our_quiz_game gq;  // this for the access of variables from structure function we have used qg to access it on other functions

void result(){
	system("cls");
	system("color 6");
	float percentage=0;
	cout<<"\n\n\t\t\t||         **************                      || \n";
	cout<<"\t\t\t||         SCORE REPORT                        ||  \n";
	cout<<"\t\t\t||         **************                      || \n";
	cout<<"\t\t\t|| ";	cout<<" Name:       "<< gq.u_name <<    "                              ||"   << endl;
	cout<<"\t\t\t|| ";	cout<<" Roll no:    "<< gq.u_roll <<    "                              ||" << endl;
	cout<<"\t\t\t|| ";	cout<<" Marks :     "<<gq.marks   <<    "                              ||" << endl;
	percentage=100*gq.marks/(gq.t*10);
	cout<<"\t\t\t|| ";	cout<<" Percentage: "<<percentage<<"%"<< "                             ||"  << endl;
	cout<<"\t\t\t||         *************                       || \n";

	if (percentage == 0){
		cout << "\nThat's emabarassing. You got none of the Q right.";
		cout <<"---------------------------------------------------- \n";
	}
	else if (percentage >= 80){
		cout << "\nYou are intelligent." << endl;
		cout <<"---------------------- \n";
	}
	else if (percentage >= 50){
		cout << "\nYou are great." << endl;
		cout << "--------------- \n";
	}
	if (percentage <=49){
		cout << "\nYour score is average, better luck next time" << endl;
		cout <<"----------------------------------------------- \n";
	}

}
void easy()
{
	system("cls");
cout<<"\n============================\n";
cout<<"     WELCOME TO EASY MODE\n";
cout<<"=============================\n";
    system("color b");
	char ans;
	gq.marks=0;
	char arr[10];
	float percentage=0;
    int random;
	cout << "\n\nHow many Question you want to answer out of 10 : ";
	cin>>gq.t;
	cout << "\n\n" ;
	srand (time(0));

	for (int i=0; i<gq.t; i++)
	{

	check_again:
	random = 1 + (rand()%15); // so the random numbers can be genereated from 1 to 10.

	for (int j=0;j<=10;j++){
		if(random==arr[j]){
			goto check_again;
		}
	}
	arr[i] = random;
	switch (random){
		case 1:
			cout<< "Q" << i+1 << ") How many planets are in our solar system?\na.5\nb.6\nc.7\nd.8\n";
	        cin >> ans;
	        if(ans=='D'||ans=='d'){
	        cout<< ans <<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< "wrong Answer\n" << endl;
	        }
	        break;

	    case 2:
			cout<<  "Q" << i+1 << ") What was the first soft drink in space? \na.Malt\nb.Coca Cola\nc.Marinda\nd.Pepsi\n";
	        cin >> ans;
	        if(ans=='B' || ans=='b'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< "wrong Answer\n" << endl;
		    }
		    break;

		case 3:
			cout<<  "Q" << i+1 << ") Which country invented ice cream? \na.Turkey\nb.United States of America\nc.China\nd.Pakistan\n";
	        cin >> ans;
	        if(ans=='C' || ans=='c'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< "wrong Answer\n" << endl;
		    }
		    break;

		case 4:
			cout<<  "Q" << i+1 << ") What is the loudest animal on Earth? \na.Elephant\nb.lion\nc.Sperm Whale\nd.Dog\n";
	        cin >> ans;
	        if(ans=='C' || ans=='c'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< "wrong Answer\n" << endl;
		    }
		    break;

		case 5:
			cout<<  "Q" << i+1 << ") How many legs does a spider have? \na.8\nb.7\nc.9\nd.10\n";
	        cin >> ans;
	        if(ans=='A' || ans=='a'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< "  Wrong Answer\n" << endl;
		    }
		    break;

		case 6:
			cout<<  "Q" << i+1 << ") What is the nearest planet to the sun? \na.Earth\nb.Uranus\nc.Plato\nd.Mercury\n";
	        cin >> ans;
	        if(ans=='D' || ans=='d'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< " Wrong Answer\n" << endl;
		    }
		    break;

		case 7:
			cout<<  "Q" << i+1 << ") What is the hottest planet in the solar system? \na.Earth\nb.Vennus\nc.Plato\nd.Mercury\n";
	        cin >> ans;
	        if(ans=='B' || ans=='b'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< " Wrong Answer\n" << endl;
		    }
		    break;

		case 8:
			cout<<  "Q" << i+1 << ") What does come down but never goes up? \na.Ball\nb.Dust\nc.Rain\nd.Wind\n";
	        cin >> ans;
	        if(ans=='C' || ans=='c'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< " Wrong Answer\n" << endl;
		    }
		    break;

		case 9:
			cout<<  "Q" << i+1 << ") Which is the only even Prime Number? \na.2\nb.8\nc.4\nd.6\n";
	        cin >> ans;
	        if(ans=='A' || ans=='a'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< " Wrong Answer\n" << endl;
		    }
		    break;

		case 10:
			cout<<  "Q" << i+1 << ") How many seconds are there in one hour? \na.3200\nb.3400\nc.3600\nd.3800\n";
	        cin >> ans;
	        if(ans=='C' || ans=='c'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< " Wrong Answer\n" << endl;
		    }
		    break;

        case 11:
            cout<<  "Q" << i+1 << ") who was a first women to win nobel prize? \na.Marie Curie\nb.Rosalind Franklin \nc.Lise Meitner \nd.Racheal Carson\n";
	        cin >> ans;
	        if(ans=='A' || ans=='a'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< " Wrong Answer\n" << endl;
		    }
		    break;

        case 12:
            cout<<  "Q" << i+1 << ") What is the name of the largest ocean on earth? \na.Artic Ocean\nb.Pacific Ocean\nc.Indian Ocean\nd.Atlantic Ocean\n";
	        cin >> ans;
	        if(ans=='C' || ans=='c'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< " Wrong Answer\n" << endl;
		    }
		    break;

        case 13:
		    cout<<  "Q" << i+1 << ") How many bones are in the human body? \na.206\nb.208\nc.205\nd.207\n";
	        cin >> ans;
	        if(ans=='A' || ans=='a'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< " Wrong Answer\n" << endl;
		    }
		    break;

        case 14:
           cout<<  "Q" << i+1 << ") What is the hardest natural substance on the Earth? \na.Metal\nb.Copper\nc.Diamond\nd.Platinum\n";
	        cin >> ans;
	        if(ans=='C' || ans=='c'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< " Wrong Answer\n" << endl;
		    }
		    break;

        case 15:
           cout<<  "Q" << i+1 << ") What is the name of te biggest technology company in south korea? \na.SK hynix\nb.Hyundai\nc.Kia motors\nd.Samsung\n";
	        cin >> ans;
	        if(ans=='D' || ans=='d'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< " Wrong Answer\n" << endl;
		    }
		    break;

    }
}
}

void medium()
{
	system("cls");
cout<<"\n============================\n";
cout<<"     WELCOME TO MEDIUM MODE\n";
cout<<"=============================\n";
    system("color D");
	char ans;
	gq.marks=0;
	char arr[10];
	float percentage=0;
    int random;
	cout << "\n\nHow many Question you want to answer out of 10 : ";
	cin>>gq.t;
	cout << "\n\n" ;
	srand (time(0));

	for (int i=0; i<gq.t; i++)
	{

	check_again:
	random = 1 + (rand()%15); // so the random numbers can be genereated from 1 to 10.

	for (int j=0;j<=10;j++){
		if(random==arr[j]){
			goto check_again;
		}
	}
	arr[i] = random;
	switch (random){
		case 1:
			cout<<  "Q" << i+1 << ")How many zeros are there in One Billion?\na.5\nb.6\nc.7\nd.9\n";
	        cin >> ans;
	        if(ans=='D'||ans=='d'){
	        cout<< ans <<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< "  Wrong Answer\n" << endl;
	        }
	        break;

	    case 2:
			cout<<  "Q" << i+1 << ")Write the next number of the following Sequences 1, 1, 2, 3, 5, 8, 13,_? \na.20\nb.21\nc.22\nd.23\n";
	        cin >> ans;
	        if(ans=='B' || ans=='b'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< "  Wrong Answer\n" << endl;
		    }
		    break;

		case 3:
			cout<<  "Q" << i+1 << ")Where was Abacus invented? \na.Turkey\nb.United States of America\nc.China\nd.Pakistan\n";
	        cin >> ans;
	        if(ans=='C' || ans=='c'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< "  Wrong Answer\n" << endl;
		    }
		    break;

		case 4:
			cout<<  "Q" << i+1 << ")Name of the Symbol ( ) ? \na.Colon\nb.Semi Colon\nc.Parentheses\nd.Underscore\n";
	        cin >> ans;
	        if(ans=='C' || ans=='c'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< "  Wrong Answer\n" << endl;
		    }
		    break;

		case 5:
			cout<<  "Q" << i+1 << ")Father of Algebra? \na. Muhammad ibn Musa al-Khwarizmi\nb.Al-Beruni\nc.Ibn Ul haythim\nd.Robert Boyle\n";
	        cin >> ans;
	        if(ans=='A' || ans=='a'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< "  Wrong Answer\n" << endl;
		    }
		    break;

		case 6:
			cout<<  "Q" << i+1 << ")What is the nearest planet to the sun? \na.Earth\nb.Uranus\nc.Plato\nd.Mercury\n";
	        cin >> ans;
	        if(ans=='D' || ans=='d'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< "  Wrong Answer\n" << endl;
		    }
		    break;

		case 7:
			cout<< "Q" << i+1 << ")Value of cos 360°? \na.0.5\nb.1\nc.1.5\nd.Infinity\n";
	        cin >> ans;
	        if(ans=='B' || ans=='b'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< "  Wrong Answer\n" << endl;
		    }
		    break;

		case 8:
			cout<<  "Q" << i+1 << ")The value of Pi? \na.1.14\nb.2.14\nc.3.14\nd.4.14\n";
	        cin >> ans;
	        if(ans=='C' || ans=='c'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< "  Wrong Answer\n" << endl;
		    }
		    break;

		case 9:
			cout<<  "Q" << i+1 << ")Which Apollo moon mission was the first to carry a lunar rover? \na.Apollo 15\nb.Apollo 20\nc.Apollo 10\nd.Apollo 2.O\n";
	        cin >> ans;
	        if(ans=='A' || ans=='a'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< "  Wrong Answer\n" << endl;
		    }
		    break;

		case 10:
			cout<<  "Q" << i+1 << ")What is the biggest planet in our solar system? \na.Sun\nb.Earth\nc.Jupiter\nd.Uranus\n";
	        cin >> ans;
	        if(ans=='C' || ans=='c'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< "  Wrong Answer\n" << endl;
		    }
		    break;

        case 11:
            cout<<  "Q" << i+1 << ")How long is an olymic swimming pool(in meters)?\na.60 meters\nb.50 meters\nc.70 meters\nd.90 meters\n";
	        cin >> ans;
	        if(ans=='B'||ans=='b'){
	        cout<< ans <<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< "  Wrong Answer\n" << endl;
	        }
	        break;

        case 12:
            cout<<  "Q" << i+1 << ")What countries made up the original axis powers in world war ll?\na.Germany,Britain,Japan\nb.Turkey,America,Japn\nc.Germany,Italy,Britain\nd.Germany,Italy,Japan\n";
	        cin >> ans;
	        if(ans=='D'||ans=='d'){
	        cout<< ans <<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< "  Wrong Answer\n" << endl;
	        }
	        break;
        case 13:

            cout<<  "Q" << i+1 << ")Who was a famous Britsih physicist wrote a brief history of time?\na.Isaac Newton\nb.Charles Darwin\nc.Stephen Hawkins\nd.Ron Mallet\n";
	        cin >> ans;
	        if(ans=='C'||ans=='c'){
	        cout<< ans <<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< "wrong Answer\n" << endl;
	        }
	        break;
        case 14:

            cout<<  "Q" << i+1 << ")At what temperature are celsius and Fahrenheit equal?\na.-40\nb.-50\nc.40\nd.none of them\n";
	        cin >> ans;
	        if(ans=='A'||ans=='a'){
	        cout<< ans <<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< "  Wrong Answer\n" << endl;
	        }
	        break;

        case 15:
            cout<<  "Q" << i+1 << ")What is the most consumed manufactured drink in the world?\na.Water\nb.pepsi\nc.juice\nd.tea\n";
	        cin >> ans;
	        if(ans=='D'||ans=='d'){
	        cout<< ans <<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< "  Wrong Answer\n" << endl;
	        }
	        break;

    }
}
}

void hard()
{
	system("cls");
cout<<"\n============================\n";
cout<<"     WELCOME TO HARD MODE\n";
cout<<"=============================\n";
    system("color e");
	char ans;
	gq.marks=0;
	char arr[10];
	float percentage=0;
    int random;
	cout << "\n\nHow many Question you want to answer out of 10 : ";
	cin>>gq.t;
	cout << "\n\n" ;
	srand (time(0));

	for (int i=0; i<gq.t; i++)
	{

	check_again:
	random = 1 + (rand()%15); // so the random numbers can be genereated from 1 to 10.

	for (int j=0;j<=10;j++){
		if(random==arr[j]){
			goto check_again;
		}
	}
	arr[i] = random;
	switch (random){
		case 1:
			cout<<  "Q" << i+1 << ")Who invented the word \"vomit\"?\na.Mustansar Hussain Tarrar\nb.John Keats\nc.Elizabeth Barrett Browning\nd.William Shakespeare\n";
	        cin >> ans;
	        if(ans=='D'||ans=='d'){
	        cout<< ans <<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< "  Wrong Answer\n" << endl;
	        }
	        break;

	    case 2:
			cout<<  "Q" << i+1 << ")Which of Newton’s Laws states that ‘for every action, there is an equal and opposite reaction? \na.The Second law of motion\nb.The third law of motion\nc.The First law of motion\nd.None of These\n";
	        cin >> ans;
	        if(ans=='B' || ans=='b'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< "  Wrong Answer\n" << endl;
		    }
		    break;

		case 3:
			cout<<  "Q" << i+1 << ")What modern-day country was Marie Curie born in? \na.Turkey\nb.United States of America\nc.Polland\nd.Nepal\n";
	        cin >> ans;
	        if(ans=='C' || ans=='c'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< "  Wrong Answer\n" << endl;
		    }
		    break;

		case 4:
			cout <<  "Q" << i+1 << ")What is the most abundant gas in the Earth's atmosphere? \na.Carbon dioxide\nb.Oxygen\nc.Nitrogen\nd.Hydrogen\n";
	        cin >> ans;
	        if(ans=='C' || ans=='c'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< "  Wrong Answer\n" << endl;
		    }
		    break;

		case 5:
			cout<<  "Q" << i+1 << ")Who discovered the Symbol Infinity “8”? \na. John Wallis\nb.Al-Beruni\nc.Newton\nd.Robert Boyle\n";
	        cin >> ans;
	        if(ans=='A' || ans=='a'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< "  Wrong Answer\n" << endl;
		    }
		    break;

		case 6:
			cout<<  "Q" << i+1 << ")Who discovered the center of gravity? \na.Zhang Heng\nb.Galileo Galilei\nc.Leonardo da Vinci\nd.Archimedes\n";
	        cin >> ans;
	        if(ans=='D' || ans=='d'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< "  Wrong Answer\n" << endl;
		    }
		    break;

		case 7:
			cout<<  "Q" << i+1 << ") Who discovered Pythagoras Theorem? \na.Leonhard Euler\nb.Pythagoras of Samos\nc.John Horton Conway \nd.Hypatia\n";
	        cin >> ans;
	        if(ans=='B' || ans=='b'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< "  Wrong Answer\n" << endl;
		    }
		    break;

		case 8:
			cout<<  "Q" << i+1 << ") Father of Trigonometry? \na.Hypatia\nb.Carl Friedrich Gauss\nc.Hipparchus\nd.Paul Erdös\n";
	        cin >> ans;
	        if(ans=='C' || ans=='c'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< "  Wrong Answer\n" << endl;
		    }
		    break;

		case 9:
			cout<<  "Q" << i+1 << ") What is a material that will not carry an electrical charge called? \na.Insulator 15\nb.Conductor 20\nc.Semi Conductor 10\nd.none of these\n";
	        cin >> ans;
	        if(ans=='A' || ans=='a'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< "  Wrong Answer\n" << endl;
		    }
		    break;

		case 10:
			cout<<  "Q" << i+1 << ") The name of which African animal means \"river horse\"? \na.Whale\nb.crocodile\nc.Hippopotamus\nd.None of These\n";
	        cin >> ans;
	        if(ans=='C' || ans=='c'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< "  Wrong Answer\n" << endl;
		    }
		    break;

        case 11:
             cout<<  "Q" << i+1 << ") What geometric shape is generally used for stop signs? \na.Pentagon\nb.hexagon\nc.octagon\nd.None of These\n";
	        cin >> ans;
	        if(ans=='C' || ans=='c'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< "  Wrong Answer\n" << endl;
		    }
		    break;


        case 12:
           cout<<  "Q" << i+1 << ") What is cynophobia? \na.fear of dogs\nb.fear of horse\nc.fear of height\nd.fear of water\n";
	        cin >> ans;
	        if(ans=='A' || ans=='a'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< "  Wrong Answer\n" << endl;
		    }
		    break;


        case 13:
            cout<<  "Q" << i+1 << ") The first dictionary was written by? \na.Samuel johnson\nb.Robert cawdrey\nc.Robert Estienne\nd.Elizabeth Johnson\n";
	        cin >> ans;
	        if(ans=='A' || ans=='a'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< "  Wrong Answer\n" << endl;
		    }
		    break;


        case 14:
            cout<<  "Q" << i+1 << ") What is the rarest M&M color? \na.black\nb.brown\nc.red\nd.yellow\n";
	        cin >> ans;
	        if(ans=='B' || ans=='b'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< "  Wrong Answer\n" << endl;
		    }
		    break;


        case 15:
            cout<<  "Q" << i+1 << ") who is the first woman pilot to fly solo across the Atlantic? \na.Amy Johnson\nb.Harriet Quimby\nc.Bassie Coleman\nd.Amelia Earhart\n";
	        cin >> ans;
	        if(ans=='D' || ans=='d'){
	        cout<<ans<<" is correct Answer\n"<<endl;
		    gq.marks+= 10;
	        }
			else{
		    cout<< "  Wrong Answer\n" << endl;
		    }
		    break;

    }
}
}
void intro()
{
	system("color 4");
	cout<<"\n\t+++++++++++++++++++++++\n";
	cout<<"\t  WELCOME TO QUIZ GAME\n";
	cout<<"\t+++++++++++++++++++++++\n";
	cout << "\n\tEnter Your Name: " ;
	gets(gq.u_name);  // we have used "gets()" so that the user can put space between their name. otherwise it will give an error.
	cout << "\tEnter Your Roll no. : " ;
	gets(gq.u_roll);
	system ("CLS");
	system("color 2");
	cout << "\n\t\t\t*************" ;
	cout << "\n\t\t\t*************" ;
	cout << "\n\t    CHOOSE DIFFICULTY LEVEL !";
	cout << "\n\t*************";
	cout << "\n\t\t\t*************";
	cout << "\n\n\tSelect Difficulty level for your quiz. \n\t1.Easy\n\t2.Medium\n\t3.Hard\n\n\tEnter here: ";
	
}

int main()
{

	loop_again:

	int level;
    char user;
	system("CLS");
	intro();
    cin >> level;
	switch (level){
		case 1:
			easy();   // this will pass into new function
			result(); // after the completion of first function it will go far a second selected function.
			break;
		case 2:
			medium();
			result();
			break;
		case 3:
			hard();
			result();
			break;
		default:
			cout << "Invalid Input" << endl;
			break;
	}
	cout << "\n\nEntre Y if you want to play again\n" ;
	cin >> user;
	while(user == 'y' || user == 'Y'){
		cin.ignore();
		goto loop_again;
	}
}
