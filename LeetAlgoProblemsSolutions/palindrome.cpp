// For example, it is a palindrome, if it is written forward 
// and backward the same. "abcdcba" is a palindrome

//Palindrome using loop
bool isPalindrome(string str)
{
    string reverseSt = "";
    for(int i=str.length()-1; i>=0; i--){
        reverseSt += str[i];    
    }
    return reverseSt == str;
}


// Using reverse function
bool isPalindrome(string str)
{
    string reverseSt = "";
    reverseSt = str;
    cout << "str: " << str << endl;
    reverse(reverseSt.begin(), reverseSt.end());
    
    cout << "reverseSt : " << reverseSt << endl;
    
    /*if(reverseSt == str)
        cout <<"Palindrome";
    else
        cout << "not Palindrome" << endl;*/
    
    return reverseSt == str;
}
