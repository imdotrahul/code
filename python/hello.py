import nltk
from textblob import TextBlob
from textblob import Word
text = input("enter the text to analyse\n")
obj = TextBlob(text)
sentiment, subjectivity=obj,sentiment
print(obj.sentiment)
if sentiment==0:
  print('text is neutral')
elif sentiment>0:
   print('text is positive')
else:
  print('text is negative')