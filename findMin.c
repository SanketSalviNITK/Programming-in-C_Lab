int findMin(int *p){
    int min=*p;
    for(int j=0;j<10;j++,p++)
    {
        if(min>*p)
            min=*p;
    }
    return min;
}