

function str_split_single_char_token(string, token) {
    /* Splits given string with given token. Only supports single character tokens, but simpler. */
    result = Array();
    buffer = "";

    string_len = string.length // might affect efficiency inside if statement
    
    for (let i=0; i<string_len;i++) {
        if (string[i] === token) {
            result.push(buffer);
            if (i === string_len) {
                result.push('') // Example: 'abc', split with token c, returns ['ab', ''] instead of only ['ab'].
            }
            buffer="";
            continue;
        }
        buffer += string[i];
    }
    
    if (buffer.length > 0) {
        result.push(buffer);
    }
    return result;
}


function str_split_multi_char_token(string, token) {
    /* Splits given string with given token. Supports any token size. */
    result = Array();
    buffer = "";

    string_len = string.length // might affect efficiency inside if statement

    token_possible_sequence = "";
    token_length = token.length;
    current_token_idx = 0;
    for (let i = 0; i < string.length; i++) {
        if (string[i] !== token[current_token_idx]) {
            current_token_idx = 0;

            buffer += token_possible_sequence;
            buffer += string[i];
            token_possible_sequence = "";
            continue;
        }

        token_possible_sequence += string[i];
        current_token_idx++;
        if (token_length === current_token_idx) {
            result.push(buffer);
            buffer = "";
            token_possible_sequence = "";
            current_token_idx = 0;
            if (i === string_len-1) {
                result.push('');
            }
        }
    }

    if (buffer.length > 0) {
        result.push(buffer);
    }
    return result;
}
