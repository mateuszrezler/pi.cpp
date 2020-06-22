from re import findall, sub
from sys import argv


def add_space_after_comma(text):
    return sub(r',(\w)', r', \1', text)


def add_spaces_around_operators(text, operators=['>>', '<<', '=']):
    operators_expr = '|'.join(operators)
    return sub(fr'(["\w]) ?({operators_expr}) ?(["\w])', r'\1 \2 \3', text)


def function_pipeline(text, *functions):
    for function in functions:
        text = function(text)
    return text


def main():
    with open(argv[1]) as f:
        text = f.read()
    new_text = function_pipeline(text,
                                 add_space_after_comma,
                                 add_spaces_around_operators)
    print(new_text)


main()

