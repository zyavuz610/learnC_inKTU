int Zstrcmp(char *s1,char *s2){
  int i=0,fark;
  while(s1[i] != 0 && s2[i] !=0){
    //printf("%c - %c \n",s1[i],s2[i]);
    fark = s1[i] - s2[i];
    if(fark != 0){
      return fark;
    }
    i++;
  }
  return s1[i]-s2[i];
}
