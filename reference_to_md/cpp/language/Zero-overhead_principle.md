

  
  
  
  
  

  
  
  

---  
  

---  
  


The _zero-overhead principle_ is a C++ design principle that states: 

  1. You don't pay for what you don't use. 
  2. What you do use is just as efficient as what you could reasonably write by hand. 



In general, this means that no feature should be added to C++ that would impose any overhead, whether in time or space, greater than a programmer would introduce without using the feature. 

The only two features in the language that do not follow the zero-overhead principle are [runtime type identification](typeid.html "cpp/language/typeid") and [exceptions](exceptions.html "cpp/language/exceptions"), and are why most compilers include a switch to turn them off. 

### External links

1\.  | [Foundations of C++](https://www.stroustrup.com/ETAPS-corrected-draft.pdf) \- Bjarne Stroustrup   
---|---  
2\.  | [C++ exceptions and alternatives](https://wg21.link/p1947) \- Bjarne Stroustrup   
3\.  | [De-fragmenting C++](https://youtu.be/ARYP83yNAWk) \- Making [Exceptions](exceptions.html "cpp/language/exceptions") and [RTTI](typeid.html "cpp/language/typeid") More Affordable and Usable - Herb Sutter   
4\.  | [Bjarne Stroustrup: C++ on Artificial Intelligence (AI) Podcast](https://youtu.be/uTxRF5ag27A?t=2478)
