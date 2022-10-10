int lengthOfLastWord(char * s){
    int i;
    int k=0;
    for (i = 0; s[i] != '\0'; ++i);

    for(int j=i; j>=0; j--){
        if(s[j]!='\0'&&s[j]!=' '){
            k++;
        }

        else if(s[j]==' ' && k>0){
            break;
        }
    }
    return k;
}
