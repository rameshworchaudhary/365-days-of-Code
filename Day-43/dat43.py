strs = ["eat", "tea", "tan", "ate", "nat", "bat"]

groups = {}

for word in strs:
    key = ''.join(sorted(word))

    if key not in groups:
        groups[key] = []

    groups[key].append(word)

print("Grouped Anagrams:")

for group in groups.values():
    print(group)