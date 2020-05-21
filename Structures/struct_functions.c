#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// == Structures and Functions ==
struct Family {
    char name[20];
    int age;
    char father[20];
    char mother[20];
};

bool siblings(struct Family member1, struct Family member2)
{
    if (strcmp(member1.mother, member2.mother) == 0) // They match
        return true;
    else
        return false;
}

// NOTE: You should use a pointer to a structure as an argument
// It can take quite a bit of time to copy large structures as arguments, as
// well as requiring whatever amount of memory to store the copy of the struct.
// REASON: Pointers to structs avoid the memory consumption and the copy time.

bool siblings2(const struct Family* pMember1, const struct Family* pMember2)
{
    if (strcmp(pMember1->mother, pMember2->mother) == 0)
        return true;
    else
        return false;
}

// NOTE: It is often more convenient to return a pointer to a structure
// REASON: When returning a -> to a struct, it should be created on the heap
// main function
int main()
{

    struct Family myFamily = { "Rossi", 18, "Robinson", "Silvia" };
    struct Family otherFamily = { "Bianchi", 3, "Robinson", "Silvia" };

    // Rossi and Bianchi are siblings since they have the same mother.
    if ((siblings(myFamily, otherFamily))) {
        printf("%s and %s are siblings.\n", myFamily.name, otherFamily.name);
    } else {
        printf("%s and %s are NOT siblings.\n", myFamily.name, otherFamily.name);
    }
    printf("-- POINTER METHOD --\n");
    if ((siblings2(&myFamily, &otherFamily))) {
        printf("%s and %s are siblings.\n", myFamily.name, otherFamily.name);
    } else {
        printf("%s and %s are NOT siblings.\n", myFamily.name, otherFamily.name);
    }

    return 0;
}