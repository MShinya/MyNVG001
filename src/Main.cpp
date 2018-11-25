
#include <Siv3D.hpp> // OpenSiv3D v0.3.0
#include "SceneManager.hpp"
#include "SceneAssignment.hpp"

void Main()
{
    Window::Resize(1280, 720);
    
    Window::SetTitle(U"Title Not Desided");
    
	Graphics::SetBackground(ColorF(0.8, 0.9, 1.0));

    Scene::SceneManager<Scene::SceneAssignment> sceneManager;
    
	while (System::Update())
	{
        // Mojaveでの不具合を回避するためのコード
        if (System::FrameCount() == 1)
        {
            // 1px だけ横に移動させる
            Window::SetPos(Window::GetState().pos + Point(1, 0));
        }
        
        sceneManager.Draw();
        
        sceneManager.Update();
	}
}
