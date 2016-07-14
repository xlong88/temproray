from jinja2 import Environment, PackageLoader
import jinja2
templateLoader = jinja2.FileSystemLoader(searchpath=".")
env = Environment(loader=templateLoader)
t = env.get_template('test.c')

with open('gencodes.c','w') as f:
    f.write(t.render(numberofpointers=10, numberofiterations=12))
