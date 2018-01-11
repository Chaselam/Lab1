struct muldiv_entry {
   int mul;
   float div;
};

struct muldiv_entry** generate_tables(int n);
void print_tables(struct muldiv_entry** tables, int n);
void free_tables(struct muldiv_entry** tables, int n);
bool input_ck(char *str);
