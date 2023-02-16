    #include<stdio.h>
    int gcd(int a,int b){
    	if(b==0){
    		return a;
		}
		else
		return gcd(b,a%b);
	}
    
    int main(){
    	int n1,n2,result,lcm;
    	scanf("%d%d",&n1,&n2);
    	result=gcd(n1,n2);
    	lcm=(n1*n2)/result;
    	printf("G.C.D of %d and %d =%d\n",n1,n2,result);
    	printf("L.C.M of %d and %d =%d",n1,n2,lcm);
    	return 0;
    }
