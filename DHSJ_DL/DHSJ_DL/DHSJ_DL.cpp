// DHSJ_DL.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

class SignleDemo {
public:
	static SignleDemo * m_signle;
	SignleDemo(){
	}
public:
	static SignleDemo * GetInstance(void) {
		if (!m_signle) {
			m_signle = new SignleDemo();
		}
		return m_signle;
	}
};

SignleDemo * SignleDemo::m_signle = NULL;

int main()
{
	SignleDemo * demo_1 = NULL, * demo_2 = NULL;

	demo_1 = SignleDemo::GetInstance();
	demo_2 = SignleDemo::GetInstance();
	if (demo_1 == demo_2){
		printf("����ģʽ");
	}

    return 0;
}

