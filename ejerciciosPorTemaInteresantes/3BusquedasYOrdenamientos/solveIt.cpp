/*
- Deja ir el pasado y camina hacia el futuro.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Del fracaso se aprende, del éxito no mucho.
- Para sentirse vivo se necesita una meta en la que trabajar.
- ¡Demonios Rocky! No hay ningún mañana.
*/

#include <bits/stdc++.h>

using namespace std;

double p,q,r,s,t,u; 
double calc(double x){
	double res = p*exp(-x)+q*sin(x)+r*cos(x)+s*tan(x)+(t*x*x)+u;
	return res;
}
signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	while(cin>>p>>q>>r>>s>>t>>u){
		bool flag = true;
		double a = 0.0,b = 1.0;
		double x =(a+b)/2.0;		
		
		if(flag){
			while(fabs(b-a) > 0.000000001){
				if(fabs(calc(a)) < 0.000000001){
					cout<<fixed<<setprecision(4)<<a<<endl;
					flag = false;
					break;
				}
				if(fabs(calc(b)) < 0.000000001){
					cout<<fixed<<setprecision(4)<<b<<endl;
					flag = false;
					break;
				}
				if(calc(a)*calc(b) > 0){
					cout<<"No solution"<<endl;
					flag = false;
					break;
				}
				x = (a+b)/2.0;
				if(fabs(calc(x)) < 0.000000001){
					cout<<fixed<<setprecision(4)<<x<<endl;
					flag = false;
					break;
				}
				if(calc(x)*calc(a) < 0){
					b = x;
				}else if(calc(x)*calc(b) < 0){
					a = x;
				}	
			}
		}
		if(flag) cout<<fixed<<setprecision(4)<<x<<endl;
	}

    return 0;
}

//                   :-==-.                     .:..                   
//                .+%@@@@@@#-                -*%@@@@#+.                            
//              .%@@@@@@@@@@%*=--:.....::--+#@@@@@@@@@@@=              
//              +@@@@@@@%-.                 .-%@@@@@@@%              
//              +@@@@@%=.                       .=%@@@@@@.             
//              -@@@@*.                           .+@@@@%              
//               +@@+    ..                         =@@%:              
//                -*  :%@@@.             :+#%#+.   +#:               
//                =. =@@@*=+@%            :%@##@@@+  .+                
//                + -@@@@.  #@:  :-----   *@=  +@@@+  +                
//               .+ #@@@@#+*@%.  *@@@@%.  +@#:-#@@@@: =.               
//               .=  @@@@@@@@+    .=*:     :@@@@@@@@= -:                             
//                + :*%@%:     .-=+--     :#@@%**+  +                
//                +.---:.                     .----- .=                                
//                 :=                               +.                 
//                    :=-.                     .-=:                                         
//                           .:-----------:.
