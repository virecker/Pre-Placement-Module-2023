class Solution {
public:
string addStrings(string s1, string s2) {
int i = s1.length()-1, j = s2.length()-1;
string str;
int carry = 0;
while(i >= 0 || j >= 0 || carry){
int a = (i >= 0) ? s1[i--] - '0' : 0;
int b = (j >= 0) ? s2[j--] - '0' : 0;
int sum = a + b + carry;
str.append(to_string(sum%10));
carry = sum / 10;
sum = sum % 10;
}
reverse(str.begin(), str.end());
return str;
}
};