#include <SFML/Graphics.h>
#include <SFML/System.h>

int main(void){
    sfVideoMode mode = {1280, 720, 32};
    sfRenderWindow* window;
    sfTexture* texture;
    sfSprite* sprite;
    sfEvent event;
    sfVector2f upscale = { 1.8, 1.8 };

    window = sfRenderWindow_create(mode, "Black millot", sfResize | sfClose, NULL);
    if (!window)
        return (84);
    sfRenderWindow_setFramerateLimit(window, 60);

    texture = sfTexture_createFromFile("img.bmp", NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setScale(sprite, upscale);

    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_display(window);
    }
    sfSprite_destroy(sprite);
    sfTexture_destroy(texture);
    sfRenderWindow_destroy(window);
}
