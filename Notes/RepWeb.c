/*
    Represents The Interwebs
*/

// Links - Size of l
void pagerank(struct link l[], int links, int pages, double d, double r[], int iter);// r returns pagerank

struct link
{
    int src, dist;
};

int main(void)
{
    int i;
    double r[3];
    struct link l[] = {{0,1},{0,2},{1,0},{2,1}};
    pagerank(l,4,r,3,.8,20);

    for (i = 0; i < 3; i++)
    {
        printf("%g\n", r[i]);
    }
    return 0;
}

void pagerank(struct link l[], int links, int pages, double d, double r[], int iter) // Assumes: pages, links, iter > 0. 0 < d < 1. no sinks. src and dst all between 0 and pages-1
{
    int i, j;
    double s[pages]; // Temp storage
    int out[pages]; //out(p)

    //Compute number of outlinks for every page
    for (j = 0; j < pages; j++)
    {
        out[j] = 0;
    }
    for (j = 0; j < links; j++)
    {
        out[l[j].src]++;
    }

    //Initial guess
    for (j = 0; j < pages; j++)
    {
        r[j] = 1/pages;
    }

    for (i = 0; i < iter; i++)
    {
        for(j = 0; j < pages; j++)
        {
            s[j] = (1-d)/pages;
        }

        for (j = 0; j < links; j++)
        {
            s[l[j].dst] += d*r[l[j].src]/out[l[j].src];
        }

        for (j = 0; j < pages; j++)
        {
            r[j] = s[j];
        }
    }
}

/*
One solution -  Add a link from each sink to all nodes (or pretend to add them)

*/
