#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

enum token_type
{
    NUMBER,
    OPERATOR,
    IDENTIFIER,
    EOF_TOKEN,
    UNKNOWN
};

map<token_type, string> token_names = {
    {NUMBER, "NUMBER"},
    {OPERATOR, "OPERATOR"},
    {IDENTIFIER, "IDENTIFIER"},
    {EOF_TOKEN, "EOF_TOKEN"},
    {UNKNOWN, "UNKNOWN"}};

map<string, token_type> token_type_map = {
    {"+", OPERATOR},
    {"-", OPERATOR},
    {"*", OPERATOR},
    {"/", OPERATOR},
    {"++", OPERATOR},
    {"--", OPERATOR},
    {"=", OPERATOR},
    {"!", OPERATOR},
    {"==", OPERATOR},
    {"!=", OPERATOR},
    {"<", OPERATOR},
    {">", OPERATOR},
    {"<=", OPERATOR},
    {">=", OPERATOR},
    {"{", OPERATOR},
    {"}", OPERATOR},
    {"[", OPERATOR},
    {"]", OPERATOR},
    {"(", OPERATOR},
    {")", OPERATOR},
    {"()", OPERATOR},
    {">>", OPERATOR},
    {"<<", OPERATOR},
    {"||", OPERATOR},
    {"&&", OPERATOR},
    {".", OPERATOR},
    {",", OPERATOR},
    {":", OPERATOR},
    {";", EOF_TOKEN},
    {"UNKNOWN", UNKNOWN}};

class Token
{
public:
    string value;
    token_type type;
    int lineNo;
    Token(token_type utype, string uvalue, int ulineNo)
    {
        value = uvalue;
        type = utype;
        lineNo = ulineNo;
    }
};

void printVector(vector<string> arr, bool printOnNextLine = false)
{
    for (int i = 0; i < arr.size(); i++)
    {
        printOnNextLine ? cout << arr[i] + "\n"
                        : cout << arr[i] + "\t";
    }
}

void printVector(vector<Token> tokens)
{
    int lastLineNo = 1;
    for (Token token : tokens)
    {
        if (token.lineNo != lastLineNo)
        {
            for (int i = 0; i < token.lineNo - lastLineNo; i++)
            {
                cout << "\n";
            }

            lastLineNo = token.lineNo;
        }
        cout << "[" << token_names[token.type] << " => " << token.value << " | " << token.lineNo << "]  ";
    }
}

vector<string> splitBy(string code, char charecter)
{
    vector<string> splited;
    for (int i = 0; i < code.size(); i++)
    {
        int startingIndex = i;
        while (code[i] != charecter && i < code.size())
        {
            if (code[i] == '"')
            {
                int stringStartingIndex = i;
                do
                {
                    i++;
                } while (code[i] != '"' && i < code.size());
            }
            else
            {
                i++;
            }
        }
        splited.push_back(code.substr(startingIndex, i - startingIndex));
    }
    return splited;
}

string readFile(string pathToFile)
{
    string result;
    char c;
    // reading file
    ifstream outPutFile;
    outPutFile.open(pathToFile);
    if (outPutFile.is_open())
    {

        while (outPutFile.get(c))
        {
            result += c;
        }
        outPutFile.close();
    }
    else
    {
        cout << "Unable to open file";
    }
    return result;
}

void writeTokensToFile(string pathToFile, vector<Token> tokens)
{
    ofstream outPutFile;
    outPutFile.open(pathToFile);
    if (outPutFile.is_open())
    {

        int lastLineNo = 1;
        for (Token token : tokens)
        {
            if (token.lineNo != lastLineNo)
            {
                for (int i = 0; i < token.lineNo - lastLineNo; i++)
                {
                    outPutFile << "\n";
                }

                lastLineNo = token.lineNo;
            }
            outPutFile << "[" << token_names[token.type] << " => " << token.value << " | " << token.lineNo << "]  ";
        }

        // Close the file
        outPutFile.close();
    }
    else
    {
        cout << "Unable to open file";
    }
}

string removeComments(string code)
{
    string result = "";
    int i = 0;
    while (i < code.size())
    {
        if (code[i] == '/' && code[i + 1] == '/')
        {
            // add "\n" to maintain line numbers
            result += "\n";
            while (code[i] != '\n')
            {
                i++;
            }
        }
        else if (code[i] == '/' && code[i + 1] == '*')
        {
            i = i + 2;
            while (code[i] != '*' && code[i + 1] != '/')
            {
                // add "\n" to maintain line numbers
                if (code[i] == '\n')
                {
                    result += "\n";
                }
                i++;
                // check for Un-terminated comments
                if (i >= code.size())
                {
                    throw runtime_error("Un-terminated comments are present in your code");
                }
            }
            i = i + 2;
        }
        else
        {
            result += code[i];
            i++;
        }
    }
    return result;
}

vector<string> splitByLines(string code)
{
    vector<string> splited;
    string temp = "";
    for (int i = 0; i <= code.size(); i++)
    {
        if (code[i] == '\n')
        {
            splited.push_back(temp);
            temp = "";
        }
        else
        {
            temp += code[i];
        }
    }
    splited.push_back(temp);
    return splited;
}

int main()
{
    string pathToInputFile = "D:\\Users\\mohammadfarooq\\Documents\\C++\\compiler-design\\code.txt";
    string pathToOutputFile = "D:\\Users\\mohammadfarooq\\Documents\\C++\\compiler-design\\code.tokens";

    cout << "\t\tTOKENIZER" << endl;
    cout << "Project by\n-Muhammad Umer Farooq (Roll No: 20)\n-Majid Ali (Roll No: 01)\n\n";
    cout << "Note: Token format [TOKEN => LEXEME | LINE NO]\n\n";
    try
    {

        // Reading file
        string myText = readFile(pathToInputFile);
        //  removing comments
        myText = removeComments(myText);

        string code = myText;

        vector<string> splitedInLines;
        // Spliting by lines
        splitedInLines = splitByLines(code);

        vector<vector<string>> splitBySpaceAndLine;
        // Spliting each line by space
        for (string line : splitedInLines)
        {
            splitBySpaceAndLine.push_back(splitBy(line, ' '));
        }

        vector<Token> tokens;
        for (int lineIndex = 0; lineIndex < splitBySpaceAndLine.size(); lineIndex++)
        {
            for (string word : splitBySpaceAndLine[lineIndex])
            {
                //  Read charecter by charecter
                for (int charIndex = 0; charIndex < word.size(); charIndex++)
                {
                    if (word[charIndex] == '\'')
                    {
                        // check for valid charecter
                        if (word[charIndex + 2] == '\'')
                        {
                            tokens.push_back(Token(IDENTIFIER, word.substr(charIndex, 3), lineIndex + 1));
                            charIndex = charIndex + 2;
                        }
                        else
                        {
                            throw runtime_error("Char constant too long at line No : " + to_string(lineIndex + 1));
                        }
                    }
                    else if (word[charIndex] == '"')
                    {
                        int stringStartIndex = charIndex;
                        // check for valid String
                        do
                        {
                            charIndex++;
                            if (charIndex >= word.size())
                            {
                                throw runtime_error("String constants exceed line OR not ended properly at line No : " + to_string(lineIndex + 1));
                            }

                            if (word[charIndex] == '\n')
                            {
                                throw runtime_error("String constants exceed line at line No : " + to_string(lineIndex + 1));
                            }

                        } while (word[charIndex] != '"');

                        // push string to tokens vector
                        tokens.push_back(Token(IDENTIFIER, word.substr(stringStartIndex, charIndex - stringStartIndex + 1), lineIndex + 1));
                    }
                    else if (word[charIndex] >= 48 && word[charIndex] <= 57)
                    {
                        int numberStartIndex = charIndex;
                        // check for valid number constant
                        do
                        {
                            charIndex++;
                            if (charIndex >= word.size())
                            {
                                throw runtime_error("Number constants exceed line OR not ended properly at line No : " + to_string(lineIndex + 1));
                            }
                        } while (word[charIndex] >= 48 && word[charIndex] <= 57);
                        charIndex--; // to get the last index of number
                        // push number string to tokens vector
                        tokens.push_back(Token(NUMBER, word.substr(numberStartIndex, charIndex - numberStartIndex + 1), lineIndex + 1));
                    }
                    else if (token_type_map[word.substr(charIndex, 1)] == OPERATOR)
                    {
                        // check if next chaecter is also operator
                        if (token_type_map[word.substr(charIndex + 1, 1)] == OPERATOR)
                        {
                            // check of both cherecters combine to form a valid operator
                            if (token_type_map[word.substr(charIndex, 2)] == OPERATOR)
                            {
                                tokens.push_back(Token(OPERATOR, word.substr(charIndex, 2), lineIndex + 1));
                                charIndex++;
                            }
                            else
                            {
                                throw runtime_error("Not a valid operator at line No : " + to_string(lineIndex + 1));
                            }
                        }
                        else
                        {
                            tokens.push_back(Token(OPERATOR, word.substr(charIndex, 1), lineIndex + 1));
                        }
                    }
                    else if (
                        (word[charIndex] >= 65 && word[charIndex] <= 90) ||
                        (word[charIndex] >= 97 && word[charIndex] <= 122))
                    {
                        int identifierStartingIndex = charIndex;
                        do
                        {
                            charIndex++;

                        } while ((word[charIndex] >= 65 && word[charIndex] <= 90) ||
                                 (word[charIndex] >= 97 && word[charIndex] <= 122) ||
                                 (word[charIndex] >= 48 && word[charIndex] <= 57) ||
                                 word[charIndex] == '_');
                        charIndex--; // to get the last index of identifier
                        // push the identifier
                        tokens.push_back(Token(IDENTIFIER, word.substr(identifierStartingIndex, charIndex - identifierStartingIndex + 1), lineIndex + 1));
                    }
                    else if (word[charIndex] == ';')
                    {
                        tokens.push_back(Token(EOF_TOKEN, word.substr(charIndex, 1), lineIndex + 1));
                    }
                    else
                    {
                        // cout << (int)word[charIndex] << " : " << word[charIndex] << endl;
                        if (word[charIndex] != 0 && word[charIndex] != 32)
                        {
                            throw runtime_error("Undefined symbol" + word.substr(charIndex, 1) + "at line No : " + to_string(lineIndex + 1));
                        }
                    }
                }
            }
        }

        // output tokens
        cout << "Tokens : \n";
        printVector(tokens);
        // write to file
        writeTokensToFile(pathToOutputFile, tokens);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}

/*
Format for the token node is :
Token
Lexeme
Line No

- No Symbol Table operations are required in this Phase
- The format for comments is /*comment*
    o There will be no nested comments (done)
    o The comments can exceed on more than one line (done)
    o There will be no tokens generated for the comments (done)
- All integer constants are unsigned (done)
- String constants are within “ ” (i.e. double quotes) (done)
- All string constants are on a single line (done)
- Char constants are within ‘ ’ (i.e. single quotes) (done)
- Only single char constants are valid (done)
- After detecting the error your compiler should skip the remaining line and should not generate any more tokens on that line (done)
- The definition for id = letter (letter | digit | _ )* (done)
- ~ # etc are invalid characters
- Language is case-sensitive
- Errors to be reported in this phase are :
    o Un-terminated comments (done)
    o String constants exceed line (done)
    o Char constant too long    (done)
    o Undefined symbol (done)

// Remaining
- Language is case-sensitive (TODO: handle in next phase)
*/