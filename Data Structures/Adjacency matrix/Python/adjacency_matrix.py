class Matrix():
    def __init__(self, row_num, col_num, default_element_value=None):
        self.row_num = row_num
        self.col_num = col_num
        self.elements = list()
        for _ in range(row_num):
            self.elements.append([default_element_value for _ in range(col_num)])

    def get_element(self, row_num, col_num):
        return self.elements[row_num][col_num]
    
    def set_element(self, row_num, col_num, value):
        self.elements[row_num][col_num] = value

class AdjacencyMatrix(Matrix):
    def __init__(self, vertice_num, no_edge_value=0):
        super().__init__(vertice_num, vertice_num, no_edge_value)
        self.no_edge_value = no_edge_value
    
    def get_edge_value(self, vertice_1, vertice_2):
        return self.get_element(vertice_1, vertice_2)
    
    def set_edge_value(self, vertice_1, vetice_2, value):
        self.set_element(vertice_1, vetice_2, value)

    def is_there_edge(self, vertice_1, vertice_2):
        if self.get_edge_value(vertice_1, vertice_2) is not None and self.get_edge_value(vertice_1, vertice_2) != 0:
            return True
        return False
    
    def set_edge(self, vertice_1, vertice_2):
        self.set_edge_value(vertice_1, vertice_2, 1)
    
    def unset_edge(self, vertice_1, vertice_2):
        self.set_edge_value(vertice_1, vertice_2, self.no_edge_value)

def main():
    test_matrix = AdjacencyMatrix(3)
    test_matrix.set_edge(0, 2)
    test_matrix.set_edge(0, 1)
    test_matrix.set_edge(1, 2)
    test_matrix.set_edge(1, 1)
    test_matrix.unset_edge(0, 1)
    print(test_matrix.get_edge_value(1, 2))
    print(test_matrix.is_there_edge(0, 1))
    print(test_matrix.is_there_edge(1, 1))
    print(test_matrix.elements)

if __name__ == "__main__":
    main()
