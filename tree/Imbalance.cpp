int process(node *n, KeyT &result, int &max_imbalance){
    if (n == NULL)
        return 0;
    int left_height = 0;
    int right_height = 0;
    if (n->left != NULL)
    {
        left_height = process(n->left, result, max_imbalance);
    }
    if (n->right != NULL)
    {
        right_height = process(n->right, result, max_imbalance);
    }
    int diff = std::abs(left_height - right_height);
    if (max_imbalance < diff)
    {
        max_imbalance = diff;
        result = n->data.first;
    }
    else if (max_imbalance == diff && mLess(n->data.first, result))
    {
        result = n->data.first;
    }
    return 1 + std::max(left_height, right_height);
}

KeyT getValueOfMostImbalanceNode(){
    // Your code here
    KeyT result = mRoot->data.first;
    int max_imbalance = 0;
    process(mRoot, result, max_imbalance);
    return result;
}