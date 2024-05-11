//Quiz on cloud computing
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int s,m,c=0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,n;
		printf("Welcome to Cloud computing Quiz Game! :) ");
		printf("\nPress 7 start and press 0 to quit.");
		scanf("%d",&s);
		switch(s)
		{
			case 7: 
					printf("\nThe Game has started , It is a 10 points quiz with 10 question\n Now start answering the qustions that appears on your scareen.");
					printf("\nQ1. What is the primary benefit of cloud computing?");
					printf("\n 1.Increased hardware costs");
					printf("\n 2.Reduced scalability");
					printf("\n 3.Pay-as-you-go pricing");
					printf("\n 4.Limited accessibility");
					scanf("%d",&n);
					if(n==3)
					{
						printf("\n Right answer!:)");
						p1=1;
						c++;
					}
					else
					{
						printf("\n Wrong answer!;(");
						p1=0;
					}
					printf("\n You have got %d points!",p1);
					printf("\nQ2. Which of the following is a characteristic of public cloud computing?");
					printf("\n 1.Shared infrastructure");
					printf("\n 2. Dedicated servers");
					printf("\n 3.High upfront costs");
					printf("\n 4.Restricted access");
					scanf("%d",&n);
					if(n==1)
					{
						printf("\n Right answer!:)");
						p2=1;
						c++;
					}
					else
					{
						printf("\n Wrong answer!;(");
						p2=0;
					}
					printf("\n You have got %d points!",p2);
					printf("\nQ3.Which service model provides virtualized computing resources over the internet?");
					printf("\n 1.Infrastructure as a Service (IaaS)");
					printf("\n 2.Platform as a Service (PaaS) ");
					printf("\n 3.Software as a Service (SaaS)");
					printf("\n 4.Function as a Service (FaaS)");
					scanf("%d",&n);
					if(n==1)
					{
						printf("\n Right answer!:)");
						p3=1;
						c++;
					}
					else
					{
						printf("\n Wrong answer!;(");
						p3=0;
					}
					printf("\n You have got %d points!",p3);
					printf("\nQ4.What is the main advantage of using serverless computing?");
					printf("\n 1.Greater control over infrastructure");
					printf("\n 2.Lower cost compared to traditional servers ");
					printf("\n 3.Longer deployment times");
					printf("\n 4.Less flexibility in scaling resources");
					scanf("%d",&n);
					if(n==1)
					{
						printf("\n Right answer!:)");
						p4=1;
						c++;
					}
					else
					{
						printf("\n Wrong answer!;(");
						p4=0;
					}
					printf("\n You have got %d points!",p4);
					printf("\nQ5.Which cloud deployment model offers the highest level of control and customization?");
					printf("\n 1.Public cloud");
					printf("\n 2.Private cloud ");
					printf("\n 3.Hybrid cloud");
					printf("\n 4.Community cloud");
					scanf("%d",&n);
					if(n==2)
					{
						printf("\n Right answer!:)");
						p5=1;
						c++;
					}
					else
					{
						printf("\n Wrong answer!;(");
						p5=0;
					}
					printf("\n You have got %d points!",p5);
					printf("\nQ6.What is the purpose of cloud storage services?");
					printf("\n 1.To process data locally");
					printf("\n 2.To access data from any location ");
					printf("\n 3.To limit data accessibility");
					printf("\n 4.To increase latency");
					scanf("%d",&n);
					if(n==2)
					{
						printf("\n Right answer!:)");
						p6=1;
						c++;
					}
					else
					{
						printf("\n Wrong answer!;(");
						p6=0;
					}
					printf("\n You have got %d points!",p6);
					printf("\nQ7.Which technology is commonly used for deploying and managing containers in the cloud?");
					printf("\n 1.Docker");
					printf("\n 2.Kubernetes ");
					printf("\n 3.Apache Hadoop");
					printf("\n 4.OpenStack");
					scanf("%d",&n);
					if(n==2)
					{
						printf("\n Right answer!:)");
						p7=1;
						c++;
					}
					else
					{
						printf("\n Wrong answer!;(");
						p7=0;
					}
					printf("\n You have got %d points!",p7);
					printf("\nQ8.What is the role of a Content Delivery Network (CDN) in cloud computing?");
					printf("\n 1.To improve security");
					printf("\n 2.To optimize network traffic");
					printf("\n 3.To increase server capacity");
					printf("\n 4.To manage database operations");
					scanf("%d",&n);
					if(n==2)
					{
						printf("\n Right answer!:)");
						p8=1;
						c++;
					}
					else
					{
						printf("\n Wrong answer!;(");
						p8=0;
					}
					printf("\n You have got %d points!",p8);
					printf("\nQ9.Which of the following is NOT a cloud deployment model?");
					printf("\n 1.Public cloud");
					printf("\n 2.Private cloud");
					printf("\n 3.Personal cloud");
					printf("\n 4.Group cloud");
					scanf("%d",&n);
					if(n==4)
					{
						printf("\n Right answer!:)");
						p9=1;
						c++;
					}
					else
					{
						printf("\n Wrong answer!;(");
						p9=0;
					}
					printf("\n You have got %d points!",p9);
					printf("\nQ10.What does the term auto-scaling refer to in cloud computing?");
					printf("\n 1.Automatically resizing virtual machines");
					printf("\n 2.Adjusting cloud storage capacity");
					printf("\n 3.Enforcing security protocols");
					printf("\n 4.Managing network bandwidth");
					scanf("%d",&n);
					if(n==1)
					{
						printf("\n Right answer!:)");
						p10=1;
						c++;
					}
					else
					{
						printf("\n Wrong answer!;(");
						p10=0;
					}
					printf("\n You have got %d points!",p10);
					printf("\n You have got %d points in Total out of 10!",c);
					break;
			case 0:
					printf("\nGame has ended!!");
					break;
			default: 
					printf("\n Invalid!!");
					break;
		}
}
