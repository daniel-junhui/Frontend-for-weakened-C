 /*
  *  The scanner definition for seal.
  */

 /*
  *  Stuff enclosed in %{ %} in the first section is copied verbatim to the
  *  output, so headers and global definitions are placed here to be visible
  * to the code in the file.  Don't remove anything that was here initially
  */
%{

#include <seal-parse.h>
#include <stringtab.h>
#include <utilities.h>
#include <stdint.h>
#include <stdlib.h>

/* The compiler assumes these identifiers. */
#define yylval seal_yylval
#define yylex  seal_yylex

/* Max size of string constants */
#define MAX_STR_CONST 256
#define YY_NO_UNPUT   /* keep g++ happy */

extern FILE *fin; /* we read from this file */

/* define YY_INPUT so we read from the FILE fin:
 * This change makes it possible to use this scanner in
 * the seal compiler.
 */
#undef YY_INPUT
#define YY_INPUT(buf,result,max_size) \
	if ( (result = fread( (char*)buf, sizeof(char), max_size, fin)) < 0) \
		YY_FATAL_ERROR( "read() in flex scanner failed");

char string_buf[MAX_STR_CONST]; /* to assemble string constants */
char *string_buf_ptr;

extern int curr_lineno;
extern int verbose_flag;

extern YYSTYPE seal_yylval;

/*
 *  Add Your own definitions here
 */
int handleNotes();
void handleString();
bool processString();

%}

%option noyywrap 

 /*
  * Define names for regular expressions here.
  */
LITTLECHAR [a-z]

OTHERCHAR [_A-Z]

DIGIT [0-9]

FLOAT {DIGIT}+"."{DIGIT}* 

OBJECTID {LITTLECHAR}({LITTLECHAR}|{OTHERCHAR}|{DIGIT})*

TYPEID Int|Void|Float|Bool|String

HEX 0x[{DIGIT}abcdef]+

DEC {DIGIT}+

CONSTINT {HEX}|{DEC}

CONSTSTRING1 \"[^\"]*\"

CONSTSTRING2 `[^`]*`

CONSTSTRING {CONSTSTRING1}|{CONSTSTRING2}

BOOLEAN true|false

%%

 /*	
  *	Add Rules here. Error function has been given.
  */
" "
\t

var return (VAR);

if return (IF);

else return (ELSE);

while return (WHILE);

for return (FOR);

break return (BREAK);

return return (RETURN);

continue return (CONTINUE);

func return (FUNC);

struct return (STRUCT);

&& return (AND);

"||" return (OR);

== return (EQUAL);

!= return (NE);

>= return (GE);

"<=" return (LE);

; return ';';

= return '=';

"+" return '+';

- return '-';

"/" return '/';

\* return '*';

"<" return '<';

~ return '~';

, return ',';

: return ':';

"(" return '(';

")" return ')';

"{" return '{';

"}" return '}';

% return '%';

> return '>';

& return '&';

! return '!';

"\^" return '^';

"|" return '|';

\n curr_lineno++;

\/\/[^\n]* curr_lineno++;

\/\*[\/]*([^*/][\/]*|[\*]|[^*/])*\*\/ curr_lineno+=handleNotes();

\/\*[\/]*([^*/][\/]*|[\*]|[^*/])* {
  strcpy(seal_yylval.error_msg, "annotation unclosed! "); 
	return (ERROR); 
}

\"[^\"]*\\/\" {
  yymore();
}

{TYPEID} {
  seal_yylval.symbol = idtable.add_string(yytext); 
	return (TYPEID);
}

{BOOLEAN} {
  seal_yylval.boolean=yytext[0] == 't';
	return (CONST_BOOL);
}

{CONSTSTRING} {
  bool mask=yytext[0]=='\"';
  curr_lineno += handleNotes();
  handleString();
  if(mask&&processString()){
    strcpy(seal_yylval.error_msg, "String contains null character '\\0'");
    return (ERROR);
  }
  seal_yylval.symbol = stringtable.add_string(yytext); 
	return (CONST_STRING);
}

{OBJECTID} {
  seal_yylval.symbol = idtable.add_string(yytext);
  return (OBJECTID);
}

{FLOAT} {
  seal_yylval.symbol = floattable.add_string(yytext);
  return (CONST_FLOAT);
}

{CONSTINT} {
  seal_yylval.symbol = inttable.add_string(yytext);
  return (CONST_INT);
}

.	{
	strcpy(seal_yylval.error_msg, yytext); 
	return (ERROR); 
}

%%

int handleNotes(){
  int sum = 0;
  for(int i = 0;yytext[i] != '\0';++i){
    if(yytext[i]=='\n')
      sum++;
  }
  return sum;
}

bool processString(){
  int number=0;
  for(;yytext[number]!='\0';++number){
  }
  char* p;
  p = new char[number+1];
  number = 0;
  for(int i=0;yytext[i]!='\0';i++){
    if(yytext[i]=='\\'){
      i++;
      switch(yytext[i]){
        case '\0':goto End;
        case '0':return true;
        case 'n':{p[number]='\n';number++;break;}
        case 'a':{p[number]='\a';number++;break;}
        case 'b':{p[number]='\b';number++;break;}
        case 'f':{p[number]='\f';number++;break;}
        case 'r':{p[number]='\r';number++;break;}
        case 't':{p[number]='\t';number++;break;}
        case 'v':{p[number]='\v';number++;break;}
        case '\n':{p[number]='\n';number++;break;}
        case '\\':{p[number]='\\';number++;break;}
        case '\"':{p[number]='\"';number++;break;}
        default: p[number]=yytext[i];number++;
      }
    }
    else{
      p[number]=yytext[i];
      number++;
    }
  }
  p[number]='\0';
  End:
    yytext = p;
    return false;
}

void handleString(){
  char val = yytext[0];
  if(val=='`'){
    int i;
    for(i=1;yytext[i]!='`';++i){
      yytext[i-1]=yytext[i];
    }
    yytext[i-1]='\0';
  }
  else{
    int i=1;
    while(true){
      if(yytext[i]=='\"'&&yytext[i-1]!='\\') break;
      yytext[i-1]=yytext[i];
      i++;
    }
    yytext[i-1]='\0';
  }
}
