**what is a hash function**
    problem: hash collisions

-------------------------------------

**what are we doing with the hash function**
we're making dictionaries:
    implementing hash tables w/ linear chaining & separate probing

and then implementing a couple bonus fun functions

-------------------------------------

linear probing:
    just put it in the next available slot

separate chaining:
    each entry is a linked list

problem:
    load factor: #keys / size(array)

-------------------------------------

schashtable.cpp - separate chaining hash table
    remove
    resizeTable

lphashtable.cpp - linear probing hash table
    insert

**You MUST handle collisions in your insert function**

---

how do you do testing for this one? i'm not entirely sure.
i wish it wasn't just "monad and check".

-------------------------------------

REAL WORLD ASIDE

md5/sha1 | sha256

-------------------------------------

anagramDict

wordCounter

logFileParser

don't forget to `make data`
