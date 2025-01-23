/*
- Deja ir el pasado y camina hacia el futuro.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Del fracaso se aprende, del éxito no mucho.
- Para sentirse vivo se necesita una meta en la que trabajar.
- ¡Demonios Rocky! No hay ningún mañana.
*/

typedef long long ll;
#define srt(a) sort(a.begin(),a.end());
#include <bits/stdc++.h>


using namespace std;

struct pt {
	double x,y;
	pt() : x(0), y(0) {} 
	pt(double _x, double _y) : x(_x), y(_y) {} 
	pt operator+(pt p) {return {x+p.x, y+p.y};}
	pt operator-(pt p) {return {x-p.x, y-p.y};}
	pt operator*(double d) {return {x*d, y*d};}

	pt operator/(double d) {return {x/d, y/d};} 
};

double dot(pt v, pt w) {return v.x*w.x + v.y*w.y;}

bool above(pt a, pt p) {
	return p.y >= a.y;
}

double cross(pt v, pt w) {return v.x*w.y - v.y*w.x;}

bool inDisk(pt a, pt b, pt p) {
	return dot(a-p, b-p) <= 0;
}

double orient(pt a, pt b, pt c) {return cross(b-a,c-a);}

bool onSegment(pt a, pt b, pt p) {
	return orient(a,b,p) == 0 && inDisk(a,b,p);
}

bool crossesRay(pt a, pt p, pt q) {
	return (above(a,q) - above(a,p)) * orient(a,p,q) > 0;
}

int inPolygon(vector<pt> p, pt a ) {
	int numCrossings = 0;
	for (int i = 0, n = p.size(); i < n; i++) {
		if (onSegment(p[i], p[(i+1)%n], a))
			return -1;
		numCrossings += crossesRay(a, p[i], p[(i+1)%n]);
	}
	return numCrossings & 1; 
}

signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int n,m;cin>>n>>m;
	vector<pt>v(n);
	
	for(int i = 0; i<n;i++){
		int a,b; cin>>a>>b;
		v[i] = pt(a,b);
	}

	while(m--){
		int a,b;cin>>a>>b;
		pt pt1 (a,b);

		int res =  inPolygon(v,pt1);
		if(res == -1){
			cout<<"BOUNDARY"<<endl;
		}else if(res){ 
			cout<<"INSIDE"<<endl;
		}else{
			cout<<"OUTSIDE"<<endl;
		}

	}

    return 0;
}

//                   :-==-.                     .:..                   
//                .+%@@@@@@#-                -*%@@@@#+.                            
//              .%@@@@@@@@@@%*=--:.....::--+#@@@@@@@@@@@=              
//              +@@@@@@@%*-.                 .-*%@@@@@@@%              
//              +@@@@@%=.                       .=%@@@@@@.             
//              -@@@@*.                           .+@@@@%              
//               +@@+    ..                         =@@%:              
//                -*  :*%@@@*.             :+#%#+.   +#:               
//                =. =@@@*=+@%            :%@##@@@+  .+                
//                + -@@@@.  #@:  :-----   *@=  +@@@+  +                
//               .+ #@@@@#+*@%.  *@@@@%.  +@#:-#@@@@: =.               
//               .=  @@@@@@@@+    .=*:     :@@@@@@@@= -:                 
//                + :**%@%*:     .-=+--     :#@@%**+  +                
//                +.---:.                     .----- .=               
//                 :=                               +.                 
//                    :=-.                     .-=:                                         
//                           .:-----------:.   

