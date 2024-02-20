#!/usr/bin/python3
"""
 User Model
"""
import hashlib
import uuid
import unittest


class User():
    """
    User class:
    - id: public string unique (uuid)
    - password: private string hash in SHA-256
    """

    _password = None

    def __init__(self):
        """
        Initialize a new user:
        - assigned an unique `id`
        """
        self.id = str(uuid.uuid4())

    @property
    def password(self):
        """
        Password getter
        """
        return self._password

    @password.setter
    def password(self, pwd):
        """
        Password setter:
        - `None` if `pwd` is `None`
        - `None` if `pwd` is not a string
        - Hash `pwd` in SHA-256 before assign to `_password`
        """
        if pwd is None or not isinstance(pwd, str):
            self._password = None
        else:
            self._password = hashlib.sha256(pwd.encode()).hexdigest()

    def is_valid_password(self, pwd):
        """
        Valid password:
        - `False` if `pwd` is `None`
        - `False` if `pwd` is not a string
        - `False` if `_password` is `None`
        - Compare `_password` and the SHA-256 value of `pwd`
        """
        if pwd is None or not isinstance(pwd, str):
            return False
        if self._password is None:
            return False
        return hashlib.sha256(pwd.encode()).hexdigest() == self._password


class TestUser(unittest.TestCase):
    """
    Test User class
    """

    def setUp(self):
        """
        Set up test cases
        """
        self.user_1 = User()
        self.user_2 = User()
        self.u_pwd = "myPassword"
        self.user_1.password = self.u_pwd

    def test_id(self):
        """
        Test id attribute
        """
        self.assertIsNotNone(self.user_1.id)
        self.assertIsNotNone(self.user_2.id)
        self.assertNotEqual(self.user_1.id, self.user_2.id)

    def test_password(self):
        """
        Test password attribute and property
        """
        self.assertNotEqual(self.user_1.password, self.u_pwd)
        self.assertIsNone(self.user_2.password)
        self.user_2.password = None
        self.assertIsNone(self.user_2.password)
        self.user_2.password = 89
        self.assertIsNone(self.user_2.password)

    def test_is_valid_password(self):
        """
        Test is_valid_password method
        """
        self.assertTrue(self.user_1.is_valid_password(self.u_pwd))
        self.assertFalse(self.user_1.is_valid_password("Fakepwd"))
        self.assertFalse(self.user_1.is_valid_password(None))
        self.assertFalse(self.user_1.is_valid_password(89))
        self.assertFalse(self.user_2.is_valid_password("No pwd"))


if __name__ == '__main__':
    unittest.main()
