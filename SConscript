# -*- python -*-
# $Header: /nfs/slac/g/glast/ground/cvs/GlastRelease-scons/geomrep/SConscript,v 1.10 2012/05/03 16:21:54 heather Exp $
# Authors: T.Burnett <tburnett@u.washington.edu>
# Version: geomrep-04-03-05
Import('baseEnv')
Import('listFiles')
Import('packages')
progEnv = baseEnv.Clone()
libEnv = baseEnv.Clone()

libEnv.Tool('addLinkDeps', package = 'geomrep', toBuild='static')
geomrep = libEnv.StaticLibrary('geomrep', listFiles(['src/*.cxx']))

progEnv.Tool('geomrepLib')

test_geomrep = progEnv.Program('testgeom', listFiles(['src/test/*.cxx']))

progEnv.Tool('registerTargets', package = 'geomrep',
             staticLibraryCxts = [[geomrep, libEnv]],
             testAppCxts = [[test_geomrep, progEnv]], 
             includes = listFiles(['geomrep/*.h']))




