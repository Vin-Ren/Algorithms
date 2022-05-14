

def str_split_single_char_token(string: str, token: str):
    """Splits given string with given token. Only supports single character tokens, but simpler."""
    result = []
    buffer = ""
    
    string_len = len(string)
    
    if len(token) > 1:
        raise NotImplementedError("This implementation of string splitting doesn't support multiple token characters.")
    
    # For each character in string, add to buffer if not equal to token, else append buffer to result list and empty buffer. 
    # if index is the last index and is the token character, add an empty entry to the result list.
    # Intentionally looping with index, to ease porting to other languages.
    for i in range(len(string)):
        if string[i] != token:
            buffer += string[i]
            continue
        result.append(buffer)
        buffer = ""
        if i == string_len-1:
            result.append('')
    
    # If buffer is not empty, append buffer to result list.
    if len(buffer) > 0:
        result.append(buffer)
    
    return result


def str_split_multi_char_token(string: str, token: str):
    """Splits given string with given token. Supports any token size."""
    result = []
    buffer = ""
    
    string_len = len(string)
    
    token_possible_seq = ""
    token_len = len(token)
    token_idx_found = 0
    
    # For each character in string, if not equal to current token character, resets current token character index then 
    # adds token_possible_seq(uence) and current char to buffer then resets token_possible_seq.
    # Else if equal to current token character, adds current char to token_possible_seq and increase current token character index.
    # If current token character index is equal to token length, append buffer to result, then reset buffer, token_possible_seq, and current token character index.
    # if index is the last index and is the token character, add an empty entry to the result list.
    for i in range(len(string)):
        # print(f"{i=} {token_idx_found=} {buffer=} {token_possible_seq=}") # Debug
        if string[i] != token[token_idx_found]:
            token_idx_found = 0

            buffer += token_possible_seq
            buffer += string[i]
            token_possible_seq = ""
            continue
        
        token_possible_seq += string[i]
        token_idx_found+=1
        if token_len == token_idx_found:
            result.append(buffer)
            buffer = ""
            token_possible_seq = ""
            token_idx_found = 0
            if i == string_len-1:
                result.append('')

    # If buffer is not empty, append buffer to result list.
    if len(buffer) > 0:
        result.append(buffer)
    return result
