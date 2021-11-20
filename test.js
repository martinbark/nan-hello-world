const assert = require('assert')
const helloworld = require('./index');
assert.equal(helloworld.say(), 'NAN Hello World');
console.log(helloworld.say());
