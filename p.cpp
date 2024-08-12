// // #include<bits/stdc++.h>
// // using namespace std;
// // long long main()
// // {

// //     long long t;
// //     cin >> t;
// //     while(t--)
// //     {
// //         long long a, b;
// //         cin >> a >> b;

// //         long long ans = 0;
// //         long long rem = 0;
// //         if(b % 2 == 0)
// //         {
// //             ans += b/2;
// //             rem = ans * 7;
// //         }
// //         else
// //         {
// //             ans += b/2 +1;
// //             rem = ans*7 +4;
// //         }

// //         a -= rem;
// //         if(a > 0)
// //         {
// //             if(a % 15 == 0)
// //             {
// //                 ans += a/15;
// //             }
// //             else
// //             {
// //                 ans += a/15 +1;
// //             }
// //         }

// //         cout << ans << endl;
// //     }
// //     return 0;
// // }

// #include<bits/stdc++.h>
// using namespace std;
// long long main()
// {
//     long long t;
//     cin >> t;
//     while(t--)
//     {
//         long long n;
//         cin >> n;
//         string s;
//         cin >> s;

//         unordered_map<char, char> mpp;

//         string temp = s;
//         sort(temp.begin(), temp.end());

//         vector<char> vec;
//         long long j = 0;
//         for(long long i = 0; i < n; i++)
//         {
//             if(i == 0 || vec[j-1] != temp[i])
//             {
//                 vec.push_back(temp[i]);
//                 j++;
//             }
//         }

//         for(long long i = 0; i < vec.size(); i++)
//         {
//             mpp[vec[i]] = vec[vec.size()-i-1];
//         }

//         for(long long i = 0; i < n; i++)
//         {
//             if(mpp.find(s[i]) != mpp.end())
//             {
//                 s[i] = mpp[s[i]];
//             }
//         }

//         cout << s << endl;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// long long main()
// {
//     long long t, n;
//     cin >> t;
//     while(t--)
//     {
//         cin >> n;
//         vector<long long> a(n);
//             vector<vector<long long>> vec(n-2, vector<long long>(3, 0));
            
//         long long j = 0;
//         for(long long i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             if(i >= 2)
//             {
//                 vec[j][0] = a[i-2];
//                 vec[j][1] = a[i-1];
//                 vec[j][2] = a[i];
//                 j++;
//             }


//         }

//         long long ans = 0;

//         for(long long i = 0; i < n-2; i++)
//         {
//             long long sz = (n-2)/2;
//             long long kc = 1;
//             for(long long j = 0; j < sz; j++)
//             {
//                 if(i == j) continue;
//                 if(vec[i][0] == vec[j][0] && vec[i][1] == vec[j][1] && vec[i][2] != vec[j][2]) ans++;

//                 else if(vec[i][0] == vec[j][0] && vec[i][1] != vec[j][1] && vec[i][2] == vec[j][2]) ans++;

//                 else if(vec[i][0] != vec[j][0] && vec[i][1] == vec[j][1] && vec[i][2] == vec[j][2]) ans++;

//                 if(vec[i][0] == vec[n-2-kc][0] && vec[i][1] == vec[n-2-kc][1] && vec[i][2] != vec[n-2-kc][2]) ans++;

//                 else if(vec[i][0] == vec[n-2-kc][0] && vec[i][1] != vec[n-2-kc][1] && vec[i][2] == vec[n-2-kc][2]) ans++;

//                 else if(vec[i][0] != vec[n-2-kc][0] && vec[i][1] == vec[n-2-kc][1] && vec[i][2] == vec[n-2-kc][2]) ans++;
//                 kc++;
//             }
//         }

//         if(n % 2 != 0)
//         {
//             long long j = (n-2)/2+1;
//             for(long long i = 0; i < n-2; i++)
//             {
//                 if(vec[i][0] == vec[j][0] && vec[i][1] == vec[j][1] && vec[i][2] != vec[j][2]) ans++;

//                 else if(vec[i][0] == vec[j][0] && vec[i][1] != vec[j][1] && vec[i][2] == vec[j][2]) ans++;

//                 else if(vec[i][0] != vec[j][0] && vec[i][1] == vec[j][1] && vec[i][2] == vec[j][2]) ans++;
//             }
//         }

//         if(ans % 2 == 0) ans /= 2;
//         else ans = ans/2+1;

//         cout << ans << endl;

        
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// long long main()
// {
//     long long t;
//     cin >> t;
//     while(t--)
//     {
//         long long n;
//         cin >> n;
//         string s;
//         cin >> s;

//         long long u = 0, r = 0;

//         for(long long i = 0; i < n; i++)
//         {
//             if(s[i] == 'N') u++; 
//             if(s[i] == 'S') u--; 
//             if(s[i] == 'E') r++; 
//             if(s[i] == 'W') r--; 
//         }

//         bool bl = 1;

//         if(u % 2 != 0 || r % 2 != 0) bl = 0;
        
//         string ans = "";

//         bool no=1, so=1, e=1, w=1;

//         for(long long i = 0; i < n; i++)
//         {
//             if(s[i] == 'N')
//             {
//                 if(no) ans.push_back('R'), no = 0;
//                 else ans.push_back('H'), no = 1;
//             }
//             if(s[i] == 'S')
//             {
//                 if(so) ans.push_back('R'), so = 0;
//                 else ans.push_back('H'), so = 1;
//             }
//             if(s[i] == 'E')
//             {
//                 if(e) ans.push_back('H'), e = 0;
//                 else ans.push_back('R'), e = 1;
//             }
//             if(s[i] == 'W')
//             {
//                 if(w) ans.push_back('H'), w = 0;
//                 else ans.push_back('R'), w = 1;
//             }
//         }

//         if(!bl) cout << "NO" << endl;
//         else if(n == 2 && s[0] != s[1]) cout << "NO" << endl;
//         else cout << ans << endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// long long main()
// {
//     long long t;
//     cin >> t;
//     while(t--)
//     {
//         long long n;
//         cin >> n;
        
//         vector<long long> a(n);
//         for(long long i = 0; i < n; i++) cin >> a[i];

//         map<vector<long long>, long long> mpp;
//         long long ans = 0;
//         for(long long i = 0; i < n-2; i++)
//         {
//             long long p = a[i], q = a[i+1], r = a[i+2];
            
//             ans += mpp[{0, q, r}] +mpp[{p, q, 0}] +mpp[{p, 0, r}] -3*mpp[{p, q, r}];

//             mpp[{p, q, 0}]++;
//             mpp[{p, 0, r}]++;
//             mpp[{0, q, r}]++;
//             mpp[{p, q, r}]++;
//         }

//         cout << ans << endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// long long main()
// {
//     long long t;
//     cin >> t;
//     while(t--)
//     {
//         string s;
//         cin >> s;

//         long long i = 0;
//         long long n = s.length();

//         bool bls = 0, bla = 0;

//         while(s[i] == '0')
//         {
//             bls = 1;
//             i++;
//         }

//         long long cuts = 1;

//         for(i = i; i < n; i++)
//         {
//             if(s[i] == '1')
//             {
//                 continue;
//             }
//             else
//             {
//                 cuts++;
//                 while(s[i] == '0')
//                 {
//                     i++;
//                 }
//                 bla = 1;
//             }
//         }
//         cout << cuts << endl;

//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// long long main()
// {
//     long long t;
//     cin >> t;
//     while(t--)
//     {
//         vector<long long> a(7, 0);
//         long long n, m;
//         cin >> n >> m;

//         string s;
//         cin >> s;

//         for(long long i = 0; i < n; i++)
//         {
//             if(s[i] == 'A') a[0]++;
//             if(s[i] == 'B') a[1]++;
//             if(s[i] == 'C') a[2]++;
//             if(s[i] == 'D') a[3]++;
//             if(s[i] == 'E') a[4]++;
//             if(s[i] == 'F') a[5]++;
//             if(s[i] == 'G') a[6]++;
//         }

//         long long ans = 0;
        
//         for(long long i = 0; i < 7; i++)
//         {
//             if(a[i] < m) ans += m-a[i];
//         }
//         cout << ans << endl;
        
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// long long main()
// {
//     long long t;
//     cin >> t;
//     while(t--)
//     {
//         long long n, f, k;
//         cin >> n >> f >> k;
//         vector<long long> a(n);
//         for(long long i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
        
//         long long fav = a[f-1];

//         sort(a.begin(), a.end(), greater<long long>());

//         long long rem = a[k-1];

//         if(rem < fav) cout << "YES" << endl;
//         else if(rem > fav) cout << "NO" << endl;
//         else 
//         {
//             if(k == n) cout << "YES" << endl;
//             else if(a[k] == fav) cout << "MAYBE" << endl;
//             else cout << "YES" << endl;
//         }

        
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long t;
//     cin >> t;
//     while(t--)
//     {
//         long long n;
//         cin >> n;
//         vector<long long> a(n);
//         vector<long long> b(n);
//         for(long long i = 0; i < n; i++) cin >> a[i];
//         for(long long i = 0; i < n; i++) cin >> b[i];

//         long long m;
//         cin >> m;
//         vector<long long> d(m);
//         unordered_map<long long, long long> mpp;
//         for(long long i = 0; i < m; i++)
//         {
//             cin >> d[i];
//             if(i != m-1) mpp[d[i]]++;
//         }
        
//         bool last = false, lnd = false;
//         long long ind = -1;
//         for(long long i = 0; i < n; i++)
//         {
//             if(b[i] == d[m-1] && b[i] != a[i])
//             {
//                 last = true;
//                 ind = i;
//                 lnd = true;
//             }
//         }
//         if(!lnd)
//         {
//             for(long long i = 0; i < n; i++)
//             {
//                 if(b[i] == d[m-1])
//                 {
//                     last = true;
//                     ind = i;
//                 }
//             }
//         }
//         if(!last)
//         {
//             cout << "NO" << endl;
//             continue;
//         }
//         bool mp = true;
//         for(long long i = 0; i < n; i++)
//         {
//             if(i != ind)
//             {
//                 if(a[i] != b[i])
//                 {
//                     if(mpp.find(b[i]) == mpp.end())
//                     {
//                         mp = 0;
//                         break;
//                     }
//                     else
//                     {
//                         if(mpp[b[i]] > 0)
//                         {
//                             mpp[b[i]]--;
//                         }
//                         else 
//                         {
//                             mp = false;
//                             break;
//                         }
//                     }
//                 }
//             }
//         }

//         if(mp && last) cout << "YES" << endl;
//         else cout << "NO" << endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         int gcd0 = 0, gcd1 = 0;
//         int gccnt = 0;
//         for(int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         for(int i = 0; i < a.size(); i++)
//         {
//             if(i > 1)
//             {
//                 gcd1 = __gcd(a[i], a[i-1]);
//                 gcd0 = __gcd(a[i-1], a[i-2]);
//                 int next = __gcd(a[i], a[i+1]);
//                 int midi = __gcd(a[i-2],a[i]);
//                 int midni = __gcd(a[i-1],a[i+1]);
//                 if(gcd0 > gcd1)
//                 {
//                     if(i == n-1)
//                     {
//                         gccnt++;
//                         break;
//                     }

//                     gccnt++;


//                     if(next > gcd1) continue;
//                     else
//                     {
//                         if(midi <= next && gcd0 <= midni)
//                         {
//                             if(midni <= next)
//                             {
//                                 a.erase(a.begin()+i);
//                                 i-=2;
//                             }
//                             else
//                             {
//                                 a.erase(a.begin()+i-1);
//                                 i-=2;
//                             }
//                         }
                                
//                         else if(midi <= next) a.erase(a.begin()+i-1);
//                         else if(gcd0 <= midni) a.erase(a.begin()+i);
//                         else gccnt++;
//                     }
//                 }
//             }
//             if(t == 5) cout << gccnt << endl;
//             if(gccnt > 1) break;
//         }
        
//         if(gccnt <= 1) cout << "YES" << endl;
//         else cout << "NO" << endl;
        
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         string a, b;
//         cin >> a >> b;

//         swap(a[0], b[0]);

//         cout << a << " " << b << endl;


//     }
//     return 0;
// }

// #inclue<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int n;
//         cin >> n;

//         if(n == 3) cout << 3 << endl;
//         else cout << 2 << endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int n;
//         cin >> n;

//         int a[n];
//         int ans = 0;
//         long long sum = 0;
//         vector<long long> maxcnt(n);
//         long long mm = 0;
//         for(int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             sum += a[i];
//             if(a[i] > mm) mm = a[i];
//             maxcnt[i] = mm;
//         }

//         // sort(a.begin(), a.end());
//         long long tempsum = 0;

//         for(int i = n-1; i >= 0; i--)
//         {
//             tempsum = sum - maxcnt[i];
//             sum -= a[i];
//             if(tempsum == maxcnt[i]) ans++;
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int n, m;
//         cin >> n >> m;

//         char a[n][m];
//         bool bl = 0;
//         int topi = 0;
//         int topj = 0;
//         int bottomi = 0;
//         for(int i = 0; i < n; i++)
//         {
//             for(int j = 0; j < m; j++)
//             {
//                 cin >> a[i][j];
//                 if(bl == 0 && a[i][j] == '#')
//                 {
//                     topi = i;
//                     topj = j;
//                     bl = 1;
//                 }
//                 if(a[i][j] == '#') bottomi = i;
//             }
//         }
//         int ai = (topi+bottomi)/2 +1;
//         int aj = topj +1;

//         cout << ai << " " << aj << endl;

//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int pos = 3;


    int a[size+1];
    for(int i = 0; i < size; i++) cin >> a[i];
    for(int i = 0; i < size; i++) cout << a[i] <<" ";
    cout << endl;

    for(int i = size-1; i >= pos-1; i--)
    {
        a[i+1] = a[i];
    }

    a[pos-1] = 69;

    for(int i = 0; i < size+1; i++) cout << a[i] <<" ";

    return 0;
}