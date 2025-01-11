void splitList(list<T>& list1, list<T>& list2) {
    if(mSize == 0) return;
    // Add your code here
      int x = size()/2;
      int sed = size()%2;
      iterator it = begin();
      for(int i =1;i<x+sed;i++){
          it++;
      }
      //ใส่ list2
      it.ptr->next->prev = list2.mHeader->prev;
      list2.mHeader->prev->next = it.ptr->next;
      list2.mHeader->prev = mHeader->prev;
      mHeader->prev->next = list2.mHeader;

      //ใส่list1
      list1.mHeader->prev->next = mHeader->next;
      mHeader->next->prev = list1.mHeader->prev;
      list1.mHeader->prev = it.ptr;
      it.ptr->next = list1.mHeader;

      mHeader->next = mHeader;
      mHeader->prev = mHeader;
      mSize = 0;
      list1.mSize += x+sed;
      list2.mSize += x;

    }