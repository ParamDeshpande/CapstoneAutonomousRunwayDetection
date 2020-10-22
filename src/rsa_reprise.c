#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

static int primeNo1=11,primeNo2=13;
static int n_rsa,t_rsa =0, flag;
static long int e_rsa[100],d_rsa[100];


void calc_rsa_e();
long int calc_rsa_d(long int);
int encrypt(int);
int decrypt(int );
int prime(long int);

void rsa_setup(void){
    primeNo1 = 29 ;
    primeNo2 = 89 ;
    n_rsa = primeNo1*primeNo2;
    t_rsa = (primeNo1-1)*(primeNo2-1);
    calc_rsa_e();
}

int prime(long int pr)
{
    int i;
    int j=sqrt((double)pr);
    for(i=2;i<=j;i++)
    {
        if(pr%i==0)
            return 0;
    }
    return 1;
}

void calc_rsa_e()
{
    int k;
    k=0;
    for(int i=2;i<t_rsa;i++)
    {
        if(t_rsa%i==0)
            continue;
        flag=prime(i);
        if(flag==1&&i!=primeNo1&&i!=primeNo2)
        {
            e_rsa[k]=i;
            flag=calc_rsa_d(e_rsa[k]);
            if(flag>0)
            {
                d_rsa[k]=flag;
                k++;
            }
            if(k==99)
                break;
        }
    }
    printf(" ce - k is %d", k);

}

long int calc_rsa_d(long int x)
{
    long int k=1;
    while(1)
    {
        k=k+t_rsa;
        if(k%x==0)
            return(k/x);
    }
}

int encrypt(int plain_num)
{
    long int key=e_rsa[0],k=1;
    static int i=0;
        
    for(int j=0;j<key;j++)
    {
        k=k*plain_num;
        k=k%n_rsa;
    }
    i++;

    return k;
    
}

int decrypt(int cipher_num)
{
    long int key=d_rsa[0],k;
    static int i=0;
        k=1;
        for(int j=0;j<key;j++)
        {
            k=k*cipher_num;
            k=k%n_rsa;
        }
        i++;
    return k;
}



int main(){
    rsa_setup();
    printf("n is %d , t is %d , e is %d and d is %d \n" , n_rsa, t_rsa ,  e_rsa[0], d_rsa[0]);
    int cipherNo = encrypt(33);
    printf("cipherNo is %d\n" , cipherNo);
    int plainNo = decrypt(cipherNo);
    printf("plainNo is %d\n" , plainNo);

    return 0;
}