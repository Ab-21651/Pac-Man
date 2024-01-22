//Abdullah Attique 23I-0073  Assignment 4


#include<iostream>
using namespace std;
#include<cstdlib>
#include<ctime>
int main()
{
srand(time(0));
  char arr[25][25],ch;
  int  c=4,d=12,e=15,a=21,b=12,f=0,x=0,l=0,k=0,h=4;
 
  for(int i=0;i<25;i++)
  {
   for(int j=0;j<25;j++)
    {
      if((i==0)||(i==24))
      {
        arr[i][j]='#';
       }
       
       else if((i==0||i==1||i==2||i==3||i==4||i==5||i==6||i==7||i==8||i==9||i==10||i==11||i==12||i==13||i==14||i==15||i==16||i==17||i==18||i==19||i==20||i==21||i==22||i==23||i==24)&&(j==0||j==24))
       {
         arr[i][j]='#';
         }
         
         else if((i==4||i==5)&&(j==3||j==4||j==5||j==6||j==7||j==8||j==16||j==17||j==18||j==19||j==20||j==21))
         {
         arr[i][j]='#';
         }
         
         else if((i==21||i==22)&&(j==3||j==4||j==5||j==6 ||j==18||j==19||j==20||j==21))
         {
         arr[i][j]='#';
         }
         
         else if((i==9)&&(j==4||j==8||j==9||j==10||j==11||j==12||j==13||j==14||j==15||j==16||j==20))
         {
         arr[i][j]='#';
         }
         
         else if((i==10||i==11||i==12||i==14)&&(j==4||j==12||j==20))
         {
         arr[i][j]='#';
         }
         
         else if((i==15||i==16)&&(j==4||j==20))
         {
         arr[i][j]='#';
         }
         
         else if((i==13)&&(j==4||j==5||j==6||j==7||j==8||j==9||j==12||j==15||j==16||j==17||j==18||j==19||j==20))
         {
         arr[i][j]='#';
         }
         
         else if((i==16)&&(j==8||j==9||j==10||j==14||j==15||j==16))
          {
         arr[i][j]='#';
         }
         
         else if((i==17||i==18||i==19||i==20||i==21||i==22)&&(j==8||j==16))
          {
         arr[i][j]='#';
         }
         
         else if((i==22)&&(j==9||j==10||j==11||j==12||j==13||j==14||j==15))
          {
         arr[i][j]='#';
         }
         
         else if((i==4)&&(j==12||j==15))
          {
         arr[i][j]='8';
         }
         
         
         
         else if((i==21)&&(j==12))
          {
         arr[i][j]='<';
         }
         
       else
       {
       arr[i][j]='.';
       x++;
       }
     }
   }
   
      for(int i=0;i<25;i++)
      {
        for(int j=0;j<25;j++)
         {
           cout<<" "<<arr[i][j];
         }
         cout<<endl;
         }
         
         cout<<endl<<endl<<"Enter W to move UPWARD, S to move DOWNWARD, A to move LEFTWARD, D to move RIGHTWARD until all pallets are eaten "<<endl;
         
         while(x>0)
         {
         
          l=rand()%4 + 1;
          k=rand()%4 + 1;
         
          switch(l)
          {
          case 4:
          if(arr[c][d+1]=='#')
                  {
          f++;
   }
                  else
                  {
                  arr[c][d]='.';
                  ++d;
                  arr[c][d]='8';
 }
 break;
  case 3:
          if(arr[c][d-1]=='#')
                  {
          f++;
   }
                  else
                  {
                  arr[c][d]='.';
                  --d;
                  arr[c][d]='8';
 }
 break;
  case 2:
          if(arr[c+1][d]=='#')
                  {
          f++;
   }
                  else
                  {
                  arr[c][d]='.';
                  ++c;
                  arr[c][d]='8';
 }
          break;
          case 1:
          if(arr[c-1][d]=='#')
                  {
          f++;
   }
                  else
                  {
                  arr[c][d]='.';
                  --c;
                  arr[c][d]='8';
 }
 break;
}
         
          switch(k)
          {
          case 2:
          if(arr[h][e+1]=='#')
                  {
          f++;
   }
                  else
                  {
                  arr[h][e]='.';
                  ++e;
                  arr[h][e]='8';
 }
 break;
  case 3:
          if(arr[h][e-1]=='#')
                  {
          f++;
   }
                  else
                  {
                  arr[h][e]='.';
                  --e;
                  arr[h][e]='8';
 }
 break;
  case 1:
          if(arr[h+1][e]=='#')
                  {
          f++;
   }
                  else
                  {
                  arr[h][e]='.';
                  ++h;
                  arr[h][e]='8';
 }
          break;
          case 4:
          if(arr[h-1][e]=='#')
                  {
          f++;
   }
                  else
                  {
                  arr[h][e]='.';
                  --h;
                  arr[h][e]='8';
 }
 break;
}
         
           cin>>ch;
           if(ch=='w'||ch=='W'||ch=='A'||ch=='a'||ch=='S'||ch=='s'||ch=='D'||ch=='d')
           {
           switch(ch)
           {
              case 'd':
               case 'D':  
    if(arr[a][b+1]=='#')
                  {
                  cout<<"WARNING WALL AHEAD!!!. Press Again any Key"<<endl;
                  for(int i=0;i<25;i++)
                       {
                        for(int j=0;j<25;j++)
                        {
                          cout<<" "<<arr[i][j];
                        }
                          cout<<endl;
                        }
                  break;
 }
 
  if(arr[a][b+1]=='8')
                  {
                  cout<<"Game Over";
                  exit(0);
 }
 
   arr[a][b]=' ';
                 b++;
                  arr[a][b]='<';
                 
                 
                   if(arr[a][b]=='.'){

                    for(int i=0;i<25;i++)
                       {
                        for(int j=0;j<25;j++)
                        {
                          cout<<" "<<arr[i][j];
                        }
                          cout<<endl;
                        }
                        x--;
                    }
                    else
                      for(int i=0;i<25;i++)
                       {
                        for(int j=0;j<25;j++)
                        {
                          cout<<" "<<arr[i][j];
                        }
                          cout<<endl;
                        }
                   
                        break;
                       
                      case 'w':
                      case 'W':
                  if(arr[a-1][b]=='#')
                  {
                  cout<<"WARNING WALL AHEAD!!!. Press Again any Key"<<endl;
                  for(int i=0;i<25;i++)
                       {
                        for(int j=0;j<25;j++)
                        {
                          cout<<" "<<arr[i][j];
                        }
                          cout<<endl;
                        }
                  break;
 }
               
                if(arr[a-1][b]=='8')
                  {
                  cout<<"Game Over";
                  exit(0);
 }
                     
               arr[a][b]=' ';
               a--;
               arr[a][b]='v';
               
               
               
                  if(arr[a][b]=='.'){
                    for(int i=0;i<25;i++)
                       {
                        for(int j=0;j<25;j++)
                        {
                          cout<<" "<<arr[i][j];
                        }
                          cout<<endl;
                        }
                        x--;
                    }
                    else
                    {
                    for(int i=0;i<25;i++)
                       {
                        for(int j=0;j<25;j++)
                        {
                          cout<<" "<<arr[i][j];
                        }
                          cout<<endl;
                        }
                   
}
                   
                       
                        break;

 
                        case 'a':
                        case 'A':
                       
                  if(arr[a][b-1]=='#')
                  {
                    cout<<"WARNING WALL AHEAD!!!. Press Again any Key"<<endl;
                  for(int i=0;i<25;i++)
                       {
                        for(int j=0;j<25;j++)
                        {
                          cout<<" "<<arr[i][j];
                        }
                          cout<<endl;
                        }
                  break;
 }
  if(arr[a][b-1]=='8')
                  {
                  cout<<"Game Over";
                  exit(0);
 }
               
               arr[a][b]=' ';
               b--;
               arr[a][b]='>';
               
                 
               
                if(arr[a][b]=='.'){
                    for(int i=0;i<25;i++)
                       {
                        for(int j=0;j<25;j++)
                        {
                          cout<<" "<<arr[i][j];
                        }
                          cout<<endl;
                        }
                        x--;
                    }
                    else
                    {
                    for(int i=0;i<25;i++)
                       {
                        for(int j=0;j<25;j++)
                        {
                          cout<<" "<<arr[i][j];
                        }
                          cout<<endl;
                        }
}
         
                        break;  
                       
                        case 's':
                        case 'S':
                      if(arr[a+1][b]=='#')
                  {
                  cout<<"WARNING WALL AHEAD!!!. Press Again any Key"<<endl;
                  for(int i=0;i<25;i++)
                       {
                        for(int j=0;j<25;j++)
                        {
                          cout<<" "<<arr[i][j];
                        }
                          cout<<endl;
                        }
                  break;
 }
 if(arr[a+1][b]=='8')
                  {
                  cout<<"Game Over";
                  exit(0);
 }
   
               arr[a][b]=' ';
               a++;
               arr[a][b]='^';
               
 
                if(arr[a][b]=='.'){
                    for(int i=0;i<25;i++)
                       {
                        for(int j=0;j<25;j++)
                        {
                          cout<<" "<<arr[i][j];
                        }
                          cout<<endl;
                        }
                        x--;
                    }
                    else
                    {
                    for(int i=0;i<25;i++)
                       {
                        for(int j=0;j<25;j++)
                        {
                          cout<<" "<<arr[i][j];
                        }
                          cout<<endl;
                        }
}  
                        break;      
      }
     
      }
      else
      { 
      cout<<"Input invalid "<<endl;
      }
     
      }
      cout<<"Congratulations You Won!!!"<<endl;
      return 0;
      }      

	

