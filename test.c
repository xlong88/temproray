#include <stdio.h>

int main()
{
    {% for i in range(numberofpointers) %}
    int *p_{{i}} = (int *)malloc(sizeof(int *));{% endfor %}

    {% for in in range(numberofiterations) %}
    {% for i in range(numberofpointers) %}
    *p_{{i}} = 1;{% endfor %}{% endfor %}

    {% for i in range(numberofpointers) %}
    free(p_{{i}});{% endfor %}

    return 0;
}
