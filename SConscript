# -*- python -*-
# $Header: /nfs/slac/g/glast/ground/cvs/GlastRelease-scons/geomrep/SConscript,v 1.1 2008/08/26 22:00:19 ecephas Exp $
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
progEnv.Tool('guiLib')
test_geomrep = progEnv.Program('testgeom', listFiles(['src/test/*.cxx']))

progEnv.Tool('registerObjects', package = 'geomrep', libraries = [geomrep], testApps = [test_geomrep], 
	includes = listFiles(['geomrep/*.h']))




