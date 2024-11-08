#define XPU_DATUM_ISNULL(xdatum) (!(xdatum)->expr_ops)

struct c21
{
    /* data */
    int expr_ops;
};

int f(c21 *arg)
{
    if (arg->expr_ops == 1)
    {
        return 1;
    }
    else if (XPU_DATUM_ISNULL(arg))
        return 0;
    else if (1)
        return 1;
    else
        return 0;
}

int f2(c21 *arg)
{
    if (arg->expr_ops == 1)
    {
        return 1;
    }
    else if ((!(arg)->expr_ops))
        return 0;
    else if (1)
        return 1;
    else
        return 0;
}
