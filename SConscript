# -*- python -*-
# $Header: /nfs/slac/g/glast/ground/cvs/GlastRelease-scons/geomrep/SConscript,v 1.3 2009/01/23 00:07:42 ecephas Exp $
# Authors: T.Burnett <tburnett@u.washington.edu>
# Version: geomrep-04-03-00
Import('baseEnv')
Import('listFiles')
Import('packages')
progEnv = baseEnv.Clone()
libEnv = baseEnv.Clone()

libEnv.Tool('geomrepLib', depsOnly = 1)

geomrep = libEnv.StaticLibrary('geomrep', listFiles(['src/*.cxx']))

progEnv.Tool('geomrepLib')

test_geomrep = progEnv.Program('testgeom', listFiles(['src/test/*.cxx']))

progEnv.Tool('registerTargets', package = 'geomrep',
             staticLibraryCxts = [[geomrep, libEnv]],
             testAppCxts = [[test_geomrep, progEnv]], 
             includes = listFiles(['geomrep/*.h']))




