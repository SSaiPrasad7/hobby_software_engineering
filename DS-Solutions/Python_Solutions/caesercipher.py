def cipher(sentence,factor):
    sol=[]
    if type(sentence)==str and factor>0 and type(factor)==int:
        for i in range(len(sentence)):
            letter=ord(sentence[i])
            coded_value = ''
            if ord('A')<=ord(sentence[i])<=ord('Z'):
                coded_value=shift(letter,factor,ord('A'),26)
            elif ord('a')<=ord(sentence[i])<=ord('z'):
                coded_value=shift(letter,factor,ord('a'),26)
            elif ord('0')<=ord(sentence[i])<=ord('9'):
                coded_value=shift(letter,factor,ord('0'),10)
            else:
                coded_value=sentence[i]
            sol.append(coded_value)
        code_word=''.join([str(letter) for letter in sol])
        return code_word
    else:
        if type(sentence)!=str:
            return 'Entered string is not type of str.'
        else:
            return 'Shift is less than zero or type is not integer.'
def shift(letter,factor,intial_index,count):
    return chr((((letter-intial_index)+factor)%count)+intial_index)

print(cipher('Sai',1.5))