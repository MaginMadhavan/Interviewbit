string Solution::solve(int a) {

        
        if(a>12)return "Invalid";
        else if(a>=3 && a<=5)return "Spring";
        else if(a>=6 && a<=8)return "Summer";
        else if(a>=9 && a<=11)return "Autumn";
        else if(a==1 || a==2 || a==12) return "Winter";
        

       /* if(a>12) return "Invalid";
        else if(a>=3&&a<=5) return "Spring";
        else if(a>=6&&a<=8) return "Summer";
        else if(a>=9&&a<=11) return "Autumn";
        else return "Winter";*/

    
}
