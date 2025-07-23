from setuptools import find_packages
from setuptools import setup

setup(
    name='walle_msg',
    version='0.0.0',
    packages=find_packages(
        include=('walle_msg', 'walle_msg.*')),
)
