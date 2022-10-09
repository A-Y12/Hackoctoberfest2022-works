#include<stdio.h>
void binary_search(int [],int,int,int);
int main()
{
    int n,element;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //input element to search
    scanf("%d",&element);
    //for sorted array
    binary_search(a,element,0,n);
    return 0;
}
void binary_search(int a[],int element,int start,int end )
{
    int middle=(start+end)/2;
    if(element==a[middle])
    {
        printf("element found at index %d",middle);
    }
    else if(element<a[middle])
    {
        binary_search(a,element,start,middle-1);
    }
    else if(element>a[middle])
    {
        binary_search(a,element,middle+1,end);
    }
}