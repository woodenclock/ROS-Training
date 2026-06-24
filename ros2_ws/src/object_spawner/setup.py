import os
from glob import glob
from setuptools import setup, find_packages

package_name = 'object_spawner'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.py')),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.rviz')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='vm',
    maintainer_email='vm@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'object_spawner_node = object_spawner.object_spawner:main'
        ],
    },
)
