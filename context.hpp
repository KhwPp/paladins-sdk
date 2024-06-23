#pragma once
namespace paladins {
	class context {
	public:
		uintptr_t module_base_t;
		DWORD_PTR                m_engine;
		void init();
	protected:
		
	};
	inline std::unique_ptr < context > g_context = std::make_unique< context >();
}