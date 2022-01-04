using Toybox.System;
// <- include

using Toybox.System as Foo;
// <- include
//                  ^ include

// foo bar
// <- comment

class Foo {
// <- keyword

}

function add(a as Number, b as Numeric) as Numeric {
// <- keyword
//           ^ variable.parameter
//                ^ type.builtin
//                        ^ variable.parameter
//                             ^ type
  return a + b;
}

