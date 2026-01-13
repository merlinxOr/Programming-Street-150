#include <stdio.h>
#include <cstring>

void draw_pattern(char *, int);

void draw_triangle(int);
void draw_triangle_reverse(int);
void draw_arrow(int);
void draw_diamond(int);
void draw_pyramid(int);
void draw_pyramid_reverse(int);

int main(int argc, char const *argv[])
{
    printf("Triangle\n\n");
    draw_pattern("triangle", 5);
    printf("\n");

    printf("Triangle reverse\n\n");
    draw_pattern("triangle-reverse", 5);
    printf("\n");

    printf("Arrow\n\n");
    draw_pattern("arrow", 5);
    printf("\n");

    printf("Pyramid\n\n");
    draw_pattern("pyramid", 5);
    printf("\n");

    printf("Pyramid Reverse\n\n");
    draw_pattern("pyramid-reverse", 5);
    printf("\n");

    printf("Diamond\n\n");
    draw_pattern("diamond", 5);
    printf("\n");

    return 0;
}

void draw_pattern(char *pattern, int height)
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
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; i >= j; j++)
        {
            printf("*");
        }

        printf("\n");
    }
};

void draw_triangle_reverse(int height)

{
    for (int i = 0; i < height; i++)
    {
        for (int j = height; j > i; j--)
        {
            printf("*");
        }

        printf("\n");
    }
}

void draw_arrow(int height)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; i >= j; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < height - 1; i++)
    {
        for (int j = height - 1; j > i; j--)
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
        // Spaces
        for (int j = height - i; j > 0; j--)
        {
            printf(" ");
        }
        printf("*");
        // Stars
        for (int z = 1; z < i; z++)
        {
            printf("**");
        }
        printf("\n");
    }

    // Bottom part
    draw_pyramid_reverse(height);
}

void draw_pyramid(int height)
{
    for (int i = 1; i < height + 1; i++)
    {
        // Spaces
        for (int j = height - i; j > 0; j--)
        {
            printf(" ");
        }
        printf("*");
        // Stars
        for (int z = 1; z < i; z++)
        {
            printf("**");
        }
        printf("\n");
    }
}

void draw_pyramid_reverse(int height)
{
    for (int i = 0; i < height; i++)
    {
        // spaces
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        printf("*");
        // stars
        for (int z = i; z < height - 1; z++)
        {
            printf("**");
        }
        printf("\n");
    }
}
