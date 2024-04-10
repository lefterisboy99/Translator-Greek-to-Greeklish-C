#include <stdio.h>
#include<stdlib.h>

char ascii_let[256][3];
enum katastaseis{any, M_cap, N_cap, m_small, n_small}katastasi;
void print_the_letter(int c);

void gemismapinaka()
{
	 char head[] = "AVGDEZH8IKLMNQOPRSSTUFXYW";
	 char smalls[] = "avgdezh8iklmnqoprsstufxyw";
    int i = 0,j;
        for(i = 0; i < 256; i++)
    {
                ascii_let[i][0] = i;
                /*printf("lala%c",ascii_let[i][0]);*/
                ascii_let[i][1] = '\0';
                ascii_let[i][2] = '\0';
        }

	 j=0;
        for(i = 193; i <218; i++)
    {
                ascii_let[i][0] = head[j];
                j++;
        }
j=0;
        for(i = 225; i < 250; i++)
    {
                ascii_let[i][0] = smalls[j];
                j++;
        }

   
/*to 34 einai o tonos "  '  "*/
/*to 39 einai ta dialitika "  ''  "*/
        ascii_let[218][0] = 'I';
        ascii_let[218][1] = 34;
        ascii_let[219][0] = 'Y';
        ascii_let[219][1] = 34;
        ascii_let[250][0] = 'i';
        ascii_let[250][1] = 34;
        ascii_let[251][0] = 'u';
        ascii_let[251][1] = 34;
        ascii_let[192][0] = 'i';
        ascii_let[192][1] = 39;
        ascii_let[192][2] = 34;
        ascii_let[224][0] = 'u';
        ascii_let[224][1] = 39;
        ascii_let[224][2] = 34;

        ascii_let[238][0] = 'k';
        ascii_let[238][1] = 's'; 
        ascii_let[248][0] = 'p';
        ascii_let[248][1] = 's'; 

        ascii_let[206][0] = 'K';
 	 ascii_let[206][1] = 'S'; 
        ascii_let[216][0] = 'P';
        ascii_let[216][1] = 'S'; 
        ascii_let[182][0] = 39;
    ascii_let[182][1] = 'A';
        ascii_let[184][0] = 39;
        ascii_let[184][1] = 'E';
        ascii_let[185][0] = 39;
        ascii_let[185][1] = 'H';
        ascii_let[186][0] = 39;
        ascii_let[186][1] = 'I';
        ascii_let[188][0] = 39;
        ascii_let[188][1] = 'O';
        ascii_let[190][0] = 39;
        ascii_let[190][1] = 'Y';
        ascii_let[191][0] = 39;
  ascii_let[191][1] = 'W';
        ascii_let[220][0] = 'a';
        ascii_let[220][1] = 39;
        ascii_let[221][0] = 'e';
        ascii_let[221][1] = 39;
        ascii_let[222][0]  = 'h';
     ascii_let[222][1] = 39;
        ascii_let[223][0] = 'i';
        ascii_let[223][1] = 39;
        ascii_let[252][0] = 'o';
        ascii_let[252][1] = 39;
        ascii_let[253][0] = 'u';
        ascii_let[253][1] = 39;
        ascii_let[254][0] = 'w';
        ascii_let[254][1] = 39;
}


enum katastaseis defalt(int c)
{
	if(c==204)/*M elliniko*/
		return M_cap;
		else if(c==237) return n_small;/*n elliniko*/
	else if(c==236)  return m_small;/*m elliniko*/
	else if(c==205)  return N_cap;/*N elliniko*/
	
	else{
		 print_the_letter(c);/*einai se mia katastasi h opoia einai 1 gramma to opoio den thelei fsm apla na to typosoyme me vasi ton pinaka*/
                        return any;
	}
  
}

enum katastaseis N(int c)
{

                if(c== 212){/*T elliniko*/
                        print_the_letter(68); /* D elliniko*/
                        return any;
                       }
               else if(c== 244){/*t elliniko*/
                        print_the_letter(68);
                        return any;
                       }
		        else  if(c==237){/*n elliniko*/
                        print_the_letter(205); /* N elliniko*/
                        return n_small;
                       }
              else  if(c== 204){/*M elliniko*/
                        print_the_letter(205); /* N elliniko*/
                        return M_cap;
                        }
              else  if(c==205){/*N elliniko*/
                        print_the_letter(205); /* N elliniko*/
                        return N_cap;
                        }
             
               else if(c== 236){/*m elliniko*/
                        print_the_letter(205); /* N elliniko*/
                        return m_small;
                      }
                else{
                        print_the_letter(205); /* N elliniko*/
                        print_the_letter(c);
                        return any;
                       }
	
}


enum katastaseis M(int c)
{
	
    
         if(c==208){/*P elliniko*/
                        print_the_letter(66); /*B elliniko*/
                        return any;
	}
	else if(c==236){/*m*/
                        print_the_letter(204); /* M */
                        return m_small;
		}
                else if(c==205){/*N*/
                        print_the_letter(204); /* M*/ 
                        return N_cap;
                        }
   		else if(c== 237){/*n*/
                        print_the_letter(204); /* M*/ 
                        return n_small;
                        }
               else if(c==240){/* p*/
                        print_the_letter(66); /* B*/ 
                        return any;
		}
               else if(c==204){/*M*/
                        print_the_letter(204); /* M*/ 
                        return M_cap;
		}
               
                else{
                        print_the_letter(204); /* M */
                        print_the_letter(c);
                        return any;
                       }
        }
enum katastaseis m(int c)
{
       
                if(c==208){/*P*/
                        print_the_letter(98); /* b*/
                        return any;
                        }
			else  if(c== 204){/*M*/
                        print_the_letter(236); /* m*/ 
                        return M_cap;
                       }
                else if(c== 236){/*m*/
                        print_the_letter(236); /* m*/ 
                        return m_small;
                      }
                else if(c==205){/*N*/
                        print_the_letter(236); /* m*/ 
                        return N_cap;
		 }
             else if(c==240){/* p*/
                        print_the_letter(98); /* b*/
                        return any;
	      }
               else if(c==237){/*n*/
                        print_the_letter(236); /* m*/ 
                        return n_small;
                       }
                else{
                        print_the_letter(236); /* m*/ 
                        print_the_letter(c);
                        return any;
                        }
        
}


enum katastaseis n(int c)
{
        
                if(c==212){/*T*/
                        print_the_letter(100); /* d*/
                        return any;
                      }
              else  if(c==244){/*t*/
                        print_the_letter(100); /* d*/
                        return any;
                     }
		      else if(c==205){/*N*/
                        print_the_letter(237); /* n*/
                        return N_cap;
                        }
               else if(c==237){/*n*/
                        print_the_letter(237); /* n*/ 
                        return n_small;
                        }
              else if(c==204){/*M*/
                        print_the_letter(237); /* n*/
                        return M_cap;
                        }
              else  if(c==236){/*m*/
                        print_the_letter(237); /* n*/
                        return m_small;
                        }

                else{
			print_the_letter(237); /* n*/
                        print_the_letter(c);
                        return any;
                        }

}

void print_the_letter(int c)
{
    if(ascii_let[c][0] != '\0')
                putchar(ascii_let[c][0]);

        if(ascii_let[c][1] != '\0')
                putchar(ascii_let[c][1]);

        if(ascii_let[c][2] != '\0')
                putchar(ascii_let[c][2]);
}
enum katastaseis (*action[])(int c) =  {defalt,M,N,m,n};

int main()
{
int c;
    katastasi = any;/*arxikh katastash*/
        gemismapinaka();
    while((c = getchar())!=EOF)
    {
	/*printf("%d",c);*/
                katastasi = (action[katastasi])(c);
             /* printf("%s",katastasi);*/
        }
  /*   printf("%c",c);*/
return 0;
}

