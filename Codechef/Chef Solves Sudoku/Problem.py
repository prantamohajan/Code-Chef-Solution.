class Solution:
    def solvePuzzle(self, sudokuBoard):
      
        rows = [set() for _ in range(9)]
        cols = [set() for _ in range(9)]
        boxes = [set() for _ in range(9)]
        empty_cells = []

       
        for r in range(9):
            for c in range(9):
                val = sudokuBoard[r][c]
                if val != '.':
                    rows[r].add(val)
                    cols[c].add(val)
                    boxes[(r // 3) * 3 + (c // 3)].add(val)
                else:
                    empty_cells.append((r, c))

        def backtrack(cell_idx):
            
            if cell_idx == len(empty_cells):
                return True
                
            r, c = empty_cells[cell_idx]
            box_idx = (r // 3) * 3 + (c // 3)
            
           
            for num in "123456789":
                
                if num not in rows[r] and num not in cols[c] and num not in boxes[box_idx]:
                    # Make choice
                    rows[r].add(num)
                    cols[c].add(num)
                    boxes[box_idx].add(num)
                    sudokuBoard[r][c] = num
                    
                
                    if backtrack(cell_idx + 1):
                        return True
                        
                    
                    rows[r].remove(num)
                    cols[c].remove(num)
                    boxes[box_idx].remove(num)
                    sudokuBoard[r][c] = '.'
                    
            return False

        backtrack(0)