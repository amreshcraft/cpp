// switch expression must be a char, int , enum type
//  expression cannot be a float or string 

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char c;
    cin>>c;
    switch (c)
    {
    case 'a' : 
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'O':
    case 'o':
    case 'u':
    case 'U':
    cout<<"Vowel"<<endl; 
    break;
    
    default:
        cout<<"consonant"<<endl;
        break;
    }
    return 0;
}
