/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var findMedianSortedArrays = function (nums1, nums2) {
  const sortFn = (a, b) => a - b;
  var sorted = [],
    indexA = 0,
    indexB = 0;

  while (indexA < nums1.length && indexB < nums2.length) {
    if (sortFn(nums1[indexA], nums2[indexB]) > 0) {
      sorted.push(nums2[indexB++]);
    } else {
      sorted.push(nums1[indexA++]);
    }
  }

  if (indexB < nums2.length) {
    sorted = sorted.concat(nums2.slice(indexB));
  } else {
    sorted = sorted.concat(nums1.slice(indexA));
  }

  var n = sorted.length;

  if (n % 2 === 0) {
    return (sorted[n / 2] + sorted[n / 2 - 1]) / 2;
  } else {
    return sorted[Math.floor(n / 2)];
  }
};
