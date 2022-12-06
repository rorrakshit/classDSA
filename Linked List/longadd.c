
/****************8****************8/
    for(int i=0;i<hh;i++)
    {char t[5];
        for(int j=0;j<4;j++)
        {
            t[j]=xx[l];
            l++;
        }
        InsBeg(&q,atoi(t));
    }
    char vv[g+1];
    for(int i=0;i<h;i++)
    {
        vv[i]=xx[i];
    }
    InsBeg(&q,atoi(vv));
    Traverse(&q);
    printf("\n");
    a=addn(&p,&q);
    Traverse(&a);
}