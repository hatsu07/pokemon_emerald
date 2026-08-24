	@ src/data/script_menu.h:9 gText_Info2 (+3 aliases)
	.globl gText_Info2_Copy_Menus_5CAA9D
gText_Info2_Copy_Menus_5CAA9D: @ 0x085CAA9D
	.string "せつめい{EOS}"
	.if (. - gText_Info2_Copy_Menus_5CAA9D) > 0x5
	.error "gText_Info2_Copy_Menus_5CAA9D may not grow beyond its original slot"
	.endif
	.if (. - gText_Info2_Copy_Menus_5CAA9D) < 0x5
	.space 0x5 - (. - gText_Info2_Copy_Menus_5CAA9D)
	.endif

	@ src/data/script_menu.h:65 script_menu_line_65
	.globl sScriptMenuText_Mach
sScriptMenuText_Mach: @ 0x085CAAA2
	.string "マッハ{EOS}"
	.if (. - sScriptMenuText_Mach) > 0x4
	.error "sScriptMenuText_Mach may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Mach) < 0x4
	.space 0x4 - (. - sScriptMenuText_Mach)
	.endif

	@ src/data/script_menu.h:66 script_menu_line_66
	.globl sScriptMenuText_Acro
sScriptMenuText_Acro: @ 0x085CAAA6
	.string "ダート{EOS}"
	.if (. - sScriptMenuText_Acro) > 0x4
	.error "sScriptMenuText_Acro may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Acro) < 0x4
	.space 0x4 - (. - sScriptMenuText_Acro)
	.endif
	@ Decoded text from ROM range: offset=0x5CAAAA, size=0x6
	.string "どく{EOS}"
	.string "まひ{EOS}"

