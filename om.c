#define F1(type) typedef type (*type##f1)(type);
#define F2(type) typedef type (*type##f2)(type,type);
#define FOR PROFILE("\n_FOR_ ");for
#define FREE(memory) PROFILE("\n_FREE_ ");free(memory)
#define MAIN0(block) int main();
#define MAIN1(block) int main() block
#define NODE(type) typedef struct type##n{type value;struct type##n *next;} type##n;
#define POINTER(type) typedef type * type##p;
#define PROFILE(string) PROFILE1(string)
#define PROFILE0(string)
#define PROFILE1(string) printf(string)
#define RETURN(string,value) PROFILE("\n_RETURN_");PROFILE(string);PROFILE("_ ");return value
#define RETURN_MAIN(value) PROFILE("\n_RETURN_MAIN_ ");RETURN_MAIN1(value)
#define RETURN_MAIN0(value) return value
#define RETURN_MAIN1(value) if(value==0) return main();return value
#define TYPEDEF typedef char CH;typedef signed char SCH;typedef unsigned char UCH;typedef short SH;typedef unsigned short USH;typedef int IN;typedef unsigned int UIN;typedef long LO;typedef unsigned long ULO;typedef long long LL;typedef unsigned long long ULL;typedef float FL;typedef double DB;typedef long double LD;
#define WHILE PROFILE("\n_WHILE_ ");while
 
#define AddNumberToNumber0(type) type type##AddNumberToNumber(type number1,type number2);
#define AddNumberToNumber1(type) type type##AddNumberToNumber(type number1,type number2){RETURN("AddNumberToNumber",number1+number2);}
#define AddOneToNumber0(type) type type##AddOneToNumber(type number);
#define AddOneToNumber1(type) type type##AddOneToNumber(type number){PROFILE("\n_AddOneToNumber_ ");return number+1;}
#define AssignVariableTheValue(variable,value) PROFILE("\n_AssignVariableTheValue_ ");variable=value
#define ChangeLineBreakCharacterToSpace0 CH ChangeLineBreakCharacterToSpace(CH character);
#define ChangeLineBreakCharacterToSpace1 CH ChangeLineBreakCharacterToSpace(CH character){RETURN("ChangeLineBreakCharacterToSpace",(character==10||character==13)?32:character);}
#define CombineArrayWithFunctionAndFinalValue0(type) type type##CombineArrayWithFunctionAndFinalValue(type##p array,type##f2 function,type finalValue);
#define CombineArrayWithFunctionAndFinalValue1(type) type type##CombineArrayWithFunctionAndFinalValue(type##p array,type##f2 function,type finalValue){ULL i;AssignVariableTheValue(i,0);WHILE(array[i]!=0){IncrementVariable(i);}DecrementVariable(i);AssignVariableTheValue(array[i],(*function)(array[i],finalValue));WHILE(i>0){AssignVariableTheValue(array[i-1],(*function)(array[i-1],array[i]));DecrementVariable(i);}RETURN("CombineArrayWithFunctionAndFinalValue",array[0]);}
#define CopyString(string) CHpCopyString(string)
#define CopyString0 CHp CHpCopyString(CHp string);
#define CopyString1 CHp CHpCopyString(CHp string){CHp copy;ULL count;AssignVariableTheValue(count,strlen(string)+1);AssignVariableTheValue(copy,(CHp)malloc(count*sizeof(CH)));AssignVariableTheValue(count,0);WHILE(string[count]!=0){AssignVariableTheValue(copy[count],string[count]);IncrementVariable(count);}AssignVariableTheValue(copy[count],0);RETURN("CopyString",copy);}
#define DecrementVariable(variable) PROFILE("\n_DecrementVariable_ ");--variable
#define ExampleCombineArrayWithTypeAndLengthAndFormatString(type,length,formatString){type##p array;AssignVariableTheValue(array,(type##p)malloc(sizeof(type)*(length+1)));ULL i;FOR(i=0;i<length;++i){AssignVariableTheValue(array[i],1);}AssignVariableTheValue(array[i],0);type##f2 function;AssignVariableTheValue(function,&type##AddNumberToNumber);type sum;AssignVariableTheValue(sum,type##CombineArrayWithFunctionAndFinalValue(array,function,0));PrintWithFormatStringAndValue(formatString,sum);RETURN_MAIN(0);}
#define ExampleForLoopWithTypeAndStartAndStopAndFormatString(type,start,stop,formatString) {type i;FOR(i=start;i<=stop;++i){PrintString("hello: ");PrintWithFormatStringAndValue(formatString,i);PrintString("\n");}RETURN_MAIN(0);}
#define ExampleListWithType(type){type##np list;AssignVariableTheValue(list,type##PushWithValueAndList(124,NULL));AssignVariableTheValue(list,type##PushWithValueAndList(123,list));PrintWithFormatStringAndValue("%d\n",list->value);PrintWithFormatStringAndValue("%d\n",list->next->value);RETURN_MAIN(0);}
#define ExampleRemoveLineBreaks(string){CHp s;CHf1 function;AssignVariableTheValue(function,&ChangeLineBreakCharacterToSpace);AssignVariableTheValue(s,CopyString(string));AssignVariableTheValue(s,CHMapFunctionOverArray(function,s));PrintWithFormatStringAndValue("%s",s);FREE(s);RETURN_MAIN(0);}
#define ExampleString(string){ULL i;CH c;CHp s;CHf1 function;AssignVariableTheValue(function,&CHAddOneToNumber);AssignVariableTheValue(s,CopyString(string));AssignVariableTheValue(s,CHMapFunctionOverArray(function,s));AssignVariableTheValue(i,0);WHILE((c=s[i++])!=0){PrintWithFormatStringAndValue("%c\n",c);}FREE(s);RETURN_MAIN(0);}
#define IncrementVariable(variable) PROFILE("\n_IncrementVariable_ ");++variable
#define MapFunctionOverArray0(type) type##p type##MapFunctionOverArray(type##f1 function,type##p array);
#define MapFunctionOverArray1(type) type##p type##MapFunctionOverArray(type##f1 function,type##p array){ULL i;AssignVariableTheValue(i,0);WHILE(array[i]!=0){AssignVariableTheValue(array[i],(*function)(array[i]));IncrementVariable(i);}RETURN("MapFunctionOverArray",array);}
#define PrintString(string) PROFILE("\n_PrintString_ ");printf(string)
#define PrintWithFormatStringAndValue(formatString,value) PROFILE("\n_PrintWithFormatStringAndValue_ ");printf(formatString,value)
#define PushWithValueAndList0(type) type##np type##PushWithValueAndList(type value,type##np list);
#define PushWithValueAndList1(type) type##np type##PushWithValueAndList(type value,type##np list){type##np temp;AssignVariableTheValue(temp,(type##np)malloc(sizeof(type##n)));AssignVariableTheValue(temp->value,value);AssignVariableTheValue(temp->next,list);RETURN("PushWithValueAndList",temp);}
 
TYPEDEF
POINTER(ULL)
F2(ULL)
 
MAIN0(ExampleCombineArrayWithTypeAndLengthAndFormatString(ULL,10,"%llu"))
AddNumberToNumber0(ULL)
CombineArrayWithFunctionAndFinalValue0(ULL)
 
CombineArrayWithFunctionAndFinalValue1(ULL)
AddNumberToNumber1(ULL)
MAIN1(ExampleCombineArrayWithTypeAndLengthAndFormatString(ULL,10,"%llu"))
