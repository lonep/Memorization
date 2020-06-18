# Memorization

[Russian README](https://github.com/lonep/Memorization/blob/develop/ReadMeRu.md)

## Memorization is program for cyclic memorization.
### How can i use it?
Novadays program allows you to create and pass tests.
*You can use this program to:*
- For learn languages
- Prepare to exams
- Create assistive tests for students

### How to launch the Memorization?
_Attention: the program may not work correctly on platforms other than Windows_

1) Clone the repository.
2) Open cmake-build-debug
3) Launch "memorization.exe"

There are two standard tests in the folder "Tests" in cmake-build-debug for checking the operation of the program.

### How to create test?
#### You can use basic .txt file or .json file.
*Example of .txt file*
```text
<q> 2*2  //Question of the first question
<t> 4
<f> 15
<f> 11
<f> 3    //The last false answer of first question. 
<q> 3*3 //Second question
<t> 9
<f> 3
<f> 5
<f> 12
<q> 4*4 //Third question.
<t> 16
<f> 8
<f> 12
<f> 24

  
<q> - is a question tag. It should be first.
<t> - is a true answer tag. It shoukd be after question.
<f> - is a false tag. It should be after true answer.  
```
*Example of .json file*

```json
{
  "cards": [{   
    "question": "2*2",
    "true": "4",
    "false": [   
      "6",
      "9",
      "8"

    ]
  },
   {
    "question": "3*3", 
    "true": "9",
    "false": [
      "1",
      "2",
      "3"

    ] 
  },
    {
      "question": "4*4",
      "true": "16",
      "false": [
        "12",
        "8",
        "24"

      ]
    }
    ]

}
```
#### You can choose create mode in program.

1) Launch the program
2) Choose create mode "C"
3) Enter full name of file. For example "Mytest.txt" or "Mytest.json"
4) Follow the instructions.

_Attention: If you enter the name of a file that already exists, then it will be overwritten._

### How to open test in program?

You can open .txt and .json files.

![First step](https://github.com/lonep/Memorization/blob/master/ReadmePics/Annotation%202020-06-14%20155047.png "FirstPic")

 You should write 'O' for open file.
 
![Secons step](https://github.com/lonep/Memorization/blob/master/ReadmePics/Annotation%202020-06-14%20155149.png "SecondPic")

 Then you should write a full name of the file. For example: test.txt

In the "Tests" folder there are samples of test files.

### Creators
- lonep
- fenryux
- Sershhka
- Bratko73
- Xxone-ai

