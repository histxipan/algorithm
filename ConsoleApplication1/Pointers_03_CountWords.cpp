#include <cstddef>
typedef enum {
	INIT_STATE = 1,
	WORD_STATE,
	SPACE_STATE,
};

int CountWordNumber(const char* pStr)
{	
	int count = 0;
	int state = INIT_STATE;
	char value;

	if (NULL == pStr)
		return 0;

	while (value = *pStr++) {
		switch (state)
		{
			case INIT_STATE:
				if (' ' != value)
					count++, state = WORD_STATE;
				else
					state = SPACE_STATE;
				break;
			case WORD_STATE:
				if (' ' == value)
					state = SPACE_STATE;
				else if ('\0' == *pStr)
					return count;
				break;
			case SPACE_STATE:
				if (' ' != value)
					count++, state = WORD_STATE;
				else if ('\0' == *pStr)
					return count;
				break;
			default:
				break;
		}
	}
	return count;
}