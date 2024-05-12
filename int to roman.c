char* intToRoman(int num) {
    int i;
    int values[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    char* symbols[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    char* result=(char*)malloc(20* sizeof(char));
    result[0]=NULL;
    for(i=0;i<13;i++)
    {
        while(num>=values[i])
        {
            strcat(result,symbols[i]);
            num-=values[i];
        }
    }   
    return result;
}