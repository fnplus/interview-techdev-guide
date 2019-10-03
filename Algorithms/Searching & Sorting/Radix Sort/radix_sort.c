#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void convert_to_ASCII( int n, char arr[][7], char brr[][19] )
{


for( int i = 0 ; i < n ; i++ )
	for( int j = 0 ; arr[i][j] != '\0' ; j++ )		
		{	
			int x = ( int )( arr[i][j] ) ;
			char y[32];
			
			sprintf(y, "%d", x);
			
			
			if( strlen( y ) == 2 )
				{
					int i;
					
					for( i = 2 ; i > 0 ; i-- )
						y[ i ] = y[ i-1 ];
					
					y[ i ] = '0';
				
				}
				
						
			if( j == 0 )	
				strcpy( brr[i], y) ;
		
			else
				strcat( brr[i], y);
		
		}

}








void radix( int n  ,char arr[][27]  )
{
	for( int i = 25 ; i >= 0 ; i--  )
		{
		
		char out[n][27];
		int cnt[10] = {0} ;
		
		int j;
		
		for( j = 0 ; j < n ; j++ )
			cnt[ arr[j][i] - '0' ]++;
		
		
		
		for( j = 1 ; j < 10 ; j++ )
		cnt[j] += cnt[j-1];
		
		
		
		for( j = n -1; j >= 0 ; j-- )
		{
		
		strcpy( out[ cnt[ arr[j][i] - '0' ] -1 ], arr[j] ); 
		cnt[ arr[j][i] - '0' ]--;
		
			
		}
		
		for( j = 0 ; j < n ; j++ )	
			strcpy(arr[j], out[j] );
		
		
		
		
		}

}








int main( )
{


char arr[7][7] = {	
			"we\0",
			"are\0",
			"trying\0",
			"to\0",
			"sort\0",
			"the\0",
			"words\0"   
				    	  
		};
		

char brr[7][19];

convert_to_ASCII(7, arr ,brr);




char date[][27] = {

		"14032018\0",
		"20011876\0",
		"23121947\0",
		"28022000\0",
		"01012012\0",
		"08051934\0",
		"16091999\0"		
		
		};
		
		
	
for( int i = 0 ; i < 7 ; i++ )
	strcat( date[i], brr[i]  );






for( int i = 0 ; i < 7 ; i++ )
	{
		if( strlen( date[i] ) != 26 )
			{	
				int j ;
				
				for( j = strlen( date[i] ) ; j < 26  ; j++ )	
					date[i][j] = '0' ;
				
				date[i][j] = '\0' ;
			
			} 	

	}





for( int i = 0 ; i < 7 ; i++ )
{
	for( int j = 0 ; date[i][j] != '\0' ; j++ )
		printf("%c", date[i][j]);
		
			
	printf("\n\n\n");
}



printf("\n\nAfter radix sort we get\n\n\n\n");



radix(7, date);



for( int i = 0 ; i < 7 ; i++ )
{
	for( int j = 0 ; date[i][j] != '\0' ; j++ )
		printf("%c", date[i][j]);
		
			
	printf("\n\n\n");
}




return 0;

}
