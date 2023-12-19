#!/usr/bin/python3
"""square class"""


class Square:
    """square"""

    def __init__(self, size=0, position=(0, 0)):
        """init
        Args:
            size: size of the square
            position: position of the square x, y
        """
        self.size = size
        self.position = position

    @property
    def size(self):
        """size getter"""
        return self.__size

    @size.setter
    def size(self, value):
        """size setter"""
        if not isinstance(value, int):
            raise TypeError("size must be an integer")
        elif value < 0:
            raise ValueError("size must be >= 0")
        self.__size = value

    @property
    def position(self):
        """position getter"""
        return self.__position

    @position.setter
    def position(self, value):

