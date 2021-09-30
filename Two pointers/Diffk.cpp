int soln(vector<int> a, int B){
int i=0,j=1,n=a.size();

while(i<n&&j<n){

if(a[j]-a[i]==B&&i!=j){

return 1;

}

if(a[j]-a[i]<B){

j++;

}

else{

i++;

}

}

return 0;
}
