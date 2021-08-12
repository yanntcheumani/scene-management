/*
** EPITECH PROJECT, 2021
** strat_2021
** File description:
** AScene.hpp
*/

#ifndef INC_FD02778FBF574802A596FE62BDCB9A76
#define INC_FD02778FBF574802A596FE62BDCB9A76

#include <memory>
#include "Scene/IScene.hpp"

namespace scenes {
    class AScene: public IScene
    {
    public:
        explicit AScene(sf::RenderWindow &window) : _window(window) {}

        explicit AScene(const std::shared_ptr<AScene> &scene):
        _window(scene->getWindow()) {}

        sf::RenderWindow &getWindow() const noexcept{
            return _window;
        }

        const sf::View &getView() const noexcept {
            return _view;
        }

        void setView(const sf::View &view) noexcept {
            _view = view;
        }

        const sf::Music &getMusic() const noexcept {
            return _music;
        }

        const std::list<sf::Text> &getText() const {
            return _text;
        }

        void setText(const std::list<sf::Text> &text) {
            _text = text;
        }

        utils::exit_code_t poll_event(sf::Event &event) override {return utils::CONTINUE;};

        void draw_scene() override {
            this->_window.clear();
            this->_window.display();
        };
        void tick() override {};

    protected:
        sf::RenderWindow &_window;
        sf::View _view;
        sf::Music _music;
        std::list<sf::Text> _text;
    };
};


#endif //INC_FD02778FBF574802A596FE62BDCB9A76
