/**
*@file Task3_z_26
*@brief solution (C++ code) of Task3.26 GL 
* Розробити функцію, яка здійснює сортування одновимірного масиву цілих чисел у порядку спадання. 
* На основі розробленої функції відсортувати за спаданням значень елементи  кожного рядка введеної матриці цілих чисел.
*
*Copyright 2014 by Roman Bojko
*/
#include<iostream>
#include <ctime> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ukrainian" );
	srand(time(0));
	
    int const row = 4, col = 4;
	
	int a[row][col];

	cout <<"Невідсортована Матриця\n"<<endl;	
	for( int i = 0; i < row; i++ )
	{
		for( int j = 0; j < col; j++ )
		{
			a[i][j] = rand()%10;
			cout<<a[i][j]<<" ";
		}
		cout<<'\n';
	}

	cout<<"-------------\n";
	int b; 
	cout << "Якщо натиснете 1 матриця буде відсортована за спаданням значень елементів кожного рядка  "<<endl;
	cout << "Якщо натиснете 2 матриця буде відсортована за зростанням  значень елементів кожного рядка : ";
	cin >> b;

	switch(b){
	   case 1:
		   cout<<"-------------\n";
		   cout <<"Матриця відсортована за спаданням елементів кожного рядка \n"<<endl;
		   for(int i = 0; i < row; ++i)
	{	
		for( int t = 0; t < col; ++t )
		{
			for( int j = 0; j < col - 1; ++j )
			{
				if( a[i][j] < a[i][j + 1] )
				{
					int tmp = a[i][j];
					a[i][j] = a[i][j + 1];
					a[i][j + 1] = tmp;
				}
			}
		}
	}

	for( int i = 0; i < row; i++ )
	{
		for( int j = 0; j < col; j++ )
		{
			cout<<a[i][j]<<" ";
		}
		cout<<'\n';
	}
	break;
	   case 2:
		    cout<<"-------------\n";
		    cout <<"Матриця відсортована за зростанням елементів кожного рядка \n"<<endl;
		   for ( int i = 0; i < row; i++ )
		   {
			   for ( int j = 0; j < col; j++ )
			   {
				   for ( int k = col - 1; k > j; k-- )
					   if ( a[i][k] < a[i][k - 1] )
					   {
						   int tmp = a[i][k];
						   a[i][k] = a[i][k - 1];
						   a[i][k - 1] = tmp;
					   }
			   }
		   }
		   for( int i = 0; i < row; i++ )
		   {
			   for( int j = 0; j < col; j++ )
			   {
				   cout<<a[i][j]<<" ";
			   }
			   cout<<'\n';
		   }
		break;
	   default:
		   cout<<"-------------\n";
		   cout<<"Поганий вибір"<<endl;
		   system("PAUSE");
		   exit(1);
	}

	system("PAUSE");
	return 0;

}

