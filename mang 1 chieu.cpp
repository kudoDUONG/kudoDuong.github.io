// there  are two style  sign in c++ program  
// xau ki tu bang mang kieu charr
//xau ki tu bang mang kieu  string 
/*
bieu  di xau ki tu bang mang kieu charr trong bieu dien nay moi xau ki tu la
mang mot chieu  gom cac phan tu kieu char  va ket thuc  boi ki tu null'\0'
vi du  mot  xau ki tu  co the  khai  bao theo hai cach 
char xau [6] ={'h','e','l','l'.'o','\0'};
char xau[]="hello";


Ngôn ngu C++ cung cap mot so hàm de xu lý trên xâu kí tu nhu sau

strcpy(s1, s2); Sao chép chuoi s2 cho chuoi s1.
strcat(s1, s2); Noi chuoi s2 vào cuoi chuoi s1.
strlen(s1); Tra ve do dài cua chuoi s1.
strcmp(s1, s2); Tra ve 0 neu s1 và s2 là nhu nhau; nho hon 0 neu s1<s2; lon hon 0 neu s1>s2

#include 
#include 

using namespace std;

int main ()
{
   char str1[10] = "Hello";
   char str2[10] = "Christmas";
   char str3[10];
   int  len ;

   // sao chep str1 vao trong str3
   strcpy( str3, str1);
   cout << "strcpy( str3, str1) : " << str3 << endl;

   // noi hai xau: str1 va str2
   strcat( str1, str2);
   cout << "strcat( str1, str2): " << str1 << endl;

   // do dai cua str1 mot sau khi thuc hien noi xau
   len = strlen(str1);
   cout << "strlen(str1): " << len << endl;

   return 0;
}



ket qua  cua chuong trinh tren la

strcpy( str3, str1) : Hello
strcat( str1, str2): HelloWorld
strlen(str1) : 10





ngoai cah  bieu dien  xau bang mang  cac phan tu  char  con co the bieu dien  bang string 
de khai báo  su  dung  cu  phap 
string ten_xau_ki_tu;
vi du
string xau="hello";
thu  vien string  ho tro  tat ca các thao tác  su  ly  tren mau  va bo  sung them mot so tinh  nang 


vi du 
#include 
#include 

using namespace std;

int main () {

   string str1 = "Hello";
   string str2 = "World";
   string str3;
   int  len ;

   // sao chep str1 vao trong str3
   str3 = str1;
   cout << "str3 : " << str3 << endl;

   // noi 2 xau str1 va str2
   str3 = str1 + str2;
   cout << "str1 + str2 : " << str3 << endl;

   // do dai xau str3
   len = str3.length();
   cout << "str3.length() :  " << len << endl;

   return 0;
}


ket  qua  
str3 : Hello
str1 + str2 : HelloWorld
str3.size() :  10
*/
//bai tap  : cho  2 xau ki tu  s va t  co cung do dai  .viet chuong trinh  dem so luong vi tri  i  sao cho s[i]=t[i]

*/ for example

Input	Result
abc123   
acb213
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t; 
    int count = 0;
    for (std::string::size_type i = 0 ; i < s.length(); i++) {
        if (s[i] == t[i]) {
            count++; 
        }
    }
    cout  << count << endl;
    return 0;
}








