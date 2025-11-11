# Prob1 - Weird Algorithm

# 📝 Problem Statement :

> Consider an algorithm that takes as input a positive integer $n$. If $n$ is even, the algorithm divides it by two, and if $n$ is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until $n$ is one. 
For example, the sequence for $n=3$ is as follows:

$3→10→5→16→8→4→2→1$ 

Your task is to simulate the execution of the algorithm for a given value of $n$.

**Input**
The only input line contains an integer n.

**Output**
Print a line that contains all values of n during the algorithm.

**Constraints**
> 
> 
> $1 \le n \le 10^6$
> 
> **Example**
> Input:
> 3
> 
> Output:
> 3 10 5 16 8 4 2 1
> 

# **⚙️ Algorithm**

<aside>
💡

Step 1. Input `n` 

Step 2. Change the value of `n` accordingly : 

Step 2.1. If `n` is even ⇒ `n%2==0` ⇒ `n = n/2` 

Step 2.1. If `n` is odd ⇒ `n%2!=0` ⇒ `n = 3 * n + 1` 

Step 3. Check `n==1` , 

Step 3.1. If `n==1` ⇒ terminate the program.

Step 3.1. Else ⇒ Move to Step 2. 

</aside>

# 💻 Code

Code in C : 

```c
#include <stdio.h>
int main(){
    long long n;
    scanf("%lld",&n);
    while(1){
        printf("%lld",n);
        if(n==1) break;
        printf(" ");
        if(n%2==0) n/=2;
        else n=n*3+1;
    }
    return 0;
}
```

Code in C++ : 

```c
#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    while(true){
        cout<<n;
        if(n==1) break;
        cout<<" ";
        if(n%2==0) n/=2;
        else n = n*3 + 1;
    }
    return 0;
}
```

# ✅Testcase

Result :