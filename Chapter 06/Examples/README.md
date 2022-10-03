The performance in microseconds of the one-pass and two-pass [implementations](Grading_System/classify_students.cpp) of the `extract_fails` function, like shown in section 6.3 are summarized in the table below.

| File size | two-pass | one-pass |
| ----------|----------|----------|
| 10        | 22       | 36       |
| 100       | 186      | 153      |
| 1000      | 1050     | 1268     |
| 10,000    | 13978    | 10537    |
| 100,000   | 134371   | 106565   |

Unlike explained in the chapter section, the one-pass solutions is only marginally faster than the two-pass solution with large input files.
