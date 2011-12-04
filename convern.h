// функци€ ditobi() - Decrimal Integer To Binary Integer переводит целое число,
// заданное в 10-й форме, в целое 2-е число. параметр num - целое 10-е число
// дл€ преобразовани€. параметр s - указатель на строку с целым 2-й числом.
void ditobi( int num, char* s )
{
   int i = 0;
   if ( num )
     for( ; num!= 0; i++ )
     {
         if( num % 2 )
            s[i] = '1';
         else
            s[i] = '0';
         num/= 2;
     }
   else
      s[i++] = '0';
   s[i] = '\0';
}

// функци€ exchs() - Exchange String переписывает строку задом на перед.
// параметр str - строка, дл€ обработки.
void exchs( char *str )
{
   int j, i = strlen( str ) - 1;
   char sBuf[33], *s = sBuf;

   for( j = 0; i > -1; j++, i-- )
      s[j] = str[i];

   s[j] = '\0';
   sprintf( str, "%s", s );
}

// функци€ добавл€ет( убирает ) нули, чтобы строка была длиной в noe.
void AddZero( char* s, int noe )
{
   char sBuf[80], *buf = sBuf;
   int i, k = 0, j = strlen( s );

   if( j > noe )
   {
      for( i = strlen( s )-1; k < noe; i--, k++ )
         buf[k] = s[i];

      buf[k] = '\0';
      exchs( buf );
      sprintf( s, "%s", buf );
      return ;
   }
   else
      if( j == noe )
         return ;

   sprintf( buf, "%s", s );
   j = noe - j;
   for( i = 0; i < j;  i++ )
      s[i] = '0';

   s[i] = '\0';
   strcat( s, buf );
}
