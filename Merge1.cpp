#include <iostream>
using namespace std;

int tab[]= {12, 1, 66, 13, 18, 23, 77, 19, 1, 91, 65, 79, 86, 6}; //14
int tab2[14];
void wyswietl(int a, int b)
{
	cout<<"Tutaj wazna funkcja!!! "<<a<< " oraz: "<<b<<endl;
}


void Scal(int a, int b, int c)
{
	int i, j, x;
	bool pom=false;
	i=a, j=b+1;
	if((a<=b) && (b<=c) && (a<c)) 
	{
		
		for(x=a;;x++)
		{
			if(tab[i]<tab[j]){tab2[x]=tab[i]; if(i<b){i++;}else{break;}}
			
			else{tab2[x]=tab[j]; if(j<c){j++;}else{break;}}
			
		}
		//tu mamy pewnoœæ, ¿e i=b lub j=c
		if((i==b) && (j==c))pom=true;
		x++;
	
	
	
	if(pom) //gdy jednoczeœnie i=b oraz j=c !!!!
	{
		
		if(tab[i]< tab[j] ){tab2[x]=tab[j]; }//tab2[x]=tab[j];}
		else {tab2[x]=tab[i];}// tab2[x]=tab[i];}
	} 
	else if(i==b)
	{
		while(j<=c) 
		{
			tab2[x]=tab[j];
			j++;x++;
		}
	}else if(j==c) 
	{
		
		while(i<=b)
		{
			tab2[x]=tab[i];
			i++;x++;
		}
	}
}
	//cout<<"Oto wartosc i oraz j: "<<i<<", "<<j<<endl;
	
	for(int z=a;z<=c;z++){tab[z]=tab2[z];}
	
}
void Merge(int p, int k)
{
	int i;

	if(p<k){
	i=(k+p)/2;
	Merge(p, i); Merge(i+1, k);Scal(p, i, k);
	}
}

int main()
{
	//tab2[7]=99;
	int rozm;
	//rozm=(sizeof(tablica)/sizeof(int));
	//cout<<"Oto rozmiar tablicy: "<<rozm<<endl;
	cout<<"Oto ciag przed posortowaniem: "<<endl;
	for(int i=0;i<14;i++)cout<<tab[i]<<", ";

	Merge(0, 13);
	cout<<"\nA oto ciag po posortowaniu: "<<endl;
	for(int i=0;i<14;i++)cout<<tab[i]<<", ";
	cout<<endl;
	//wyswietl(3/2,13/4);
	
	return 0;
}
