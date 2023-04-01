bool check(int x, int y, int z){
    int a = max(x, max(y,z));
    int b, c;
    if(a==x){
        b=y;
        c=z
    }

}
int32_t main() {
    int x,y,z;
    cin>> x >> y >> z;

    if(check(x,y,z))
    {
        cout<<"Pythagorian triplets";
    }
    else{
        cout<<"Not a pythagorian triplate";
    }
}