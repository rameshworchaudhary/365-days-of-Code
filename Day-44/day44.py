#longest common string without repeating characters
def longest_unique_substring(s):
    start = 0
    max_length = 0
    char_index_map = {}

    for end in range(len(s)):
        if s[end] in char_index_map and char_index_map[s[end]] >= start:
            start = char_index_map[s[end]] + 1
        char_index_map[s[end]] = end
        max_length = max(max_length, end - start + 1)

    return max_length

s = "abcabcbb"
print("The length of the longest unique substring is:", longest_unique_substring(s))