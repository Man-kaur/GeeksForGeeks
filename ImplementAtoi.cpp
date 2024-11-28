int myAtoi(char *s) {
    long long result = 0;
    int sign = 1;
    
    // 1. Skip leading whitespaces
    while (*s == ' ') s++;
    
    // 2. Check for optional sign
    if (*s == '+' || *s == '-') {
        sign = (*s == '-') ? -1 : 1;
        s++;
    }
    
    // 3. Process numeric characters
    while (*s >= '0' && *s <= '9') {
        result = result * 10 + (*s - '0');
        
        // Clamp result to 32-bit integer range
        if (result * sign > INT_MAX) return INT_MAX;
        if (result * sign < INT_MIN) return INT_MIN;
        
        s++;
    }
    
    return (int)(result * sign);
}
