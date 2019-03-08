  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      /*  sütün yer değiştirme
      if(j==s1){
        temp=a2[i][s1];
        a2[i][s1] = a2[i][s2];
        a2[i][s2] = temp;  
      }
      */
     /* satır yer değiştirme */
      if(i==s1){
        temp=a2[s1][j];
        a2[s1][j] = a2[s2][j];
        a2[s2][j] = temp;  
      }
    
    }
  }
