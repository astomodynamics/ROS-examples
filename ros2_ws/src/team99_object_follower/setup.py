from setuptools import setup

package_name = 'team99_object_follower'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='tomo',
    maintainer_email='tomo.sasaki.hiro@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "find_object = team99_object_follower.find_object:main",
            "rotate_robot = team99_object_follower.rotate_robot:main"
        ],
    },
)
