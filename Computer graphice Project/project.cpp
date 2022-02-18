#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>

int main()
{
    int gd=DETECT,gm;
    initwindow(1000,500);

    int i=0,m=0,j=1000;
    while(!kbhit())
    {
        cleardevice();
        //i++;
        if(i>getmaxx())
            {i-=2000;}

        j--;
        if(j<-1000)
            {j=900;}
        //car body
        //setfillstyle(SOLID_FILL,4);
        line(80+i,400,90+i,370);
        line(90+i,370,120+i,370);

        line(120+i,370,160+i,340);
        line(160+i,340,230+i,340);
        line(230+i,340,275+i,370);
        line(275+i,370,310+i,370);
        line(310+i,370,335+i,390);
        line(335+i,390,335+i,400);

        line(283+i,400,335+i,400);
        line(163+i,400,237+i,400);
        line(80+i,400,117+i,400);

        //tiear
        arc(260+i,400,0,180,23);
        arc(140+i,400,0,180,23);

        //floodfill(191+i,341,WHITE);

        circle(260+i,400,18);
        circle(260+i,400,12);
        circle(140+i,400,18);
        circle(140+i,400,12);

        pieslice(260+i,400,0+m,90+m,12);
        pieslice(260+i,400,180+m,270+m,12);

        pieslice(140+i,400,0+m,90+m,12);
        pieslice(140+i,400,180+m,270+m,12);

        //car window
        line(130+i,370,165+i,345);
        line(165+i,345,190+i,345);
        line(190+i,345,190+i,370);
        line(130+i,370,190+i,370);

        line(195+i,345,195+i,395);

        line(200+i,345,200+i,370);
        line(200+i,345,230+i,345);
        line(230+i,345,265+i,370);
        line(200+i,370,265+i,370);

        //road
        line(0,418,1000,418);
        setfillstyle(8,6);
        line(0,423,1000,423);
        floodfill(100,425,WHITE);

        //My name
        outtextxy(900,400,"Made by Ayan");

        //moon
        setfillstyle(SOLID_FILL,WHITE);
        circle(500,100,30);
        floodfill(500,100,WHITE);

        //star
        setcolor(15);
        outtextxy(50,50,"'");
        outtextxy(100,100,"'");
        outtextxy(200,50,"'");
        outtextxy(300,80,"'");

        outtextxy(550,50,"'");
        outtextxy(600,100,"'");
        outtextxy(700,70,"'");
        outtextxy(800,50,"'");
        outtextxy(900,80,"'");

        //tree 0
        circle(80+j,295,15);
        line(80+j,310,80+j,330);

        //building 1
        line(0,330,1000,330);

        rectangle(100+j,200,155+j,330);
        rectangle(105+j,205,125+j,225);
        rectangle(105+j,230,125+j,250);

        rectangle(130+j,205,150+j,225);
        rectangle(130+j,255,150+j,275);

        //building 2
        rectangle(160+j,170,215+j,330);

        rectangle(165+j,205,185+j,225);
        rectangle(190+j,205,210+j,225);
        rectangle(190+j,180,210+j,200);

        rectangle(190+j,255,210+j,275);

        rectangle(165+j,280,185+j,300);

        //tree 1
        circle(230+j,295,15);
        line(230+j,310,230+j,330);

        //tree 2
        circle(280+j,295,15);
        line(280+j,310,280+j,330);

        //building 3
        rectangle(300+j,200,355+j,330);

        rectangle(305+j,205,325+j,225);
        rectangle(330+j,230,350+j,250);

        rectangle(305+j,280,325+j,300);

        //building 4
        line(360+j,330,360+j,190);
        line(360+j,190,415+j,180);
        line(415+j,180,415+j,330);

        rectangle(365+j,195,385+j,215);
        rectangle(390+j,195,410+j,215);

        rectangle(390+j,220,410+j,240);

        rectangle(365+j,270,385+j,290);
        rectangle(365+j,295,385+j,315);


        //building 5
        rectangle(420+j,220,475+j,330);

        rectangle(450+j,225,470+j,245);

        rectangle(425+j,250,445+j,270);

        rectangle(450+j,275,470+j,295);


        //tree 3
        circle(490+j,295,15);
        line(490+j,310,490+j,330);


        //building 6
        rectangle(520+j,180,575+j,330);

        rectangle(525+j,210,545+j,230);
        rectangle(550+j,210,570+j,230);

        rectangle(525+j,255,545+j,275);
        rectangle(550+j,255,570+j,275);

        //tree 4
        circle(705+j,295,15);
        line(705+j,310,705+j,330);

        //building 7
        rectangle(720+j,180,775+j,330);

        rectangle(725+j,185,745+j,205);
        rectangle(750+j,185,770+j,205);
        rectangle(725+j,210,745+j,230);

        rectangle(750+j,235,770+j,255);

        rectangle(725+j,260,745+j,280);
        rectangle(750+j,260,770+j,280);
        rectangle(725+j,285,745+j,305);

        //building 8
        rectangle(780+j,160,835+j,330);
        line(780+j,160,807+j,140);
        line(809+j,140,835+j,160);

        line(808+j,140,808+j,130);

        rectangle(785+j,165,805+j,185);

        rectangle(810+j,190,830+j,210);
        rectangle(810+j,215,830+j,235);

        rectangle(785+j,235,805+j,255);

        rectangle(810+j,260,830+j,280);


        //building 9
        line(840+j,200,840+j,330);
        line(840+j,200,895+j,190);
        line(895+j,190,895+j,330);

        rectangle(845+j,205,865+j,225);
        rectangle(870+j,205,890+j,225);

        rectangle(845+j,230,865+j,250);

        rectangle(870+j,280,890+j,300);

        //tree 5
        circle(920+j,295,15);
        line(920+j,310,920+j,330);

        if(m<-360)
        {
            m=90;
        }
        m-=3;
        delay(1);
    }

    getch();
    closegraph();
}
