* (TM TS)
    * indicates that the function definition should be optimized for invocation from a [synchronized statement](transactional_memory.html "cpp/language/transactional memory")  
      (attribute specifier)  
Indicates that the function definition should be optimized for invocation from a [synchronized statement](../transactional_memory.html "cpp/language/transactional memory"). 

## Contents

  * [1 Syntax](optimize_for_synchronized.html#Syntax)
  * [2 Explanation](optimize_for_synchronized.html#Explanation)
  * [3 Example](optimize_for_synchronized.html#Example)
  * [4 References](optimize_for_synchronized.html#References)

  
---  
  
### Syntax  
  
---  
`**[[optimize_for_synchronized]]**` |  |   
  
### Explanation

Applies to the name being declared in a function declaration, which must be the first declaration of the function. 

Indicates that the function definition should be optimized for invocation from a [synchronized statement](../transactional_memory.html "cpp/language/transactional memory"). In particular, it avoids serializing synchronized blocks that make a call to a function that is transaction-safe for the majority of calls, but not for all calls. 

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### References

  * Transactional Memory TS (ISO/IEC TS 19841:2015): 



    

  * 7.6.6 Attribute for optimization in synchronized blocks [dcl.attr.sync] 


