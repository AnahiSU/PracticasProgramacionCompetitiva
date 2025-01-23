#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;
const double EPS = 1e-9;

vector < vector < char >> v = {
   {
      ' ',
      'o',
      ' '
   },
   {
      '/',
      '|',
      '\\'
   },
   {
      '/',
      ' ',
      '\\'
   }
};

bool dir = true;

char flip(char c) {
   if (c == '>') return '<';
   if (c == '<') return '>';
   if (c == '(') return ')';
   if (c == ')') return '(';
   if (c == '\\') return '/';
   if (c == '/') return '\\';
   if (c == ' ') return ' ';
   return '?';
}

void print() {
   for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
         cout << v[i][j];
      }
      cout << '\n';
   }
}

void turn() {
   char temp;
   for (int i = 0; i < 3; i++) {
      temp = flip(v[i][0]);
      v[i][0] = flip(v[i][2]);
      v[i][2] = temp;
   }
}

void clear_arms() {
   v[0][0] = v[0][2] = v[1][0] = v[1][2] = ' ';
}

int main() {

   ios::sync_with_stdio(0);
   cin.tie(0);

   // freopen("input.in", "r", stdin);
   // freopen("output.out", "w", stdout);

   int t;
   cin >> t;

   while (t--) {
      int n;
      cin >> n;
      cin.ignore();
      string s;
      for (int i = 0; i < n; i++) {
         getline(cin, s);
         if (s[0] == 's') {
            cout << s.substr(4) << '\n';
         } else {
            if(s == "left hand to head"){
				 if(dir){
					  v[0][2] = ')'; 
					  v[1][2] = ' ';
				  }else{
					  v[0][0] = '(';
					  v[1][0] = ' ';
				  }
				 print();
			} else if (s == "left hand to hip") {
					if (dir) {
						v[0][2] = ' '; 
						v[1][2] = '>';
					} else {
						v[0][0] = ' ';
						v[1][0] = '<';
					}
					print();
			} else if (s == "left hand to start") {
					if (dir) {
						v[0][2] = ' ';
						v[1][2] = '\\';
					} else {
						v[0][0] = ' ';
						v[1][0] = '/';
					}
					print();
            } else if (s == "left leg in") {
					if (dir) {
						v[2][2] = '>';
					} else {
						v[2][0] = '<';
					}
					print();
            } else if (s == "right leg in") {
               if (dir) {
                  v[2][0] = '<';
               } else {
                  v[2][2] = '>';
               }
               print();
            } else if (s == "right leg out") {
               if (dir) {
                  v[2][0] = '/';
               } else {
                  v[2][2] = '\\';
               }
               print();
            } else if (s == "right hand to start") {
               if (dir) {
						v[0][0] = ' ';
                  v[1][0] = '/';
               } else {
						v[0][2] = ' ';
                  v[1][2] = '\\';
               }
               print();
            } else if (s == "right hand to hip") {
               if (dir) {
						v[0][0] = ' ';
                  v[1][0] = '<';
               } else {
						v[0][2] = ' ';
                  v[1][2] = '>';
               }
               print(); 
				}	else if (s == "right hand to head") {
               if (dir) {
						v[0][0] = '(';
                  v[1][0] = ' ';
               } else {
						v[1][2] = ' ';
                  v[0][2] = ')';
               }
               print(); 
				} else {
               turn();
               dir = !dir;
               print();
            }

         }
      }
		v = {
   {
      ' ',
      'o',
      ' '
   },
   {
      '/',
      '|',
      '\\'
   },
   {
      '/',
      ' ',
      '\\'
   }
	};
		dir = 1;
   }

}
