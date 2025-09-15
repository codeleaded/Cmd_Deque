#include "/home/codeleaded/System/Static/Container/Deque.h"

int main(int argc,const char *argv[]){
    
    Deque d = Deque_New(sizeof(int));

    Deque_Push(&d,(int[]){ 0 });
    Deque_Push(&d,(int[]){ 1 });
    Deque_Push(&d,(int[]){ 2 });
    Deque_Push(&d,(int[]){ 3 });
    Deque_Push(&d,(int[]){ 4 });
    Deque_Push(&d,(int[]){ 5 });
    Deque_Push(&d,(int[]){ 6 });
    Deque_Push(&d,(int[]){ 7 });
    Deque_Push(&d,(int[]){ 8 });
    Deque_Push(&d,(int[]){ 9 });

    Deque_Print(&d);

    Deque_Push(&d,(int[]){ 10 });
    Deque_Push(&d,(int[]){ 11 });
    Deque_Push(&d,(int[]){ 12 });
    Deque_Push(&d,(int[]){ 13 });
    Deque_Push(&d,(int[]){ 14 });
    Deque_Push(&d,(int[]){ 15 });
    Deque_Push(&d,(int[]){ 16 });
    Deque_Push(&d,(int[]){ 17 });
    Deque_Push(&d,(int[]){ 18 });
    Deque_Push(&d,(int[]){ 19 });

    Deque_Print(&d);

    Deque_PopTop(&d);
    Deque_PopTop(&d);
    Deque_PopTop(&d);
    Deque_PopTop(&d);
    Deque_PopTop(&d);
    Deque_PopTop(&d);
    Deque_PopTop(&d);
    Deque_PopTop(&d);
    Deque_PopTop(&d);
    Deque_PopTop(&d);

    Deque_Print(&d);
    
    Deque_PopTop(&d);
    Deque_PopTop(&d);
    Deque_PopTop(&d);
    Deque_PopTop(&d);
    Deque_PopTop(&d);
    Deque_PopTop(&d);
    Deque_PopTop(&d);
    Deque_PopTop(&d);
    Deque_PopTop(&d);
    Deque_PopTop(&d);

    Deque_Print(&d);

    Deque_Free(&d);

    return 0;
}