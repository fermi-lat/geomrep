# -*- python -*-
# $Header: /nfs/slac/g/glast/ground/cvs/GlastRelease-scons/geomrep/SConscript,v 1.5 2009/11/06 01:56:46 jrb Exp $
# Authors: T.Burnett <tburnett@u.washington.edu>
# Version: geomrep-04-03-01
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




