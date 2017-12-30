just for test
#include <stdio.h>
#include <string.h>

//The memcpy function copies count bytes of src to dest.
//If the source and destination overlap, 
//this function does not ensure that the original
//source bytes in the overlapping region are copied
//before being overwritten. Use memmove to handle 
//overlapping regions.


void main()
{
	char str[] = "hello";

	strcpy(str+2,str);

	printf("%s\n",str);
}


/*
void main()
{
	int i = 10;
	if (5 = i)
	{
		printf("hello\n");
	}
}




void main()
{
	int i = 100;
	int j;
	memcpy(&j,&i,4);
	printf("%d\n",j);
	char dst[100];
	char src[] = "hello world";
	memcpy(dst,src,strlen(src)+1);
	printf("%s\n",dst);

	int arr[] = {1,2,3,4,5};
	int brr[5];
	memcpy(brr,arr,20);

}



void main()
{        //      "the0THEE0theee th  the The THe th"
	char str[] = "he@llo wor#ld cp*p lg1@705";

	char *p = strtok(str," @#*");

	int count = 0;
	while (p != NULL)
	{
		printf("%s\n",p);
		if (strcmp(p,"the") == 0)
		{
			count ++;
		}
		p = strtok(NULL," @#*");
	}

	printf("%d\n",count);

}


void main()
{        //      "the0THEE0theee th  the The THe th"
	char str[] = "the THEE theee th  the The THe th";
	
	char *p = strtok(str," ");

	int count = 0;
	while (p != NULL)
	{
		printf("%s\n",p);
		if (strcmp(p,"the") == 0)
		{
			count ++;
		}
		p = strtok(NULL," ");
	}

	printf("%d\n",count);
	
}




char * my_strstr(char *str,char *sub)
{
	int i = 0; int j = 0;
	while(str[i] != 0 && sub[j] != 0 )
	{
		if(str[i] == sub[j])
		{
			i++;
			j++;
		}
		else
		{
			i = i-j+1;
			j = 0;
		}
	}
	if (j == strlen(sub))
	{
		return str+i-j;
	}
	else
	{
		return NULL;
	}
}


void main()
{
	char *str = "aaaaab";
	char *sub = "aab";
	char *p = my_strstr(str,sub);
	printf("%s\n",p);
}



void main()
{
	char str[] = " bcu hello world";
	char *p = strpbrk(str,"aoeiu");
	printf("%s\n",p);
}



void main()
{
	char str[] = "hello world";
	char *p = strrchr(str,'o');
	printf("%s\n",p);
}




size_t my_strlen(char *str)
{
	while ()
	{
	}
	return 
}


void main()
{
	char str1[] = "hello";
	char str2[] = "gyk";

	if (strlen(str2) - strlen(str1) > 0)
	{
		printf("haha\n");
	}
	//printf("%d\n",strlen(str));
}



void main()
{
	int i = 100;
	char ch = 'a';
	printf("%d %c",i,ch);
}
*/
