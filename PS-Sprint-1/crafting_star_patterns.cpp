#include <stdio.h>
#include <string.h>

void draw_pattern(const char *pattern, int height);

void draw_triangle(int height);
void draw_triangle_reverse(int height);
void draw_arrow(int height);
void draw_diamond(int height);
void draw_pyramid(int height);
void draw_pyramid_reverse(int height);

int main(void)
{
    printf("Triangle (height=5)\n\n");
    draw_pattern("triangle", 5);
    printf("\n");

    printf("Triangle reverse (height=5)\n\n");
    draw_pattern("triangle-reverse", 5);
    printf("\n");

    printf("Arrow (height=5)\n\n");
    draw_pattern("arrow", 5);
    printf("\n");

    printf("Pyramid (height=5)\n\n");
    draw_pattern("pyramid", 5);
    printf("\n");

    printf("Pyramid Reverse (height=5)\n\n");
    draw_pattern("pyramid-reverse", 5);
    printf("\n");

    printf("Diamond (height=5)\n\n");
    draw_pattern("diamond", 5);
    printf("\n");

    return 0;
}

void draw_pattern(const char *pattern, int height)
{
    if (strcmp(pattern, "triangle") == 0)
    {
        draw_triangle(height);
    }
    else if (strcmp(pattern, "triangle-reverse") == 0)
    {
        draw_triangle_reverse(height);
    }
    else if (strcmp(pattern, "arrow") == 0)
    {
        draw_arrow(height);
    }
    else if (strcmp(pattern, "diamond") == 0)
    {
        draw_diamond(height);
    }
    else if (strcmp(pattern, "pyramid") == 0)
    {
        draw_pyramid(height);
    }
    else if (strcmp(pattern, "pyramid-reverse") == 0)
    {
        draw_pyramid_reverse(height);
    }
    else
    {
        printf("Pattern not valid!\n");
    }
}

void draw_triangle(int height)
{
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void draw_triangle_reverse(int height)
{
    for (int i = height; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void draw_arrow(int height)
{
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = height - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void draw_pyramid(int height)
{
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= height - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void draw_pyramid_reverse(int height)
{
    for (int i = height; i >= 1; i--)
    {
        for (int j = 1; j <= height - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void draw_diamond(int height)
{
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= height - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = height - 1; i >= 1; i--)
    {
        for (int j = 1; j <= height - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}