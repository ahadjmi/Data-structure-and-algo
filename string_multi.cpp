string multiplyStrings(string s1, string s2) {
   //Your code here
   long long int sum1=0;
   long long int sum2=0;
   
   long int i=0;
   
   while(s1[i]!='\0')
   {
      long long int k=s1[i]-'0';
       
       sum1= sum1*10 + k;
       i++;
   }
   
   i=0;
   while(s2[i]!='\0')
   {
      long long  unsigned int k=s2[i]-'0';
       
       sum2= sum2*10 + k;
       
       i++;
   }
   
   long long unsigned int mul = sum1*sum2;
   
   string str = to_string(mul);
   return str;
}

