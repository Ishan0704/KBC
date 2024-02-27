// MINI-PROJECT-KBL
#include<iostream>
using namespace std;
class kbl
{
	public:
		char ch,ch1;
		int counter=0;
		int a1=1,a2=1,a3=1,a4=1;
		void lifeline();
		void display();
};

void kbl::lifeline()
{	f:
	cout<<"\nDo you want to use your life-line Y OR N : ";
	cin>>ch;
	if (ch=='Y' || ch=='y'|| ch=='N'||ch=='n')
	{
		if(ch=='y'||ch=='Y')
		{	a:
			cout<<"\n\nAvialable Life-lines : \nA.50-50\nB.Audience Pole\nC.Answer Predictor \n";
			cout<<"\nEnter your choice : ";
			cin>>ch1;
			if(counter==3)
			{	cout<<"\nYou used all your life-lines";
				goto b ;
			}
			if (ch1=='A'||ch1=='a'||ch1=='b'||ch1=='B'||ch1=='C'||ch1=='c')
			{
				if (ch1=='a'||ch1=='A')
				{
					if (a1==1)
					{	counter++;
						cout<<"\nCancel option B and C";
						a1=0;
						
					}
					else
					{
						cout<<"\nYou already used this lifeline , Select another ";goto a;
					}
				}
				if(ch1=='b'||ch1=='B')
				{	if(a2==1)
					{	counter++;
						cout<<"\n40 % chances option A is correct\n30 % chances option B is correct\n20 % chances option C is correct\n10 % chances Option D is correct";
						a2=0;
					}
					else
					{
						cout<<"\nyou cannot use this life-line";goto a;
					}
					
					
				}
				if(ch1=='c'||ch1=='C')
				{ 
					if(a3==1)
					{	counter++;
						cout<<"\nA option is correct";
						a3=0;
					}
					else
					{
						cout<<"\nyou cannot use this life-line ";
						cout<<"\n select Appropriate life-line";goto a;
					}
				}
				
				goto b;
			}
			else
			{
				cout<<"\nInvalid choice \nKindly enter appropriate choice  ";
				
				goto a;
			}
		}
		if(ch=='n'||ch=='N')
		{	b:
			cout<<"\n\nKindly choose your option:";
			
		}
	}
	else
	{
		cout<<"\nInvalid Input.....\nKindly Enter Proper Input ";goto f;
	}
}
void kbl::display()
{
	string str;
	cout<<"Welcome To , ";
	cout<<"\n-----------KON------------------------------------------------------";
	cout<<"\n---------------BANEGA-----------------------------------------------";
	cout<<"\n----------------------LAKHPATHI-------------------------------------";
	cout<<"\nEnter Name Of Candidate : ";
	cin>>str;
	
	cout<<"\n\**********RULES**********";
	cout<<"\n\n1.There are total 7 questions";
	cout<<"\n\n2.Kindly input (Y/y) for yes and (N/n) for no";
	cout<<"\n\n3. value for each question is mentioned above  question";
	cout<<"\n\n4.For every correct answer candidate will get amount mentioned above  question respectively";
	cout<<"\n\n5.If any answer is incorrect , candidate will be disqualified and his winnings will be displayed";
	cout<<"\n\n6.There are total 3 life-lines in the game , You can use each line only once ";
	
	cout<<"\n\n\tA.50-50            -: This life-line gives hint to cancel 2 options ";
	cout<<"\n\n\tB.Audience pole    -: This life-line gives percentage chances for an option to be correct ";
	cout<<"\n\n\tC.Answer Predictor -: This life-line gives correct answer for specific question ";
	cout<<"\n\n7.If player inputs Y for life-line then you have to compulsory use the life-line";
	cout<<"\n\n8.At the end of game total earnings will be displayed";
	cout<<"\n\n*************************";
}
int main()
{	string str;
	int sum=0;
	char q1,q2,q3,q4,q5,q6,q7;
	char v;
	kbl y;
	y.display();
	e:
	cout<<"\n\nBegin The Game ? \nEnter (Y/N) : ";
	cin>>v;
	if (v=='Y'||v=='y'||v=='n'||v=='N')
	{
		if (v=='Y'||v=='y')
		{
			kbl x;
			c:
			cout<<"\nFirst Question for 1000 INR -:";
			cout<<"\n-------------------------------------------------------------------";
			cout<<"\n\nQ1)When India gained its Independence ? ";
			cout<<"\nA)1947\t\tB)1946\nC)1943\t\tD)1945";
			x.lifeline();
			cout<<"\n\nEnter your Option for first question :";
			cin>>q1;
			if(q1=='A'||q1=='a'||q1=='b'||q1=='B'||q1=='C'||q1=='c'||q1=='d'||q1=='D')
			{
				if (q1=='A'||q1=='a')
				{	sum=1000;
					cout<<"\n\nCorrect Answer.........";
					cout<<"\nCongratulations......you won 1000 INR";
					cout<<"\nTotal amount is : "<<sum<<" INR";
					cout<<"\n-------------------------------------------------------------------";goto g;	
				}
				else
				{
					cout<<"\n\nSeleted option is wrong......";
					cout<<"\nGAME OVER!!!!!!!..........";
					cout<<"\nTotal money won is :"<<sum<<" INR";goto E;
				}
			}
			else
			{
				cout<<"\nKindly select correct option";goto c;
			}
			
			g:
			cout<<"\n\nSecond Question for 2000 INR -:";
			cout<<"\n-------------------------------------------------------------------";
			cout<<"\n\nQ2)Which among the following is major trible groups in bihar ?";
 			cout<<"\nA) Santhals\t\t  B) todas\t\t\nC) bhils\t\t  D) lechpas";
 			x.lifeline();
			cout<<"\n\nEnter your Option for Second question :";
			cin>>q2;
			if(q2=='A'||q2=='a'||q2=='b'||q2=='B'||q2=='C'||q2=='c'||q2=='d'||q2=='D')
			{
				if (q2=='A'||q2=='a')
				{	sum+=2000;
					cout<<"\n\nCorrect Answer.........";
					cout<<"\nCongratulations......you won 2000 INR";
					cout<<"\nTotal amount is : "<<sum<<" INR";
					cout<<"\n-------------------------------------------------------------------";goto h;	
				}
				else
				{
					cout<<"\n\nSeleted option is wrong......";
					cout<<"\nGAME OVER!!!!!!!..........";
					cout<<"\nTotal money won is :"<<sum<<" INR";goto E;
						
						
				}
			}
			else
			{
				cout<<"\nKindly select correct option";goto g;
			}
			h:
			cout<<"\n\nThird Question for 5000 INR -:";
			cout<<"\n-------------------------------------------------------------------";
			cout<<"\n\nQ3)Which Does not belongs to UN ? ";
 			cout<<"\nA) ASEAN\t\t  B) ILO\nC) WHO\t\t  D)FAO ";
 			x.lifeline();
			cout<<"\n\nEnter your Option for Third question :";
			cin>>q3;
			if(q3=='A'||q3=='a'||q3=='b'||q3=='B'||q3=='C'||q3=='c'||q3=='d'||q3=='D')
			{
				if (q3=='A'||q3=='a')
				{	sum+=5000;
					cout<<"\n\nCorrect Answer.........";
					cout<<"\nCongratulations......you won 5000 INR";
					cout<<"\nTotal amount is : "<<sum<<" INR";
					cout<<"\n-------------------------------------------------------------------";goto i;
				}
				else
				{
					cout<<"\n\nSeleted option is wrong......";
					cout<<"\nGAME OVER!!!!!!!..........";
					cout<<"\nTotal money won is :"<<sum<<" INR";goto E;
				}
			}
			else
			{
				cout<<"\nKindly select correct option";goto h;
			}
			i:
			cout<<"\n\nFourth Question for 10000 INR -:";
			cout<<"\n-------------------------------------------------------------------";
			cout<<"\n\nQ4)The Battle of Plassey was fought in ? ";
 			cout<<"\nA) 1757\t\t  B) 1775\nC) 1564\t\t  D) 1671";
 			x.lifeline();
			cout<<"\n\nEnter your Option for Fourth question :";
			cin>>q4;
			if(q4=='A'||q4=='a'||q4=='b'||q4=='B'||q4=='C'||q4=='c'||q4=='d'||q4=='D')
			{
				if (q4=='A'||q4=='a')
				{	sum+=10000;
					cout<<"\n\nCorrect Answer.........";
					cout<<"\nCongratulations......you won 10000 INR";
					cout<<"\nTotal amount is : "<<sum<<" INR";
					cout<<"\n-------------------------------------------------------------------";goto j;
				}
				else
				{
					cout<<"\n\nSeleted option is wrong......";
					cout<<"\nGAME OVER!!!!!!!..........";
					cout<<"\nTotal money won is :"<<sum<<" INR";goto E;
				}
			}
			else
			{
				cout<<"\nKindly select correct option ";goto i;
			}	
			j:
			cout<<"\n\nFifth Question for 20000 INR -:";
			cout<<"\n-------------------------------------------------------------------";
			cout<<"\n\nQ5)The wife of which of these famous sports persons was once captain of Indian volleyball team ?";
 			cout<<"\nA)Milkha Singh\t\t  B)Prakash Padukone\nC) Dhyan Chand\t\t  D) K.D.Jadav";
 			x.lifeline();
			cout<<"\n\nEnter your Option for Fifth question :";
			cin>>q5;
			if(q5=='A'||q5=='a'||q5=='b'||q5=='B'||q5=='C'||q5=='c'||q5=='d'||q5=='D')
			{
				if (q5=='A'||q5=='a')
				{	sum+=20000;
					cout<<"\n\nCorrect Answer.........";
					cout<<"\nCongratulations......you won 20000 INR";
					cout<<"\nTotal amount is : "<<sum<<" INR";
					cout<<"\n-------------------------------------------------------------------";goto k;
				}
				else
				{
					cout<<"\n\nSeleted option is wrong......";
					cout<<"\nGAME OVER!!!!!!!..........";
					cout<<"\nTotal money won is :"<<sum<<" INR";goto E;
				}
			}
			else
			{
				cout<<"\nKindly select correct option";goto j;
			}		
			k:
			cout<<"\n\nSixth Question for 50000 INR -:";
			cout<<"\n-------------------------------------------------------------------";
			cout<<"\n\nQ6)The branch of science dealing with tumors";
			cout<<"\nA)Oncology \t\tB)Sereology\nC)Chromology\t\tD)Urology";
 			x.lifeline();
			cout<<"\n\nEnter your Option for Sixth question :";
			cin>>q6;
			if(q6=='A'||q6=='a'||q6=='b'||q6=='B'||q6=='C'||q6=='c'||q6=='d'||q6=='D')
			{
				if (q6=='A'||q6=='a')
				{	sum+=50000;
					cout<<"\n\nCorrect Answer.........";
					cout<<"\nCongratulations......you won 50000 INR";
					cout<<"\nTotal amount is : "<<sum<<" INR";
					cout<<"\n-------------------------------------------------------------------";goto l;
				}
				else
				{
					cout<<"\n\nSeleted option is wrong......";
					cout<<"\nGAME OVER!!!!!!!..........";
					cout<<"\nTotal money won is :"<<sum<<" INR";goto E;
				}
			}
			else
			{
				cout<<"\nKindly select correct option";goto k;
			}		
			l:
			cout<<"\n\nSeventh Question for 100000 INR -:";
			cout<<"\n-------------------------------------------------------------------";
			cout<<"\n\nQ7)Which among the following is the currency of Yugoslavia ? ";
			cout<<"\nA)pound    \t\tB) peso  \nC)dinar \t\tD) Lira  ";
 			x.lifeline();
			cout<<"\n\nEnter your Option for Seventh question :";
			cin>>q7;
			if(q7=='A'||q7=='a'||q7=='b'||q7=='B'||q7=='C'||q7=='c'||q7=='d'||q7=='D')
			{
				if (q7=='A'||q7=='a')
				{	sum+=100000;
					cout<<"\n\nCorrect Answer.........";
					cout<<"\nCongratulations......you won 100000 INR";
					cout<<"\nTotal amount is : "<<sum<<" INR";
					cout<<"\n-------------------------------------------------------------------";goto E;
				}
				else
				{
					cout<<"\n\nSeleted option is wrong......";
					cout<<"\nGAME OVER!!!!!!!..........";
					cout<<"\nTotal money won is :"<<sum<<" INR";goto E;
				}
			}
			else
			{
				cout<<"\nKindly select correct option";goto l;
			}		
				
			

		}
		else
		{ E:
			cout<<"\nThankyou for playing the game";
			
		}
		
	}
	else
	{
		cout<<"\nKindly answer in Y or N";goto e;
	}
}




