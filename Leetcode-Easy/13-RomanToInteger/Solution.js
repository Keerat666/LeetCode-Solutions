/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function (s) {
  var romanValues = {
    I: 1,
    V: 5,
    X: 10,
    L: 50,
    C: 100,
    D: 500,
    M: 1000,
  };
  var value = 0;
  var tempValue = romanValues[s[0]];
  for (var i = 1; i < s.length; i++) {
    if (romanValues[s[i]] < romanValues[s[i - 1]]) {
      value += tempValue;
      tempValue = romanValues[s[i]];
    } else if (romanValues[s[i]] > romanValues[s[i - 1]]) {
      tempValue = romanValues[s[i]] - tempValue;
    } else tempValue += romanValues[s[i]];
  }
  value += tempValue;
  return value;
};
