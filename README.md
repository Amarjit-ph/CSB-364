# INFORMATION SECURITY
### BACHELOR FOR TECHNOLOGY COMPUTER SCIENCE AND ENGINEERING
## CHANDIGARH UNIVERSITY


<b>AMARJIT PHEIROIJAM </b><br />
17BCS2198 <br/>
BE CSE <br />
NTPPIS 12 <br />

## Practical Experiments
1. Ceaser-Cipher
2. Substitution-Cipher
3. Hill Cipher
4. RSA Algorithm
***
## RSA Algorithm
RSA algorithm is a public key encryption technique and is considered as the most secure way of encryption. <br>
It was invented by Rivest, Shamir and Adleman in year 1978 and hence name RSA algorithm.

### Algorithm :
The RSA algorithm holds the following features −
1. RSA algorithm is a popular exponentiation in a finite field over integers including prime numbers.
2. The integers used by this method are sufficiently large making it difficult to solve.
3. There are two sets of keys in this algorithm: private key and public key.

You will have to go through the following steps to work on RSA algorithm :
<ul>
<li>
  <b> Step 1: Generate the RSA modulus : </b>
The initial procedure begins with selection of two prime numbers namely p and q, and then calculating their product N, as shown −

`N=p*q` <br><br>
Here, let N be the specified large number.
</li>

<li>
<b>Step 2: Derived Number (e) : </b><br>
Consider number e as a derived number which should be greater than 1 and less than (p-1) and (q-1).<br>
The primary condition will be that there should be no common factor of (p-1) and (q-1) except 1 <br>
</li>
<br>
<li>
<b>Step 3: Public key : </b><br>
The specified pair of numbers n and e forms the RSA public key and it is made public.<br>
</li>
<br>
<li>
<b>Step 4: Private Key </b>
Private Key d is calculated from the numbers p, q and e. The mathematical relationship between the numbers is as follows −

`ed = 1 mod (p-1) (q-1)` <br>
The above formula is the basic formula for Extended Euclidean Algorithm, which takes p and q as the input parameters.

Encryption Formula :<br>
Consider a sender who sends the plain text message to someone whose public key is (n,e). To encrypt the plain text message in the given scenario, use the following syntax −

`C = Pe mod n`<br><br>
Decryption Formula : <br>
The decryption process is very straightforward and includes analytics for calculation in a systematic approach. Considering receiver C has the private key d, the result modulus will be calculated as −

`Plaintext = Cd mod n`
</li>
</ul>
