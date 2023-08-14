struct dog {
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog {
       char *name;
       char *owner;
       float age;
}dog_t;
