# allows: making any optimization / program's observable behavior does NOT change
* [definition.cpp](definition.cpp)
* `clang++ -S -O2 -fverbose-asm definition.cpp -o definition.s`
  * [definition.s](definition.s) contains DIRECTLY 16

# TODO:
* TODO:

# [example](example.cpp)
* `clang++ -S -O2 -fverbose-asm example.cpp -o exampleclang.s`
  * `-S`
    * == generate ensamble code
  * `-O2`
    * == optimization level 2
  * `-fverbose-asm`
    * == generate comments | assemble
* TODO: 