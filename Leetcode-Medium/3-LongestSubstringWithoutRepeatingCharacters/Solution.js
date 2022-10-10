/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function (s) {
  if (s.length <= 1) return s.length;
  let res = [];
  let temp = [];
  for (let i = 0; i < s.length; i++) {
    if (!temp.includes(s[i])) temp.push(s[i]);
    else {
      if (res.length < temp.length) res = temp;
      temp = [...temp.slice(temp.indexOf(s[i]) + 1), s[i]];
    }
  }
  if (res.length < temp.length) res = temp;
  return res.length;
};
