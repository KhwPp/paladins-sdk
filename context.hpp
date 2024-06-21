#pragma once
namespace paladins {
	class context {
	public:
		void init();

	};


	inline std::unique_ptr < context > g_context = std::make_unique< context >();
}