## Memo Note  
---
  
## library 
  
|include|content|
|-------|-------|
|iostream|input/output basic stuffs|
|string|manage spaces and other string stuffs|
|cmath|complete the math basics with more math|
  

## Variables |  
  
A variable is just a data wich is supposed to change.  
When we declare one, it allocates its value somewhere in the cp memory with the value we assigned (unless we don't initialize the variable which isn't recommandable).  
  
### Variable types:  
|type name| exemple| description|
|---------|--------|------------|
|bool|true/false|boolean|
|char|abcd!?$@|character|
|int|-2147483648 to 2147483647| integer|
|unsigned int| 0 to 2147483647| integer positiv or null|
|double|1.5/58.964/...| float number|
|string|"i am a glorious learner"| sequence of caractere like a sentence for example|  
  
**two ways to define a variable**  
  
|type|name|(value);|  
|----|----|--------|
```int number(45);```  

|type|name|=|value;|
|----|----|-|------|
```int number = 45;```
  
**to define multiple variable with the same type**  
  
|type|name_1|(value),|name_2|(value),|name_3|(value);|
|----|------|-------|------|-------|------|-------|
  
```int a(3),b(-9),c(48);```  
  
**weird stuffs**  
It is also possible to assign multiple names to a singular variable (what for? 'dont know yet) like this:  
```
int userAge(16);
int& otherVarName(userAge);
```  
It's called a refference, and the type must be the same.  
cf: weird.cpp  
  
**constants**  
This a variable wich is not supposed to change. We declare it like a normal variable:  
`int const levelNumber(10);`  

**increment/decrement**  
`++varNum;` --> +1 added to varNum.  
`--varNum;` --> -1 substract to varNum.  
  
**other short path**  
`varNum /= 3` --> is divided by 3.  
`varNum += 3` --> add 3.
`varNum -= 3` --> substract 3.  
`varNum *= 3` --> multiply by 3.
  

## Input/output  
---
  
**to print on the screen:** --> ```cout << "something";```  
**to ask and store an input:** --> ```cin >> variableName;```  
  
**PBM with spaces !** when we store a string the cp doesnt stop before the first space. To solved it, we can use `getline()`.  
```
string userName("first last")
cout << "what's your full name? \n"  
getline(cin, userName);
```  
[NB] I met an issue on this topic about data cut because of the getline() instruction.
It apears i should add `cin.ignore();` after each `cin >> stuffs;`, to be sure the buffer doesnt store any hidden `\n` or spaces.  
  
## Operator  
---  
  
|symb|operation|
|----|---------|
|+|add|
|-|substract|
|*|multiply|
|/|divise|
|%|modulo|  
  
[Warning] We don't get the entire result if we divide int variable when the result is supposed to be double. remember to use double when we have to divide, just in case.  
  
Cf: "basic_calculator.cpp" little personal project.  
  
### Other Math operator |  
  
|operation|expression|synthax|example|
|---------|----------|-------|-------|
|roots|sqrtx|sqrt()|res = sqrt(n);|
|sinus|sin(x)|sin()|res = sin(n);|
|cosinus|cos(x)|cos()|res = cos(n)|
|exponent| Ex|exp()|res = exp(n)|
|...|...|...|...|
  
[NB] Singular case for power expression:  
  
I've to initialize 2 variables whose contain values we want to powerize.  
```
double const a(4), b(3);
double const res= pow(a, b);
```  
## control structures.  
---
  same symbole than in C for conditions.  

*if structure* :  
  
```
if(condition){
    instruction;
}
else if(condition 2){
    instruction2;
}
else{
    default instruction;
}
```  
  
*switch structure* :  
  
```
int varName(2);
switch(varName){
    case 1:
        instruction;
        break;
    
    case 2:
        instruction2;
        break;
    
    case 3:
        instruction3;
        break;
    
    default:
        default instruction;
        break;
}
```  
  
*boolean* :  
  
```
bool solid(true);
if(solid == true){
    instruction;
}
```  
  
*combining* :  
  
|synthax| meanings|
|-------|---------|
| 2pipes | or |
| &&| and |
| ! | not |
  
*Loop* :  
  
<< while this condition is complete do something>> 
``` 
while(conditions)){
    instruction;
}
```  
  
<< do something one time at least before verifying the condition and 
then, do it again until the condition is complete>>
```
do{
    instruction;
}while(condition);
```
  
<<For, the all in one structure (initialization, condition and variable modification)>>  
```
int varNumber(0);
for(varNumber = 0, varNumber < 10, varNumber++){
    cout << "you're level" << varNumber << endl;
}
```
