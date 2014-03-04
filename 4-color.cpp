void  MapColor(AdjMatrix  C)
        //以邻接矩阵C表示的n个国家的地区涂色
{
	int s[];   //栈的下标是国家编号，内容是色数
       s[1]=1；   //编号01的国家涂1色
       i=2;j=1;   //i为国家号，j为涂色号
       while (i<=n)
         {
         	while (j<=4 && i<=n)
            {
            	k=1;  //k指已涂色区域号
             while (k<i && s[k]*C[i][k]!=j) k++;  //判相邻区是否已涂色
             if (k<i) j=j+1;      //用j+1色继续试探
             else {s[i]=j;i++;j=1;}//与相邻区不重色，涂色结果进栈，继续对下一区涂色进行试探
            }//while (j<=4 && i<=n)
          }//while (i<=n)
       if (j>4) {i--; j=s[i]+1;}  //变更栈顶区域的颜色。
}//while   }//结束MapColor
