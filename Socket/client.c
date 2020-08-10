#include<stdio.h>
#include<sys/types.h>
#include<string.h>
#include<netinet/in.h>
#include<sys/socket.h>
#include<assert.h>
#include<arpa/inet.h>
#include<stdlib.h>



int main(void)
{
	int sockfd=socket(AF_INET,SOCK_STREAM,0);
	assert(sockfd!=-1);
	
	struct sockaddr_in ser;
	ser.sin_family=AF_INET;
	ser.sin_addr.s_addr=inet_addr("127.0.0.1");
	ser.sin_port=htons(6000);
	
	int res=connect(sockfd,(struct sockaddr*)&ser,sizeof(ser));
	assert(res!=-1);

	while(1)
	{
		char buf[128]={0};
		fgets(buf,128,stdin);
		buf[strlen(buf)-1]='\n';
		send(sockfd,buf,strlen(buf),0);
		
		char recvbuf[128]={0};
		recv(sockfd,recvbuf,127,0);
		printf("%s\n",recvbuf);
		
		if(strcmp(buf,"end")==0)
		{
			break;
		}
	
	}
	close(sockfd);
	return 0; 
}
