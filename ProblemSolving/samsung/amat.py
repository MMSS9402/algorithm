import pandas as pd

def filter_words_have_o(word_list):
    return [word for word in word_list if 'o' in word.lower()]

def reverse_word(word_list):
    return [word[::-1] for word in word_list]

words = ["lemon","apple","orange","banana","mango"]

result_list = filter_words_have_o(words)
print(result_list)

reverse_result_list = reverse_word(words)
print(reverse_result_list)


df = pd.DataFrame()


