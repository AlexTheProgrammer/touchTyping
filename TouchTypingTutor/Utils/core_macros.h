#ifndef TOUCHTYPINGTUTOR_UTILS_CORE_MACROS_H_
#define TOUCHTYPINGTUTOR_UTILS_CORE_MACROS_H_

// A macro to disallow the copy constructor and operator= functions
// This should be used in the private: declarations for a class
#define DISALLOW_COPY_AND_ASSIGN(TypeName) \
TypeName(const TypeName&);               \
void operator=(const TypeName&)

#endif  // TOUCHTYPINGTUTOR_UTILS_CORE_MACROS_H_
