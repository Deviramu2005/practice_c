double findMedianSortedArrays(int* nums1, int m, int* nums2, int n) 
{
    int total=m+n;
    int mid1=(total-1)/2;
    int mid2=total/2;
    int i=0,j=0,c=0,a=0,b=0;
    while(c<=mid2)
    {
        a=b;
        if(i<m&&(j>=n||nums1[i]<nums2[j]))
        {
            b=nums1[i++];
        }
        else
        {
            b=nums2[j++];
        }
        c++;
    }
    if(total%2==0)
    {
        return (a+b)/2.0;
    }
    else
    {
        return b;
    }
}