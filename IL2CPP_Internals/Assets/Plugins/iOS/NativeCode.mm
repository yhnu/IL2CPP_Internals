#include <cstring>
#include <cmath>

extern "C" {
int Increment(int i) {
return i + 1;
}

bool StringsMatch(const char* l, const char* r) {
return strcmp(l, r) == 0;
}

struct Vector {
float x;
float y;
float z;
};

float ComputeLength(Vector v) {
return sqrt(v.x*v.x + v.y*v.y + v.z*v.z);
}

void SetX(Vector* v, float value) {
v->x = value;
}

struct Boss {
char* name;
int health;
};

bool IsBossDead(Boss b) {
return b.health == 0;
}

int SumArrayElements(int* elements, int size) {
int sum = 0;
for (int i = 0; i < size; ++i) {
sum += elements[i];
}
return sum;
}

int SumBossHealth(Boss* bosses, int size) {
int sum = 0;
for (int i = 0; i < size; ++i) {
sum += bosses[i].health;
}
return sum;
}

}