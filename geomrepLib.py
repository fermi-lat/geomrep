#$Header: /nfs/slac/g/glast/ground/cvs/GlastRelease-scons/geomrep/geomrepLib.py,v 1.1 2008/08/26 22:01:44 ecephas Exp $
def generate(env, **kw):
    if not kw.get('depsOnly', 0):
        env.Tool('addLibrary', library = ['geomrep'])
    env.Tool('geometryLib')
    env.Tool('guiLib')
def exists(env):
    return 1;
