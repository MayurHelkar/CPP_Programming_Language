# Vector 

<summary>Vector table</summary>
<details>
  
| Parameters                   | Description                                                                                    |
| ---------------------------- | ---------------------------------------------------------------------------------------------- |
| Represent                    | Dynamic sized <br>Array                                                                        |
| Library                      | Standard Template                                                                              |
| Grows                        | Automatically, Elements are added beyond current capacity                                      |
| Programmer<br>*Doesn't care* | Maintaining the capacity<br>Allocating extra space initially                                   |
| Support                      | Bound checking `v.at(i)` *Accessing an element at index i in a vector v*                                  |
| Operation time               | Super critical, *use of plain arrays*                                                          |
| Insertions<br>Removals       | Slightly costly in terms of time<br>Internally resizes itself beyond certain predefined limits            |
| keyword                      | `vector`                                                                                                  |
| Declaration                  | `vector <T> vectorVariable;`<br>T - Data type of elements<br>vectorVariable - Name assigned to the vector |                                                                 |
</details>
