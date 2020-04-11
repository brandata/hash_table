#include "hash_table.h"

int main() {
    ht_hash_table* ht = ht_new();
    puts("created table");
    ht_del_hash_table(ht);
}
