#https://leetcode.com/problems/excel-sheet-column-title/submissions/1733940622/

# @param {Integer} column_number
# @return {String}
def convert_to_title(column_number)
    
    col = column_number
    string = String.new
    
    while col > 0
        string.prepend(((col-1)%26 + 65).chr)
        col = (col-1)/26
    end
    return string
end
