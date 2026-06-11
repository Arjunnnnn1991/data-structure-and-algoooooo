class Solution {
public:
    string reverseVowels(string s) {
        int i=0,j=s.size()-1;
        while(i<j){
            char a=s[i]; 
            char b=s[j];
            if(a!='a'&&a!='e'&&a!='i'&&a!='o'&&a!='u'&&a!='A'&&a!='I'&&a!='U'&&a!='O'&&a!='E')i++;
           else if((b!='a'&&b!='e'&&b!='i'&&b!='o'&&b!='u'&&b!='A'&&b!='I'&&b!='U'&&b!='O'&&b!='E'))j--;
           else swap(s[i++],s[j--]);
        }
        return s;
    }
};
