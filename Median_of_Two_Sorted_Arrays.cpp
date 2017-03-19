int min(int x, int y)
{
    return x < y ? x : y;
}

int findKth(int* a, int m, int* b, int n, int k)
{
    if (m > n) return findKth(b, n, a, m, k);
    if (m == 0) return b[k - 1];
    if (k == 1) return min(a[0], b[0]);

    int mid1 = min(m, k / 2);
    int mid2 = k - mid1;

    if (a[mid1 - 1] < b[mid2 - 1]) return findKth(a + mid1, m - mid1, b, n, k - mid1);
    else if (a[mid1 - 1] > b[mid2 - 1]) return findKth(a, m, b + mid2, n - mid2, k - mid2);
    else return a[mid1 - 1];
}

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size)
{
    int size = nums1Size + nums2Size;
    if (size & 1)
        return findKth(nums1, nums1Size, nums2, nums2Size, size / 2 + 1);
    else
        return ((double)findKth(nums1, nums1Size, nums2, nums2Size, size / 2) +
            (double)findKth(nums1, nums1Size, nums2, nums2Size, size / 2 + 1)) / 2;
}
