
int newballx = 50;
int newbally = 700;
int up=1;
int down=1;
int left=1;
int right=1;
int page;

void maze()
{
	if(newballx==110&&newbally==560)
	{
	 up=0;
	 left=0;
	 right=1;
	 down=1;
	}
	if(newballx==170&&newbally==560)
	{
	 up=0;
	 left=1;
	 right=1;
	 down=0;
	}if(newballx==330&&newbally==540)
	{
	 up=0;
	 left=1;
	 right=0;
	 down=1;
	}if(newballx==330&&newbally==500)
	{
	 up=1;
	 left=0;
	 right=0;
	 down=1;
	}if(newballx==330&&newbally==440)
	{
	 up=1;
	 left=1;
	 right=0;
	 down=0;
	}if(newballx==230&&newbally==440)
	{
	 up=0;
	 left=0;
	 right=1;
	 down=0;
	}if(newballx==110&&newbally==340)
	{
	 up=1;
	 left=0;
	 right=1;
	 down=0;
	}if(newballx==230&&newbally==340)
	{
	 up=0;
	 left=1;
	 right=0;
	 down=1;
	}if(newballx==210&&newbally==240)
	{
	 up=1;
	 left=1;
	 right=1;
	 down=0;
	}if(newballx==150&&newbally==220)
	{
	 up=0;
	 left=0;
	 right=1;
	 down=1;
	}if(newballx==270&&newbally==240)
	{
	 up=0;
	 left=1;
	 right=1;
	 down=0;
	}if(newballx==350&&newbally==240)
	{
	 up=1;
	 left=1;
	 right=0;
	 down=0;
	}if(newballx==330&&newbally==340)
	{
	 up=0;
	 left=0;
	 right=1;
	 down=1;
	}if(newballx==390&&newbally==340)
	{
	 up=0;
	 left=1;
	 right=0;
	 down=0;
	}if(newballx==90&&newbally==120)
	{
	 up=1;
	 left=0;
	 right=1;
	 down=0;
	}if(newballx==470&&newbally==120)
	{
	 up=1;
	 left=1;
	 right=0;
	 down=0;
	}if(newballx==450&&newbally==240)
	{
	 up=0;
	 left=0;
	 right=1;
	 down=1;
	}if(newballx==510&&newbally==240)
	{
	 up=0;
	 left=1;
	 right=1;
	 down=0;
	}if(newballx==570&&newbally==240)
	{
	 up=1;
	 left=0;
	 right=0;
	 down=1;
	}if(newballx==570&&newbally==120)
	{
	 up=1;
	 left=0;
	 right=1;
	 down=0;
	}if(newballx==850&&newbally==120)
	{
	 up=1;
	 left=0;
	 right=1;
	 down=0;
	}if(newballx==630&&newbally==120)
	{
	 up=0;
	 left=1;
	 right=0;
	 down=1;
	}if(newballx==670&&newbally==240)
	{
	 up=1;
	 left=0;
	 right=1;
	 down=0;
	}if(newballx==910&&newbally==120)
	{
	 up=1;
	 left=1;
	 right=1;
	 down=0;
	}if(newballx==570&&newbally==320)
	{
	 up=1;
	 left=0;
	 right=1;
	 down=1;
	}if(newballx==750&&newbally==240)
	{
	 up=0;
	 left=1;
	 right=1;
	 down=0;
	}if(newballx==1150&&newbally==120)
	{
	 up=0;
	 left=1;
	 right=0;
	 down=1;
	}if(newballx==630&&newbally==320)
	{
	 up=0;
	 left=1;
	 right=1;
	 down=0;
	}if(newballx==990&&newbally==120)
	{
	 up=0;
	 left=0;
	 right=1;
	 down=0;
	}if(newballx==910&&newbally==220)
	{
	 up=0;
	 left=0;
	 right=1;
	 down=1;
	}if(newballx==1050&&newbally==220)
	{
	 up=1;
	 left=1;
	 right=0;
	 down=0;
	}if(newballx==690&&newbally==320)
	{
	 up=0;
	 left=1;
	 right=0;
	 down=1;
	}if(newballx==1010&&newbally==220)
	{
	 up=1;
	 left=1;
	 right=1;
	 down=0;
	}if(newballx==1090&&newbally==220)
	{
	 up=0;
	 left=1;
	 right=1;
	 down=0;
	}if(newballx==1010&&newbally==380)
	{
	 up=1;
	 left=0;
	 right=0;
	 down=1;
	}if(newballx==1010&&newbally==440)
	{
	 up=0;
	 left=0;
	 right=1;
	 down=1;
	}if(newballx==1090&&newbally==440)
	{
	 up=0;
	 left=1;
	 right=1;
	 down=0;
	}if(newballx==1150&&newbally==440)
	{
	 up=1;
	 left=1;
	 right=0;
	 down=0;
	}if(newballx==810&&newbally==440)
	{
	 up=1;
	 left=0;
	 right=0;
	 down=1;
	}if(newballx==1150&&newbally==500)
	{
	 up=1;
	 left=0;
	 right=0;
	 down=1;
	}if(newballx==1070&&newbally==540)
	{
	 up=0;
	 left=1;
	 right=1;
	 down=0;
	}if(newballx==870&&newbally==540)
	{
	 up=0;
	 left=1;
	 right=1;
	 down=0;
	}if(newballx==810&&newbally==540)
	{
	 up=0;
	 left=0;
	 right=1;
	 down=1;
	}if(newballx==1150&&newbally==540)
	{
	 up=0;
	 left=1;
	 right=0;
	 down=1;
	}if(newballx==730&&newbally==440)
	{
	 up=0;
	 left=1;
	 right=1;
	 down=0;
	}if(newballx==670&&newbally==440)
	{
	 up=1;
	 left=0;
	 right=1;
	 down=0;
	}if(newballx==690&&newbally==540)
	{
	 up=0;
	 left=1;
	 right=0;
	 down=1;
	}if(newballx==530&&newbally==540)
	{
	 up=0;
	 left=1;
	 right=1;
	 down=0;
	}if(newballx==450&&newbally==500)
	{
	 up=1;
	 left=0;
	 right=0;
	 down=1;
	}if(newballx==570&&newbally==440)
	{
	 up=0;
	 left=1;
	 right=0;
	 down=1;
	}if(newballx==510&&newbally==470)
	{
	 up=0;
	 left=1;
	 right=1;
	 down=0;
	}if(newballx==450&&newbally==440)
	{
	 up=1;
	 left=0;
	 right=1;
	 down=0;
	}if(newballx==450&&newbally==540)
	{
	 up=0;
	 left=0;
	 right=1;
	 down=1;
	}
	if(newballx==190&&newbally==120 ||newballx==210&&newbally==120||newballx==230&&newbally==120||newballx==250&&newbally==120||newballx==270&&newbally==120||newballx==290&&newbally==120||newballx==310&&newbally==120||newballx==330&&newbally==120||newballx==350&&newbally==120||newballx==370&&newbally==120||newballx==390&&newbally==120)
	{
	 up=1;
	 left=1;
	 right=1;
	 down=0;
	}if(newballx==1150&&newbally==20){
	page=99;
	}
	
	
	
	
	


	 
	
	
	
	
	
	
	
	
	

}









