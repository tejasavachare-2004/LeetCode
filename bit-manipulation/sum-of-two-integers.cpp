class Solution {
public:
    int getSum(int a, int b) {
        uint32_t carry = a & b;
        int sumwithoutcarry = a^b;
        int actual_carry = carry << 1;

        while(carry != 0){
            carry = sumwithoutcarry & actual_carry ;
            sumwithoutcarry = sumwithoutcarry ^ actual_carry;
            actual_carry = carry << 1;
        }

        return sumwithoutcarry;
    }
};