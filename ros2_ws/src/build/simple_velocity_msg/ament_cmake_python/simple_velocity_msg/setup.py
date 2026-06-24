from setuptools import find_packages
from setuptools import setup

setup(
    name='simple_velocity_msg',
    version='0.0.0',
    packages=find_packages(
        include=('simple_velocity_msg', 'simple_velocity_msg.*')),
)
