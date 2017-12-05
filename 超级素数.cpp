#include<stdio.h>
#include<math.h>
#include<string.h>
char a[100000];  //char类型占用字节少 ， 定义在main外初始值默认为0 
int main(){
	int ans[1000];
	int f1, f2, f3, p = 0, sum = 0;
	
	for(int i = 2; i < 9999; i++){   //筛数法去掉非素数 
		if( !a[i] ){
			for(int j = 2 * i; j<= 9999; j = i + j){
			     a[j] = 1;
		    }
		}
	}
	
	for(int k = 100; k <= 9999; k++){
		f1 = 1, f2 = 1, f3 = 1;
		if(a[k] == 0 && k <=999){
			for(int h = 2; h <= sqrt(k / 100 + k % 100 / 10+ k % 10); h++){
				if((k / 100 + k % 100 / 10+ k % 10) % h == 0){
					f1 = 0;
					break;
				}
			}
			if(f1 == 1){
				for(int h = 2; h <= sqrt((k / 100) * (k % 100 / 10) * (k % 10)); h++){
					if((k / 100) * (k % 100 / 10) * (k % 10) % h == 0){
						f2 = 0;
						break;
					}
				}
				if(f2 == 1){
					for(int h = 2; h <= sqrt(pow((k / 100), 2) + pow((k % 100 / 10), 2) + pow((k % 10), 2)); h++){
						if((int)(pow((k / 100), 2) + pow((k % 100 / 10), 2) + pow((k % 10), 2)) % h == 0){
							f3 = 0;
							break;
						}
					}
				}
			}
		    if(f1 == 1 && f2 == 1 && f3 == 1){
			   ans[p] = k;
			   p++;
		    }	
		}else{
			if(a[k] == 0 && k >= 1000){
				for(int h = 2; h <= sqrt(k / 1000 + k % 1000 / 100 + k % 100 / 10+ k % 10); h++){
			    	if((k / 1000 + k % 1000 / 100 + k % 100 / 10+ k % 10) % h == 0){
					   f1 = 0;
					   break;
				    }
			    }
			    if(f1 == 1){
				    for(int h = 2; h <= sqrt((k / 1000) * (k %1000 / 100) * (k % 100 / 10) * (k % 10)); h++){
					    if((k / 1000) * (k %1000 / 100) * (k % 100 / 10) * (k % 10) % h == 0){
						   f2 = 0;
						   break;
					    }
				    }
				    if(f2 == 1){
					    for(int h = 2; h <= sqrt(pow((k / 1000), 2) + pow((k % 1000 / 100), 2) + pow((k % 100 / 10), 2) + pow((k % 10), 2)); h++){
						    if((int)(pow((k / 1000), 2) + pow((k % 1000 / 100), 2) + pow((k % 100 / 10), 2) + pow((k % 10), 2)) % h == 0){
							   f3 = 0;
							   break;
						    }
					    }
				    }
			    } 
		        if(f1 == 1 && f2 == 1 && f3 == 1){
			       ans[p] = k;
			       p++;
		        }		
		    }
	    }
	}
	for(int g = 0; g <= p - 1; g++){
       sum += ans[g];
	}
	printf("[100,9999]之内超级素数的个数:%d\n",p);
	printf("[100,9999]之内超级素数的和:%d\n",sum);
	printf("[100,9999]之内最大的超级素数:%d\n",ans[p - 1]);
	
	return 0;
}
