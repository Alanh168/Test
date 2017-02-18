// writeln simply writes the parameter
// document.writeln('Hello, world!');

// Good JS Etiquette:
// Outdated Comments are better than no comments
// use // instead of /**/

// NaN is not equal to any value, including itself
// You can detect NaN with isNaN(number)

// Number methods are used with the Math object
// Math.floor(number);

// There's no character type, only strings

// \u allows for specifying character code points numerically:
// "A" === "\u0041"

// "seven".length is 5

// Strings can never be changed, you can only make a new one

// 'cat'.toUpperCase() === 'CAT'

// if statements use a "then" after the condition

// "falsy values": false, null, undefined, '', 0, NaN
// All other values are "truthy" including the string "false"

// The "for in" loop enumerates the property names of an object.
// On each iteration, another property name string from the object is assigned to the variable.
// It's also a good idea to test the object to see if it has that property.
// for (myvar in obj) {
//  if(obj.hasOwnProperty(myvar)) {

//  }
// }

// The try statement executes a block of code and catches any exceptions thrown by it.
// The catch clause defines a new variable that will recieve the exception object
try {
  var test = 1;
}
catch (test) {
  var storeHere;
}

// The throw statement raises an exception;
// throw exception;

// The break statement can be followed by a label to specify what to break out of
