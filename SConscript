# -*- python -*-
# $Header: /nfs/slac/g/glast/ground/cvs/geomrep/SConscript,v 1.9 2012/01/18 16:05:29 heather Exp $
# Authors: T.Burnett <tburnett@u.washington.edu>
# Version: geomrep-04-03-05
Import('baseEnv')
Import('listFiles')
Import('packages')
progEnv = baseEnv.Clone()
libEnv = baseEnv.Clone()

geomrep = libEnv.StaticLibrary('geomrep', listFiles(['src/*.cxx']))

progEnv.Tool('geomrepLib')

test_geomrep = progEnv.Program('testgeom', listFiles(['src/test/*.cxx']))

progEnv.Tool('registerTargets', package = 'geomrep',
             staticLibraryCxts = [[geomrep, libEnv]],
             testAppCxts = [[test_geomrep, progEnv]], 
             includes = listFiles(['geomrep/*.h']))




