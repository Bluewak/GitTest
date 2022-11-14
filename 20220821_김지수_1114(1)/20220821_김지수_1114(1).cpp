#include<stdio.h>

int  main() {

	int k;
	int e;
	int m;

	int sum, i;
	float ave;

	int k_sum, e_sum, m_sum;
	float k_ave, e_ave, m_ave;

	k_sum = 0;
	e_sum = 0;
	m_sum = 0;

	for (i = 0; i < 5; i++) {

		printf("국어점수 : ");
		scanf_s("%d", &k);

		printf("영어점수 : ");
		scanf_s("%d", &e);

		printf("수학점수 : ");
		scanf_s("%d", &m);

		sum = k + e + m;
		ave = sum / 3.0;

		printf("총점은 %d점 입니다\n", sum);
		printf("평균은 %f점 입니다\n", ave);

		k_sum = k_sum + k;
		e_sum = e_sum + e;
		m_sum = m_sum + m;
	}
	k_ave = k_sum / 5.0;
	e_ave = e_sum / 5.0;
	m_ave = m_sum / 5.0;

	printf("국어평균은 %f점 입니다.\n", k_ave);
	printf("영어평균은 %f점 입니다.\n", e_ave);
	printf("수학평균은 %f점 입니다.\n", m_ave);

	return 0;
}