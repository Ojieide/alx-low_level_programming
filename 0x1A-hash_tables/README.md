<h1>0x08. Python - More Classes and Objects</h1>
<ul>
<li><b>0-hash_table_create.c</b> - a function that creates a hash table</li>
<li><b>1-djb2.c</b> - a hash function implementing the djb2 algorithm</li>
<li><b>2-key_index.c</b> - a function that gives you the index of a key</li>
<li><b>3-hash_table_set.c</b> - a function that adds an element to the hash table</li>
<li><b>4-hash_table_get.c</b> - a function that retrieves a value associated with a key</li>
<li><b>5-hash_table_print.c</b> - a function that prints a hash table</li>
<li><b>6-hash_table_delete.c</b> - a function that deletes a hash table</li>
<li><b>100-sorted_hash_table.c</b> - Rewrite the previous functions using these data structures</li>
<li><b>shash_table_t *shash_table_create(unsigned long int size);</b></li>
<li><b>int shash_table_set(shash_table_t *ht, const char *key, const char *value);</b></li>
<li><b>The key/value pair should be inserted in the sorted list at the right place</li>
<li><b>Note that here we do not want to do exactly like PHP: we want to create a sorted linked list, by key (sorted on ASCII value), that we can print by traversing it</li>
<li><b>char *shash_table_get(const shash_table_t *ht, const char *key);</b></li>
<li><b>void shash_table_print(const shash_table_t *ht);</b></li>
<li><b>Should print the hash table using the sorted linked list</li>
<li><b>void shash_table_print_rev(const shash_table_t *ht);</b></li>
<li><b>Should print the hash tables key/value pairs in reverse order using the sorted linked list</li>
<li><b>void shash_table_delete(shash_table_t *ht);</b></li>
</li>
</ul>
