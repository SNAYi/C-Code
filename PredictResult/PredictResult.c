#include<stdio.h>
#include<stdlib.h>

//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；
	// (((b == 2) ^ (a == 3)))
//B选手说：我第二，E第四；
	//(((b == 2) ^ (e == 4)))
//C选手说：我第一，D第二；
	//(((c == 1) ^ (d ==2)))
//D选手说：C最后，我第三；
	//(((c == 5) ^ (d == 3)))
//E选手说：我第四，A第一；
	//(((e == 4) ^ (a == 1)))
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
int main(){
	for( int a = 1; a <= 5;++a){
		for (int b = 1; b <= 5; ++b){
			for (int c = 1; c <= 5; ++c){
				for (int d = 1; d <= 5; ++d){
					for (int e = 1; e <= 5; ++e){
						if ((((b == 2) ^ (a == 3))) &&
							(((b == 2) ^ (e == 4))) &&
							(((c == 1) ^ (d == 2))) &&
							(((c == 5) ^ (d == 3))) &&
							(((e == 4) ^ (a == 1))) &&(a*b*c*d*e ==120)) {
							printf("A =%d,B=%d,C=%d,D=%d,D=%d", a, b, c, d, e);
						}
					}
				}
			}
		}
	}
	

	return 0;
}