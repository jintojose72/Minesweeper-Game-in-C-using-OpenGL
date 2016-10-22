void setpixel(float x, float y)
{
       //glColor3f(0,0,0);
       //glPointSize(2);
       //glBegin(GL_POLYGON);
       //glVertex2f(0.008,0);
       glVertex2f(x,y);
       //glEnd();
}

void pix(float xc,float yc,float x,float y)
{
       setpixel(xc+x,yc+y);
       setpixel(xc-x,yc+y);
       setpixel(xc+x,yc-y);
       setpixel(xc-x,yc-y);
       setpixel(xc+y,yc+x);
       setpixel(xc-y,yc+x);
       setpixel(xc+y,yc-x);
       setpixel(xc-y,yc-x);
}


void circle(int r,int xc,int yc)
{
   int p,k,x,y;
       x=0;
       y=r;
       //printf("%f \n",r);
       pix(xc,yc,x,y);
       p=1-r;
       for(k=0;x<y;k++)
       {
               if(p<0)
               {
                       x=x+1;
                       p=p+2*x+1;
               }
               else
               {
                       x=x+1;
                       y=y-1;
                       p=p+2*x+1-2*y;
               }
               pix(xc,yc,x,y);
        //       printf("%f ",x);
       }


}



void func4(float m1,float x1,float y2,float x2)
{
  float dx,dy,end,p;
  dx=x2-x1;
  dy=-(y2-m1);
  float x,y;

   // if(dy/dx<=1)
      p = 2*dy - dx;
      if(x1 > x2)
      {
            x = x2;
            y = y2;
            end = x1;
      }
      else
      {
            x = x1;
            y = m1;
            end = x2;
      }

      while(x < end)
      {
            x = x + .004;
            if(p < 0)
            {
                  p = p + 2*dy;

            }
            else
            {
                  y = y - .004;
                  p = p + 2*(dy - dx);
            }
                  glVertex2f(y,x);
      }


}
void func3(float x1,float m1,float x2,float y2)
{
  float dx,dy,end,p;
  dx=-(x2-x1);
  dy=(y2-m1);
  float x,y;

   // if(dy/dx<=1)
      p = 2*dy - dx;
      if(x1 > x2)
      {
            x = x2;
            y = y2;
            end = x1;
      }
      else
      {
            x = x1;
            y = m1;
            end = x2;
      }

      while(x < end)
      {
            x = x + .004;
            if(p < 0)
            {
                  p = p + 2*dy;

            }
            else
            {
                  y = y - .004;
                  p = p + 2*(dy - dx);
            }
                  glVertex2f(x,y);
      }


}
void func2(float m1,float x1,float y2,float x2)
{
  float dx,dy,end,p;
  dx=x2-x1;
  dy=y2-m1;
  float x,y;

   // if(dy/dx<=1)
      p = 2*dy - dx;
      if(x1 > x2)
      {
            x = x2;
            y = y2;
            end = x1;
      }
      else
      {
            x = x1;
            y = m1;
            end = x2;
      }

      while(x < end)
      {
            x = x + .004;
            if(p < 0)
            {
                  p = p + 2*dy;

            }
            else
            {
                  y = y + .004;
                  p = p + 2*(dy - dx);
            }
                  glVertex2f(y,x);
      }


}
void func1(float x1,float m1,float x2,float y2)
{
  float dx,dy,end,p;
  dx=x2-x1;
  dy=y2-m1;
  float x,y;

   // if(dy/dx<=1)
      p = 2*dy - dx;
      if(x1 > x2)
      {
            x = x2;
            y = y2;
            end = x1;
      }
      else
      {
            x = x1;
            y = m1;
            end = x2;
      }

      while(x < end)
      {
            x = x + .004;
            if(p < 0)
            {
                  p = p + 2*dy;

            }
            else
            {
                  y = y + .004;
                  p = p + 2*(dy - dx);
            }
                  glVertex2f(x,y);
      }


}
void func5(int x1,int m1,int x2,int y2)
{int min,max,i;
    if(m1<y2)
      {
          min=m1;
          max=y2;
      }
      else
      {
          min=y2;
          max=m1;
      }
    //printf("hello");
     for(i=min;i<=max;i++)
       glVertex2f(x1,i);
}


void bresen(int x1,int m1,int x2,int y2)
{
     if(x1==x2) func5(x1,m1,x2,y2);
   else if((y2-m1)/(x2-x1)>=0){
 if ((y2-m1)/(x2-x1)>=1) {if(x1<x2)func2(x1,m1,x2,y2);else func2(x2,y2,x1,m1);}
 else {if(x1<x2)func1(x1,m1,x2,y2);else func1(x2,y2,x1,m1);}
}
 else{
  if ((y2-m1)/(x2-x1)>=-1 ) {if(x1>x2)func3(x1,m1,x2,y2);else func3(x2,y2,x1,m1);}
 else {if(x1>x2)func3(x1,m1,x2,y2);else func3(x2,y2,x1,m1);}
}
}
