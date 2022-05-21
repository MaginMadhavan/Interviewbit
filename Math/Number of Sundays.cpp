int Solution::solve(string A, int B) {

    

    
    int day;
    if (A == "Sunday") { day=0; }
    else if (A == "Monday") { day=6;}
    else if (A == "Tuesday") { day=5;}
    else if (A == "Wednesday") { day=4;}
    else if (A == "Thursday") { day=3;}
    else if (A == "Friday") { day=2;}
    else if (A == "Saturday") { day=1;}
    int ans = 0;
    if (B%7 > day) { ans = 1; }
    return (B/7 + ans) ;

    
}
