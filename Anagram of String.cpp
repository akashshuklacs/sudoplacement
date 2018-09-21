int remAnagram(string str1, string str2)
{
// Your code goes here
    int a1[27]={0};
    int a2[27]={0};
    int s1=str1.length();
    int s2=str2.length();
    int sum=0;
    
    for(int i=0;i<s1; i++)
        a1[str1[i]-'a']++;
    for(int i=0;i<s2; i++)
        a2[str2[i]-'a']++;
    for(int i=0; i<26; i++)
    {
        
        sum+=abs(a1[i]-a2[i]);
    }
    return sum;

}
