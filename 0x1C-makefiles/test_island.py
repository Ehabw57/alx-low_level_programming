#!/usr/bin/python3
import unittest
island_per = __import__("5-island-perimeter").island_perimeter
class Test_island(unittest.TestCase):
    def test_return(self):
        self.assertTrue(isinstance(island_per(),int))
    
    def test_onecell(self):
        grid = [[1]]
        self.assertEqual(island_per(grid),4)

    def test_igone_water(self):
        grid = [[1,0,0]]
        self.assertEqual(4,island_per(grid))

    def test_horzantoly(self):
        grid = [[1,1,0]]
        self.assertEqual(island_per(grid), 6)
    def test_vertacally(self):
        grid = [[1,1,0],
                [0,1,1]]
        self.assertEqual(island_per(grid), 10)
    def test_edge_case1(self):
        grid = [[1,0,1],
                [1,1,1]]
        self.assertEqual(island_per(grid), 12)
        

if __name__ == "__main__":
    Unittest.main()

