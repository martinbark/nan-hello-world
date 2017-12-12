const assert = require('assert')
const helloworld = require('./index');
assert.equal(helloworld.say(), 'Hello World');
console.log(helloworld.say());
