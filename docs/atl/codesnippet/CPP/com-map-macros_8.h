BEGIN_COM_MAP(COuter)
   COM_INTERFACE_ENTRY(IOuter)
   COM_INTERFACE_ENTRY_CACHED_TEAR_OFF(IID_ITearOff, CTearOff, punkTearOff)
END_COM_MAP()