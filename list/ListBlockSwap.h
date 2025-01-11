template <typename T>
void CP::list<T>::block_swap(iterator a1, iterator a2, iterator b1, iterator b2) {
    std::swap(a1.ptr->prev->next,b1.ptr->prev->next);
	std::swap(a1.ptr->prev,b1.ptr->prev);
	std::swap(a2.ptr->prev->next,b2.ptr->prev->next);
	std::swap(a2.ptr->prev,b2.ptr->prev);
}
