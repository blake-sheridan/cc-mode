class a {
    a(): x(0), z(0),
	 y(0)
    {
    }

    a():
	x(0), z(0),
	y(0)
    {
    }

    class b {
	a()
	    :
	    x(0), z(0),
	    y(0)
	{
	}

	a()
	    : x(0), z(0),
	      y(0)
	{
	}
    }
}
