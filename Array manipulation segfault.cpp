 long size=(long)n;
    long arr[size]={0}; long  start,end,k;

        long m=(long)queries.size();

    for(long i=0;i<m;i++)
    {

             start=(long)queries[i][0];
             end=(long)queries[i][1];
             k=(long)queries[i][2];


            for(long j=start-1;j<end;j++)
            {
                arr[j]+= k;
            }

    }

    sort(arr,arr+size);
    return arr[size-1];
