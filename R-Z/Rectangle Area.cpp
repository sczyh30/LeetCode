/**
 * 223-Rectangle Area
 * EASY
 * 简单的题也有陷阱
 * 最后判断时要防溢出!
 * 不能直接a > 0 || b > 0 
 */ 

class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int S1 = (D-B) * (C-A);
        int S2 = (H-F) * (G-E);
        int S3 = overlap(A,B,C,D,E,F,G,H);
        return S1 + S2 - S3;
    }
private:
    int overlap(int A, int B, int C, int D, int E, int F, int G, int H) {
        int a1 = A > E ? A : E;
        int a2 = C < G ? C : G;
        int a = a2 - a1;
        
        int b1 = F > B ? F : B;
        int b2 = H < D ? H : D;
        int b = b2 - b1;
       
       if(a2 <= a1 || b2 <= b1) return 0;
        else return a*b;
    }
};
