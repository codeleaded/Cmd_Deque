#include "/home/codeleaded/System/Static/Container/Deque.h"

int main(int argc,const char *argv[]){
    
    Deque d = Deque_New(sizeof(int));

    Deque_Push(&d,(int[]){ 1 });
    Deque_Push(&d,(int[]){ 2 });
    Deque_Push(&d,(int[]){ 3 });
    Deque_Push(&d,(int[]){ 4 });
    Deque_Push(&d,(int[]){ 5 });
    Deque_Push(&d,(int[]){ 1 });
    Deque_Push(&d,(int[]){ 2 });
    Deque_Push(&d,(int[]){ 3 });
    Deque_Push(&d,(int[]){ 4 });
    Deque_Push(&d,(int[]){ 5 });

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