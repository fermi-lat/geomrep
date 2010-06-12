# -*- python -*-
# $Header: /nfs/slac/g/glast/ground/cvs/geomrep/SConscript,v 1.6 2010/06/11 00:45:30 jrb Exp $
# Authors: T.Burnett <tburnett@u.washington.edu>
# Version: geomrep-04-03-02
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




