## Memo Note  
---
  
## Variable |  
  
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
  
**two way to define a variable**  
  
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