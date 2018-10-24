#grade this python file, not .cpp
# convert lines (lowercase) in english to pig latin
# takes string of chars rather than reading file (not very familiar with working with files in python)
def PigLatin(string):
	vowels = ["a", "e", "i", "o", "u", "y"]
	if type(string) is not str or len(string) < 1:
		return "Not proper input"
	else:
		string = string.lower()
		words = string.split()
		pigList = []
		for word in words:
			if word.isalpha() is False:
				return "Input as English"
			elif word[0] in vowels:
				pigList.append(word + "yay")
			else:
				constList = []
				letters = list(word)
				count = 0
				pigWord = ""
				while count in range(len(letters)):
					if letters[count] not in vowels:
						constList.append(letters[count])
						count += 1
					else:
						pigWord += "".join(letters[count:]) + "".join(constList) + "ay"
						break
				pigList.append(pigWord)
		translation = ' '.join(pigList)
		return translation
