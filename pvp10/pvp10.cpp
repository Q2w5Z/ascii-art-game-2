
#include <iostream>
#include <random>
using namespace std;
    random_device generator;
    uniform_int_distribution<int>mms(20, 25);
    int mms1 = mms(generator);




bool IsCriticalTrue()
{
    random_device generator;
    uniform_int_distribution<int> range(1, 100);
    int myNumber = range(generator);
    if (myNumber < 21)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    random_device generator;
    uniform_int_distribution<int>mms(20, 25);
    int mms1 = mms(generator);

    random_device generator;
    uniform_int_distribution<int> attack(1, 100);
    bool randomATACKdm = attack(generator) ;

    random_device generator;
    uniform_int_distribution<int> range(1, 100);
    int AC = range(generator);

    char attackPchoose;
    int attack;
    int attackEN;
	int P1_HP = 100;
	int P2_HP = 100;
	int EN_HP = 100;

	while ((P1_HP > 0 ) && (P2_HP > 0 ))
	{
        cout << "choose your attack \n option:\nmake me stromger = w\n make me deadlier = z\n kill that bitch = y";
        cin >> attackPchoose;
        if (attackPchoose == 'w')
        {
            P1_HP + mms1;
        }
	}
}

