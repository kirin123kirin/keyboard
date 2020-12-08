#!/usr/bin/env python3
# -*- coding: utf-8 -*-
__author__  = 'm.yama'
__version__ = '0.0.1'

import os
from os.path import splitext, dirname, join as pathjoin, basename, abspath
from glob import glob
from zipfile import ZipFile

getext = lambda x: splitext(x)[-1]

def elecrow(proj):
    curdir = dirname(__file__)
    plotdir = pathjoin(curdir, "plot")

    outzip = pathjoin(curdir, "..", proj + ".zip")

    with ZipFile(outzip, 'w') as z:
        for n in glob(pathjoin(plotdir, "*")):
            ext = getext(n)
            if ext.upper() == ".TXT":
                z.write(n, basename(n))
            else:
                if ext.upper() == ".GM1":
                    ext = ".GML"
                elif ext.upper() == ".DRL":
                    ext = "-" + n.split("-")[-1].replace(ext, "") + ".TXT"

                bn = proj + ext.upper()
                out = pathjoin(plotdir, bn)
                if n != out:
                    os.rename(n, out)
                    print("Renamed:", out)

                z.write(out, arcname=bn)

    print("Sucess upload zipfile for Elecrow:", outzip, sep="\n")
    print("\nhttps://www.elecrow.com/pcb-manufacturing.html")


if __name__ == "__main__":
    proj = basename(abspath(dirname(__file__)))

    elecrow(proj)

