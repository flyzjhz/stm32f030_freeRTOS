#include "delay.h"
//#include "cmsis_os.h"
/*
                  ////////////

            /////////////////////////                   /////////////////////////////
           ////                /////                               //////
          ////                /////                               //////
         /////               /////                  /////////////////////////////////////////
        //////////////////////////                             //////  /////
       /////                                                  //////     /////
     /////    ///////////////////                            //////        /////
    ////      ////          /////                           /////            //////
   ////       ////          /////                          /////              ///////
  ////        ////          /////                         /////                ////////
 /////        ///////////////////                        /////                   /////////
//启天科技出品
//研发团队：启天四轴团队
//联系方式：QQ群：471023785
            邮箱：qitiansizhou@163.com
            淘宝：http://shop125061094.taobao.com/
//声明：此程序只可以用于学习教学，禁止用于商业用途，否则后果必究！
//版本：V2.5
//日期：20150710
//修改说明：
//
*/
void delay_Ms_Loop(u32 ms)	//自己的写的延时毫秒函数
{
	static uint32_t i;
	while(ms--)
	{
		i=1200;
		while(i--);
	}
	
}


































