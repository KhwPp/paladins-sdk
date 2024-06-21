#pragma once
namespace paladins::hacks {
	class c_visuals {
	public:
		void player_esp();
	private:
		int x;
	};
	inline const std::unique_ptr < c_visuals > g_visuals = std::make_unique < c_visuals >();
}