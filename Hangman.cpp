#include<iostream>
#include<stdlib.h>
#include<string>
#include<bits/stdc++.h>
#include<time.h>
using namespace std;
class hangman
{
	int lifes;
	int l;
	string type;
	string originalanswer;
	string display;
	char status;
	int wincount;
	public:
	hangman()
	{
		status='Y';
		wincount=0;
		lifes=5;
	}
	class Moviecharacter
	{
		int i;
        int selected[10];
		string mc[10];
	public:
		string s;
		Moviecharacter()
		{
            		int k;
            		s="MOVIECHARACTER";
            		for(k=0;k<10;k++)
            		{
                		selected[k]=50;
            		}
         	i=0;
		mc[0]="HARRYPOTTER";
		mc[1]="DOCTERSTRANGE";
		mc[2]="IRONMAN";
		mc[3]="BLACKPANTHER";
		mc[4]="GROOT";
		mc[5]="THANOS";
		mc[6]="WOLVERINE";
		mc[7]="JAMESBOND";
		mc[8]="STARLORD";
		mc[9]="WONDERWOMAN";
		}
		string selectmoviecharacter()
		{

			string x;
			int random,j;
			abc:
			random=rand()%10;
          		  if(i==0)
            		{
                		selected[i++]=random;
                		return mc[random];
            		}
			    else
			    {
			    	for(j=0;j<i;j++)
					{
						if(selected[j]==random)
						{
							goto abc;
						}
					}
			    	selected[i++]=random;
				return mc[random];
			   }
		}
	};
	class Tvwebseries
	{
		int i;
		int selected[11];
		string tw[11];
	public:
		string s;
			Tvwebseries()
			{
						s="TV/WEBSERIES";
	            		int k;
	            		for(k=0;k<11;k++)
	            		{
	                		selected[k]=50;
	            		}
	         	i=0;
			tw[0]="SILICONVALLEY";
			tw[1]="SACREDGAMES";
			tw[2]="FRIENDS";
			tw[3]="GAMEOFTHRONES";
			tw[4]="BIGBANGTHEORY";
			tw[5]="STRANGERTHINGS";
			tw[6]="BREAKINGBAD";
			tw[7]="SHERLOCK";
			tw[8]="WESTWORLD";
			tw[9]="SUITS";
			tw[10]="HOUSEOFCARDS";
			}
			string selectTvwebseries()
			{
				string x;
				int random,j;
				abc:
				random=rand()%11;
	            if(i==0)
	            {
	                selected[i++]=random;
	                return tw[random];
	            }
	            else
	            {
	            	for(j=0;j<i;j++)
				{
					if(selected[j]==random)
					{
						goto abc;
					}
				}
			selected[i++]=random;
	                return tw[random];
		    }
		}
	};
	class Movies
	{	int i;
		int selected[14];
		string m[14];
	public:
		string s;
				Movies()
				{
							s="MOVIES";
		            		int k;
		            		for(k=0;k<11;k++)
		            		{
		                		selected[k]=50;
		            		}
		         	i=0;
				m[0]="THEORYOFEVERYTHING";
				m[1]="TOMBRAIDER";
				m[2]="SHAPEOFWATER";
				m[3]="JURASSICPARK";
				m[4]="INSIDIOUS";
				m[5]="CONJURING";
				m[6]="WORLDWARZ";
				m[7]="TRANSFORMERS";
				m[8]="HANGOVER";
				m[9]="HOTELTRANSYLVANIA";
				m[10]="SKYSCRAPER";
				m[11]="TITANIC";
				m[12]="THESOCIALNETWORK";
				m[13]="THETERMINATOR";
				}
				string selectMovies()
				{
					string x;
					int random,j;
					abc:
					random=rand()%11;
		            if(i==0)
		            {
		                selected[i++]=random;
		                return m[random];
		            }
		            else
		            {
		            	for(j=0;j<i;j++)
					{
						if(selected[j]==random)
						{
							goto abc;
						}
					}
				selected[i++]=random;
		                return m[random];
				}
				}

	};
	class Books
	{
		int selected[10];
		int i;
		string b[10];
	public:
		string s;
		Books()
		{
			s="BOOKS";
				    int k;
				    for(k=0;k<11;k++)
				    {
				          	selected[k]=50;
				    }
			i=0;
			b[0]="HAMLET";
			b[1]="MAHABHARATA";
			b[2]="WINGSOFFIRE";
			b[3]="TWOSTATES";
			b[4]="HALFGIRLFRIEND";
			b[5]="RAMAYANA";
			b[6]="MASTERY";
			b[7]="SHERLOCKHOLMES";
			b[8]="HARRYPOTTER";
			b[9]="FIVEPOINTSOMEONE";
		}

		string selectbook()
		{
			string x;
			int random,j;
			abc:
			random=rand()%10;
			if(i==0)
			{
				selected[i++]=random;
				return b[random];
			}
			else
			{
			for(j=0;j<i;j++)
			{
				if(selected[j]==random)
				{
					goto abc;
				}
			}
					selected[i++]=random;
					return b[random];
			}
		}
	};
	class Actor
	{
		int selected[10];
		int i;
		string actr[10];
		public:
		string s;
		Actor()
		{
			s="ACTOR";
				          int k;
				          for(k=0;k<11;k++)
				          {
				             selected[k]=50;
				          }
			i=0;
			actr[0]="DHARMENDRA";
			actr[1]="SALMANKHAN";
			actr[2]="AMIRKHAN";
			actr[3]="TOMCRUISE";
			actr[4]="WILLSMITH";
			actr[5]="BRADPITT";
			actr[6]="JOHNYDEPP";
			actr[7]="JACKIECHAN";
			actr[8]="MORGANFREEMAN";
			actr[9]="CHRISPRATT";
		}
		string selectactor()
		{
			string x;
			int random,j;
			abc:
			random=rand()%10;
			if(i==0)
			{
				selected[i++]=random;
				return actr[random];
			}
			else
			{
					for(j=0;j<i;j++)
					{
						if(selected[j]==random)
						{
							goto abc;
						}
					}
							selected[i++]=random;
							return actr[random];
			}
		}
	};
	class Actress
	{
			int selected[10];
			int i;
			string actress[10];
		public:
			string s;
			Actress()
			{
				s="ACTRESS";
    		int k;
    		for(k=0;k<11;k++)
    		{
        		selected[k]=50;
    		}
				i=0;
				actress[0]="MEGANFOX";
				actress[1]="EMMAWATSON";
				actress[2]="NATALIEPORTMAN";
				actress[3]="NICOLEKIDMAN";
				actress[4]="DAKOTAJOHNSON";
				actress[5]="EMMASTONE";
				actress[6]="DIPIKAPADUKONE";
				actress[7]="JACQUELINEFERNANDEZ";
				actress[8]="ILLEANADCRUZ";
				actress[9]="KRITISANON";
			}
			string selectactress()
			{
				string x;
				int random,j;
				abc:
				random=rand()%10;
				if(i==0)
				{
					selected[i++]=random;
					return actress[random];
				}
				else
				{
						for(j=0;j<i;j++)
						{
							if(selected[j]==random)
							{
								goto abc;
							}
						}
								selected[i++]=random;
								return actress[random];
				}
			}
	};

	void selecttype()
	{
		int r;
		Moviecharacter ob0;
		Tvwebseries ob1;
		Movies ob2;
		Books ob3;
		Actress ob4;
		Actor ob5;
		r=rand()%6;
		switch(r)
		{
		case 0:
			originalanswer=ob0.selectmoviecharacter();
			type=ob0.s;
			break;
		case 1:
			originalanswer=ob1.selectTvwebseries();
			type=ob1.s;
			break;
		case 2:
			originalanswer=ob2.selectMovies();
			type=ob2.s;
			break;
		case 3:
			originalanswer=ob3.selectbook();
			type=ob3.s;
			break;
		case 4:
			originalanswer=ob4.selectactress();
			type=ob4.s;
			break;
		case 5:
			originalanswer=ob5.selectactor();
			type=ob5.s;
			break;
		}
	}
	void initialisedisplay()
	{
		int j;
		l=originalanswer.length();
		for(j=0;j<l;j++)
			{
				display[j]='_';
			}
	}
	void inputs()
	{
		int j,count;
		char ch;
		string input;
		cin>>input;
		try
		{
			if(input.length()>1)
			{
				throw 1;
			}
			else
			{
				ch=input[0];
			}
		}
		catch(int x)
		{
			cout<<"Enter only one character"<<endl;
			inputs();
			return;
		}
		count=0;
			for(j=0;j<l;j++)
			{
				if(originalanswer[j]==ch)
				{
					display[j]=ch;
				}
				else
				{
					count++;
				}
			}
			if(count==l)
			{
				lifes--;
			}
	}
	void print()
	{
		system("clear");
		int j,count=0;
		cout<<"***Welcome To Hangman***"<<endl<<endl<<endl;
		cout<<"Type: "<<type<<endl;
		cout<<"Lifes Available:"<<lifes<<endl<<endl;
		for(j=0;j<l;j++)
		cout<<display[j]<<" ";
		cout<<endl;
		for(j=0;j<l;j++)
		if(display[j]==originalanswer[j])
		{
			count++;
		}
		if(count==l)
		{
			wincount++;
			cout<<"You Won The Game"<<endl;
			cout<<"Press Any Key To Go To Next Round"<<endl;
			cin.get();
			cin.ignore();
		}
		else
		{
			if(lifes==0)
			{}
			else
			{
				cout<<"Enter Character:";
				inputs();
			}
		}
	}
	void run()
	{
		do
		{
			selecttype();
			initialisedisplay();
			int x=wincount;
			while(x==wincount)
			{
				print();
				if(lifes==0)
				{	print();
					cout<<"You Lose"<<endl;
					cout<<"Want to play again(Y/N)"<<endl;
					cin>>status;
					if(status=='Y')
						{
						lifes=5;
						wincount=0;
						selecttype();
						initialisedisplay();
						}
					else
					{
						break;
					}

				}
			}
		}
		while(status=='Y');
		system("clear");
		cout<<"You Got "<<wincount<<" Correct Answer"<<endl;
		cout<<"**** Thank You For Playing ****"<<endl;
	}
};
int main()
{
srand(time(0));
hangman h;
h.run();
return 0;
}
