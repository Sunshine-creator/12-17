#include<stdio.h>
#include<windows.h>
#include<assert.h>
#include<math.h>
#include<string.h>
# pragma warning (disable : 4996)
#if 0


int main()
{
	
	//int i = 0, a = 0, b = 2, c = 3, d = 4;
	///*i = a++ && ++b && d++;*/
	//i = a ++|| ++b || d++;
	//printf("a = %d\n b= %d\n c= %d\n d = %d\n",a,b,c,d);
	struct Stu
	{
		char name[10];
		int age;
		char sex[5];
		double score;
	};
	void set_age1(struct Stu stu)
	{
		stu.age = 18;
	}
	void set_age2(struct Stu* pStu)
	{
		pStu->age = 18;
	
	int main()
	{
		struct Stu stu;
		struct Stu* pStu = &stu;
		stu.age = 20;
		set_age1(stu);
		pStu->age = 20;
		set_age2(pStu);
		system("pause");
		return 0;
	}
#endif 
#if 0
	int main() 
	{
		int i, j, n = 0; 
		 
		int a[100][100] = {0};    
		 
		while(n < 1 || n >100)     
		{        
			printf("请输入要打印的杨辉三角行数>:");       
		    scanf("%d",&n);    
		}    
		for(i = 0; i < n ; i++)   
		{        
			a[i][0] = 1;         
		}   
		for(i = 1; i < n; i++ )   
		  {       
			for(j = 1; j <= i; j++)        
		       {    
				a[i][j] = a[i-1][j-1]+a[i-1][j];        
		        }   
		   }    
		for(i = 0; i < n; i++)
		{        
			for(j = 0; j <= i; j++)            
			printf("%5d",a[i][j]);       
			printf("\n");    
		} 
		system("pause");
		return 0;
	}
#endif
#if 0


	long long  fib(long n)
	{
		long  long  first = 1;
		long long  second = 1;
		int ret = first;
		for (int i = 3; i <= n; i++)
		{
			ret = first + second;
			first = second;
			second = ret;

		}
		return ret;
	}
	int main()
	{
		long ret = fib(5);
		printf("%d\n", ret);
		system("pause");
		return 0;
	}
#endif // 0
	/*int strlen( char * str)
	{


	}
	*/
#if 0


	int main()
	{
		int murder;  
		for (murder = 'A'; murder <= 'D'; murder++) 
		{ 
			if ((murder != 'A') + (murder == 'C') + (murder == 'D') + (murder != 'D') == 3) 
			printf("murder is %c\n", murder); 
		}
		
	}
#endif // 0
#if 0
	void print_number(int* myInt)
	{
		assert(myInt != NULL);
		printf("%d\n", *myInt);
	}

	int main()
	{
		int a = 10;
		int* b = NULL;
		int* c = NULL;

		b = &a;

		print_number(b);
		print_number(c);
		system("pause");
		return 0;
	}
#endif
#if 0


	int Fib(int N)
	{
		if (N < 3)
		{
			return 1;
		}
		return Fib(N - 1) + Fib(N - 2);
		printf("%d", N);
	}
	int main()
	{
		
		printf("%d\n", Fib(50));
		system("pause");
		return 0;
	}
#endif // 0


#if 0
	int main() {
		printf("% d\n", sizeof(int));
		printf("% d\n", sizeof(char));
		printf("% d\n", sizeof(long));
		printf("% d\n", sizeof(long double));
		printf("% d\n", sizeof(short));
	}
#endif
#if 0


	a = get_val();

	int main()
	{
		while (a = get_val(), count_val(), a > 0);
	}
#endif // 0
#if 0


	struct Stu
	{
		char name[10];
		int age;
		char sex[5];
		double score;
	};
	void set_age1(struct Stu stu)
	{
		stu.age = 18;
	}
	void set_age2(struct Stu* pStu)
	{
		pStu->age = 18;
	}
	int main()
	{
		struct Stu stu;
		struct Stu* pStu = &stu;
		stu.age = 20;
		set_age1(stu);
		pStu->age = 20;
		set_age2(pStu);
		system("pause");
		return 0;
	}
#endif // 0
#if 0


	int main()
	{
		char a = 0xb6;
		short b = 0xb600;
		int c = 0xb6000000;
		if (a == 0xb6)
			printf("a");
		if (b == 0xb600)
			printf("b");
		if (c == 0xb6)
			printf("c");
		system("pause");
		return 0;
	}
#endif // 0
#if 0


	int main()
	{
		char c = 1;
		printf(" %u\n", sizeof(c));
		printf(" %u\n", sizeof(+c));
		printf(" %u\n", sizeof(!c));
		float f = 3.14;
		int num = f;
	}
#endif // 0
#if 0


	int fun()
	{
		static int count = 1;
		return ++count;
	}
	int main()
	{
		int answer;
		answer = fun() - fun() * fun();
		printf(" %d\n", answer);
		system("pause");
		return 0;
	}
#endif // 0
#if 0
	int main()
	{
		int i = 1;
		int ret = (++i) + (++i) + (++i);
		printf("%d\n", ret);
		printf("%d\n",i);
		return 0;
	}
#endif
#if 0


	unsigned int reverse_bit(unsigned int value)
	{
		for (int n = 0; n < 32; n++)
		{
			int ret =(value >> n)& 1 *pow(2,32-n);      /* 这里想的是用左移方法写，和一进行与，得到每位数，没位数乘以2的(32-n)次方，最终搁在最高位*/
		}
	}
	int main()
	{
		int a = reverse_bit(256);
		printf(" %d", a);
	}
#endif // 0
#if 0


	int average(int a, int b)
	{
		printf("please enter two numbers :");
		scanf("%d  % d", &a, &b);
		int c = (a + b) >> 1;
	}
	int main()
	{
		int ret = average(4, 6);
		printf("%d", ret);
	}
#endfif
#endif // 0
/*int  main()
{
	int arrary[] = { 22,22,23,23,34,34,56,57,57 };
	for (int n = 0; n < sizeof(arrary)/sizeof(arrary[0]); n++)
	{
		if ((arrary[n]) ^ (arrary[n + 1]) != 0)
		{
			printf(" %d\n", arrary[n+1]);
		  }
	}
}*/
#if 0
int main()
{
	char arrary[] = { "student a am i "};
	int n = sizeof(arrary) / sizeof(arrary[0]);
	for (int i = 0; i < n; i++)
	{
		int left = 0;
		int right = n - 1;
		while (left < right)
		{
		    char temp = arrary[left];
			arrary[left] = arrary[right];
			arrary[right] = char temp;
			left++;
			right++;
			
		}
	}
	
}
#endif
#if 0
int main()
{
	int n = 0x11223344;
	char* pc = (char*)&n;
	int* pi = &n;
	*pc = 0;
	*pi = 0;
	return 0;


}
#endif
#if 0
#define M 5
int main()
{
	float a[M];
   float* vp = a;
   for (int i = 0; i < M; i++)
   {
	   *(vp + i) = 0.0f;
	   *(a + i) = 0.0f;
	   printf("%f\n", *(vp + i));
	   printf("%f\n", *(a + i));
   }
}
#endif // 0
#if 0
# define M 5
int main()
{
	float a[M];
	float* vp = a;
	for (vp = &a[0]; vp < &a[M];)
	{
		*vp++ = 0;
	}
	printf("%f\n", *vp);
}
#endif // 0
#if 0
int my_strlen(char *s)
{
	char* p = s;
	while (*p != '\0')
		p++;
	return p - s;
}
int main()
{
	char *str = "hello world";
	printf("%d\n", my_strlen(str));
}
#endif
#if 0
int Strlen(const char* str)
{
	if (*str == '\0')
		return 0;
	else
		return 1 + Strlen(str + 1);  /* 如果是abcd,我们把它分解为1+bcd模式，以此类推，这里递归的出口是"\0"*/
}
int main()
{
	char* p = "abcdef";
	int len = Strlen(p);
	printf("%d\n", len);
	system("pause");
	return 0;
}
#endif // 0




    
















































































































      