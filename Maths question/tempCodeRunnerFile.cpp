int i,n;
    cin>>n;
    int sahil=0;
   while(n>0){
       int lastdigit= n%10;
       sahil=sahil*10 +lastdigit;
       n=n/10;
       
   }
   cout<<sahil;