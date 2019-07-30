#include<iostream>
#include<stdio.h>
using namespace std;

class List{
	private:
		int n;
		long long item[100];
		double price[100],total;
	
	public:
		void makeItemPriceList(long long h,double k,int u){
			item[u]=h;		
			price[u]=k;		
		}
		void genTotal(long long h){
			int i;
			for(i=0;i<n;i++){
				if(h==item[i]){
					total+=price[i];
					break;
				}
			}
		}
		double checkOut(){
			return total;
		}
		List(int x){
			n=x;
		}
};
int main(){
	int a,b,i;
	long long h;
	double k;
	scanf("%d",&a);
	List lst(a);
	for(i=0;i<a;i++){
		scanf("%lld %lf",&h,&k);
		lst.makeItemPriceList(h,k,i);
	}
	cin>>b;
	for(i=0;i<b;i++){
		scanf("%lld",&h);
		lst.genTotal(h);
	}
	printf("%.1lf",lst.checkOut());
	return 0;
}
