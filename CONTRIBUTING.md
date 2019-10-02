# Contributing

## How to contribute an implementation (code)?

- Have a look at open issues. They contain the list of algorithms/DS we plan
to be implemented. Pick an unassigned issue.
- You can also create a new issue for an algorithm that is not in the list.
- **Make sure you are assigned for the issue.**
- Code the algorithm/DS following the styleguide defined below.
- Send a PR.
- Be sure to not include any compiled binaries in the patch.
- While sending a PR make sure you follow one issue per PR rule.

## Suggesting an algorithm / DS

- First make sure you are not suggesting a duplicate.
- If not, proceed and create the issue. Make sure that you specify only one
language in an issue. Create multiple issues for different languages.
- Title of issue should be of the following format -
    ```
    [Algo/Data Structure] Algorithm/DS Name [Language]
    ```
- Please include at least one external link for the algorithm/DS in the
issue's body for each issue. The link should explain the algorithm/problem/DS
in detail.

## Use a Consistent Coding Style

- Code submitted should be modular.
- Don't use global variables.
- Use separate folders for each concept. Folder name should be in full
lowercase. If the algorithm/DS name has multiple words, separate them by
underscores. (eg `longest_common_subsequence`)
- Filename should be derived from the folder name. (e.g,
`longest_common_subsequence` becomes `longest_common_subsequence.c` or
`longest_common_subsequence.java`)
- Name of master function of the code should be kept same as filename to the
best extent possible.
- Prefer classes instead of multiple helper functions (where applicable).
- Currently we are accepting contributions in `C`, `C++`, `Java` and `Python`
but other languages may be considered after a discussion.
- Define `tester` code only in `main` routine.
- Use meaningful variable, method and function names and comments.
- No profanity.
- Use external libraries only when no other solution is possible/plausible.
- We have defined [skeleton codes](#samples-code) for some popular languages
below. Please follow them whenever possible.

## Write Good Commit Messages

A commit message consists of 3 parts:
- shortlog
- commit body
- issue reference
Example:
```
quicksort.py Add QuickSort Algorithm

This adds QuickSort Algorithm which return the concatenation of the
quicksorted list of elements that are less than or equal to the pivot, the
pivot, and the quicksorted list of elements that are greater than the pivot.

Closes https://github.com/NITSkmOS/Algorithms/issues/2
```

### Shortlog

Example:
```
quicksort.py: Add QuickSort Algorithm
```
- **Maximum of 50 characters.**

  Keeping subject lines at this length ensures that they are readable, and
  explains the change in a concise way.
- Should describe the change - the action being done in the commit.
- Should not include WIP prefix.
- Should have a tag and a short description separated by a colon (`:`)
  - **Tag**
    - The file or class or package being modified.
    - Not mandatory.

  - **Short Description**
    - Starts with a capital letter.
    - Written in imperative present tense (i.e. `Add something`, `not Adding
    something` or `Added something`).
    - No trailing period.

### Commit Body

Example:
```
This adds QuickSort Algorithm which return the concatenation of the
quicksorted list of elements that are less than or equal to the pivot, the
pivot, and the quicksorted list of elements that are greater than the pivot.
```
- Maximum of 72 chars excluding newline for each line.

  The recommendation is to add a line break at 72 characters, so that Git has
  plenty of room to indent text while still keeping everything under 80
  characters overall.
- Not mandatory - but helps explain what you’re doing.

- Should describe the reasoning for your changes. This is especially important
for complex changes that are not self explanatory. This is also the right place
to write about related bugs.
- First person should not be used here.

### Issue reference

Example:
```
Closes https://github.com/NITSkmOS/Algorithms/issues/2
```
- Should use the `Fixes` keyword if your commit fixes a bug, or `Closes` if it
adds a feature/enhancement.
- In some situations, e.g. bugs overcome in documents, the difference between
`Fixes` and `Closes` may be very small and subjective. If a specific issue may
lead to an unintended behaviour from the user or from the program it should be
considered a bug, and should be addresed with `Fixes`. If an issue is labelled
with `bug` you should always use `Fixes`. For all other issues use `Closes`.
- Should use full URL to the issue.
- There should be a single space between the `Fixes` or `Closes` and the URL.

> **Note:**
> - The issue reference will automatically add the link of the commit in the
issue.
> - It will also automatically close the issue when the commit is accepted into
repository.

## Samples Code

#### C

```c
void quicksort(int ar_size, int *ar) {
    /*
        Your implementation here...
    */
}

int main() {
	int ar_size = 4, i;
	int a[4] = {2, 3, 0, 4};
	quicksort(ar_size, a);

	for (i=0; i<ar_size; i++){
		printf("%d\n", a[i]);
	}
	return 0;
}
```

#### Python

```python
def quicksort(arr):
    #
    # Your implementation here...
    #


def main():
    arr = [2, 3, 0, 4]
    sorted_arr = quicksort(arr)
    print(sorted_arr)

    
if __name__ == '__main__':
    main()
```

#### Java

```java
public class QuickSort {
    
    static void quickSort(int[] a) {
        /*
            Your implementation here...
        */
    }
    
    public static void main(String[] args) {
        int[] arr = new int[] {2, 3, 0, 4};
        quickSort(arr);
        for(int element: arr) {
            System.out.println(element);
        }
    }
}
```
