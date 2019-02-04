class Array:
    def __init__(self,capacity=10):
        if capacity >0:
            self.capacity = capacity
            self.arr =[]
            self.len=0
        else :
            raise Exception('Cannot create array with size less that 0')

    def add(self,val):
        if self.len +1 >= self.capacity:
            self.capacity = self.capacity * 2
            self.arr.append(val)
        else:
            self.arr.append(val)

        self.len = self.len+1

    def get(self,index):
        return self.arr[index]





