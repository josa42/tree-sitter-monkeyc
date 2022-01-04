using Toybox.Application as App;
using Toybox.System;

typedef Numeric as Number or Float or Long or Double;

class MyProjectApp extends App.AppBase {

    // onStart() is called on application start up
    function onStart(state) {
    }

    // onStop() is called when your application is exiting
    function onStop(state) as Void {
    }

    // Return the initial view of your application here
    function getInitialView() {
        return [ new MyProjectView() ];
    }

    function add(a as Numeric, b as Numeric) as Numeric {
        return a + b + 10;
    }
}
