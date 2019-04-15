#include "iGraphics.h"
#include "bitmap_loader.h"
#include "myheader.h"

#include <stdio.h>
#include <string.h>
#include <iostream>
#include "maze.h"
#include "collision.h"

using namespace std;



int time1=300 ;
char timeString[100];
char playerNames[10][100];
int playerScores[10];
int i[100];
int x;
int y;
int win_b = 400, win_l = 400;
float delay = 0;
int speed = 0;
int counter =0;

char str[100], str2[100],str1[100], str3[100];
int len;
int mode = 0;
int bally=500;
int ballx = 50;
int flag = 0;
int flag1=0;
int count = 0;
int _ballstop;
int position=1;
int ball;
int pillar1 = 1400;
int pillar2 = 450;
int pillar3 = 700;
int pillar4 = 950;
int pillar5 = 1200;
int pillar6 = 1400;
int pillar7 = 450;
int pillar8 = 700;
int pillar9 = 950;
int pillar10 = 1200;
int mm = 1;
int w=40;
int s=40;
int gameover;
int point = 0;


struct player
{
	int sort,score;
	char name[250];
}play[100],t;





int gamestate = 0;
struct buttoncordinate
{
	int dx;
	int dy;

}bcordinate[3];
/*
 function iDraw() is called again and again by the system.

 */
void drawTextBox()
{
	
	iSetColor(220, 20, 60);
	iText(530, 585, "Input your name: ");
	iRectangle(530, 550, 250, 30);

}
void drawTextBox2()
{
		iSetColor(255, 255, 255);
		iText(530, 535, "Input your Score: ");
	    iRectangle(530, 500, 250, 30);

}

void iDraw()
{
	//place your drawing codes here
	iClear();
	if (page==0){//main menu
	 
	 
		iShowImage(0,0,1280,720,i[0]);
		iShowImage(100,400,200,100,i[5]);
		iShowImage(100,500,200,100,i[4]);
		iShowImage(100,600,200,100,i[3]);
		iShowImage(100,300,200,100,i[6]);
		iShowImage(100,200,200,100,i[2]);
		iPauseTimer(ball);

	}

	
	if(page == 99)//game over page
	{
		iShowImage(0,0,1280,720,gameover);

		iSetColor(0,0,0);
		iFilledRectangle(500,200,120,20);
		iSetColor(255,255,255);
		iText(501,207,str);
	}
	 

	 if (page==1)//gameplay page
	 {

		 flag = 1;
		 iResumeTimer(ball);
		
	 iShowImage(0,0,1280,720,i[1]);
	 iShowImage(0,0,1280,150,i[11]);



	 iShowImage(pillar1-=1,150,60,150,i[12]);
	 iShowImage(pillar2-=1,150,60,250,i[12]);
	 iShowImage(pillar3-=1,150,60,100,i[12]);
	 iShowImage(pillar4-=1,150,60,350,i[12]);
	 iShowImage(pillar5-=1,150,60,200,i[12]);
	 iShowImage(pillar6-=1,450,60,720,i[12]);
	 iShowImage(pillar7-=1,550,60,720,i[12]);
	 iShowImage(pillar8-=1,400,60,720,i[12]);
	 iShowImage(pillar9-=1,650,60,720,i[12]);
	 iShowImage(pillar10-=1,500,60,720,i[12]);


	iRotate(ballx+20,bally+20,mm);
	mm++;

	
	  iShowImage(ballx,bally,w,s,i[13]);
	 
	  iUnRotate();




	 //point show
	 char pp[10];
	 sprintf(pp,"%d",point);
	 iText(1260,700,pp);
	 iText(1200,700,"SCORE: ");


	 













	 if(pillar1+60 <=0)    //pillar movement
		 pillar1 = 1280;
		 if(pillar2+60 <=0)
			  pillar2 = 1280;
			 if(pillar3+60 <=0)
				  pillar3 = 1280;
				 if(pillar4+60 <=0)
					  pillar4 = 1280;
					 if(pillar5+60 <=0)
						  pillar5 = 1280;
						 if(pillar6+60 <=0)
							pillar6 = 1280;
							 if(pillar7+60 <=0)
								  pillar7 = 1280;
								 if(pillar8+60 <=0)
									  pillar8 = 1280;
									 if(pillar9+60 <=0)
										  pillar9 = 1280;
									 if(pillar10+60 <= 0)
										   pillar10 = 1280;
		 




		//collision
		void collision();







		if(pillar1 == 50)//point count
			point += 50;

		if(pillar2 == 50)
			point += 50;

		if(pillar3 == 50)
			point += 50;

		if(pillar4 == 50)
			point += 50;

		if(pillar5 == 50)
			point += 50;





			
			

	
	 if(count > 1)//ball movement
	 {
		count = 0;
		iPauseTimer(_ballstop);
		position = 1;
			 
	 }
	 iText(50,50,"Click space for main menu",GLUT_BITMAP_HELVETICA_18);
	 }
	  if (page==2)//score board
	 {
	 iShowImage(0,0,1280,720,i[9]);
	 iText(50,50,"Click space for main menu",GLUT_BITMAP_HELVETICA_18);



	
	sprintf(str,"%s                                                                                              %d",play[0].name,play[0].score);
	sprintf(str2,"%s                                                                                              %d",play[1].name,play[1].score);
	sprintf(str3,"%s                                                                                               %d",play[2].name,play[2].score);
	 
		 iText(310,411,str,GLUT_BITMAP_HELVETICA_18);
		 iText(310,355,str2,GLUT_BITMAP_HELVETICA_18);
		 iText(310,463,str3,GLUT_BITMAP_HELVETICA_18);
	





	  }
	   if (page==3)//credit
	 {
	 iShowImage(0,0,1280,720,i[7]);
	 iText(50,50,"Click space for main menu",GLUT_BITMAP_HELVETICA_18);
	 }
	    if (page==4)//instruction
	 {
	 iShowImage(0,0,1280,720,i[8]);
	 iText(50,50,"Click space for main menu",GLUT_BITMAP_HELVETICA_18);
	 }
		 if (page==5)
	 {
	 iShowImage(0,0,1280,720,i[10]);
	 iText(50,50,"Click space for main menu",GLUT_BITMAP_HELVETICA_18);
	 }

	if (page==16)
	{
		 iShowImage(0,0,1280,720,i[16]);
	}


	if (page==17)
	{
	 iShowImage(0,0,1280,720,i[15]);
	 iShowImage(0,0,1280,720,i[14]);
	 iPauseTimer(ball);
	 iRotate(ballx+20,bally+20,mm);
	 mm++;
	 iShowImage(ballx,bally,w,s,i[13]);
	 iUnRotate();
	 iText(1053,687,"Time=");
	 sprintf(timeString,"%d",time1);
	 iText(1100,687,timeString);
	 
	}
	 

}


void iPassiveMouse(int x, int y)
{
	
}


/*
 function iMouseMove() is called when the user presses and drags the mouse.
 (mx, my) is the position where the mouse pointer is.
 */
void iMouseMove(int mx, int my)
{
	printf("x = %d, y= %d\n", mx, my);
	//place your codes here
}



void ballChange(void)
{
	if(position == 1)
	bally-=2;
	else
	bally+=2;
}


void ballstop(void)
{
	count++;
}




/*
 function iMouse() is called when the user presses/releases the mouse.
 (mx, my) is the position where the mouse pointer is.
 */
void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if(page==0)
		{
		if(mx>=100 && mx<=300 && my>=600 && my<=700)
		{
		page=1;
		}
		if(mx>=100 && mx<=300 && my>=500 && my<=600 && flag == 0)
		{
		page=2;
		}
		if(mx>=100 && mx<=300 && my>=400 && my<=500  && flag == 0)
		{
		page=3;
		}
		if(mx>=100 && mx<=300 && my>=300 && my<=400  && flag == 0)
		{
		page=4;
		}
		if(mx>=100 && mx<=300 && my>=200 && my<=300  && flag == 0)
		{
		exit(0);
		}
		}
		 if(mx > 529 && mx < 778 && my > 554 && my < 580  && flag == 0)
		{
			mode = 1;
		}
		 if(mx > 529 && mx < 778 && my > 501 && my < 530  && flag == 0)
		{
			mode = 2;
		}
		 if(flag1==1)
		 {
		  if(mx > 525 && mx < 600 && my > 428 && my < 456 )
		{
			ballx=125;
			bally= 580;
			page=17;
		}
		 if(mx > 525 && mx < 600 && my > 330 && my < 360)
		{
			page =99;
		}
		 }




		 if(page==1 && flag ==1)
		 {

			 position = 0;
			 iResumeTimer(_ballstop);

		 }
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
}

/*
 function iKeyboard() is called whenever the user hits a key in keyboard.
 key- holds the ASCII value of the key pressed.
 */
void iKeyboard(unsigned char key)
{
	
	if (flag1==1){
	if (key == 'a' && page==17)//bonus level (ball movement)
		ballx -= 10;
	if (key == 's' && page==17)
		bally -= 10;
	if (key == 'd' && page==17)
		ballx += 10;
	if (key == 'w'&& page==17)
		bally += 10;
	}
	if (key==' ')
		page =0;
				



	if(page ==99 ){
		if(key == '\r')
		{
			
			strcpy(str2, str);
			printf("%s\n", str2);
			for(int i = 0; i < len; i++)
				str[i] = 0;
			len = 0;
			page= 0;
		}
		else
		{
			str[len] = key;
			len++;
		}
	}





	}
	
	
	//place your codes for other keys here


/*
 function iSpecialKeyboard() is called whenver user hits special keys like-
 function keys, home, end, pg up, pg down, arraows etc. you have to use
 appropriate constants to detect them. A list is:
 GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
 GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
 GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
 GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
 */
void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_END)
	{
		exit(0);
	}
	//place your codes for other keys here
}


void changeTime()
{

	if(time1<0)
	{

		page=99;
	}
	else 
	{

		time1--;
	}

}

int main()
{

	iSetTimer(1000,changeTime);
		FILE *fp=fopen("score.txt","r");
	int k,j;
	//sorting
			for(k = 0; k < 10; k++)
			{
				fscanf(fp,"%s %d",play[k].name,&play[k].score); 
			}
			len = 0;
			for(k=0;k<10;k++)
			{
				for(j=0;j<9;j++)
				{
					if(play[j].score<play[j+1].score)
					{
						t=play[j];
						play[j]=play[j+1];
						play[j+1]=t;
			}
		}
	}
			for(k=0;k<play[k].score;k++)
    {
        printf("%s\t\t\t%d\n",play[k].name,play[k].score);
    }


	ball = iSetTimer(10,ballChange);
	_ballstop = iSetTimer(200,ballstop);


	iInitialize(1280, 720, "Animation");
	i[0] = iLoadImage("main menu.jpg");
	i[1] = iLoadImage("bacground.jpg");
	i[2] = iLoadImage("G.jpg");
	i[3] = iLoadImage("1.jpg");
	i[4] = iLoadImage("2.jpg");
	i[5] = iLoadImage("3.jpg");
	i[6] = iLoadImage("4.jpg");
	i[7] = iLoadImage("credits.jpg");
	i[8] = iLoadImage("instruction.jpg");
	i[9] = iLoadImage("Capture.jpg");
	i[10] = iLoadImage("6.jpg");
	i[11] = iLoadImage("base.jpg");
	i[12] = iLoadImage("pillar.jpg");
	i[13] = iLoadImage("ball1.jpg");
	i[14] = iLoadImage("maze.jpg");
	i[15] = iLoadImage("maze background.jpg");
	i[16] = iLoadImage("maze option.jpg");

	gameover = iLoadImage("gameover.png");



	iStart(); // it will start drawing

	return 0;
}

