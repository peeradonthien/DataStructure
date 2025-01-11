#ifndef __STUDENT_H__
#define __STUDENT_H__


template <typename T>
bool CP::list<T>::check() {
  //your code here
  node* test = mHeader;
  node* nexttest = mHeader->next;
  for(int i=0;i<mSize;i++){
    if(test == NULL || nexttest == NULL) return false;
    if(test != nexttest->prev) return false;
    test = test->next;
    nexttest = nexttest->next;
  }
  if(test == NULL || nexttest == NULL || mHeader->prev != test || nexttest != mHeader || test->next != mHeader) return false;
  return true;
}


#endif
