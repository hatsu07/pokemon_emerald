	@ src/data/easy_chat/easy_chat_group_trainer.h:34 easy_chat_group_trainer_line_34 (+2 aliases)
	.globl sScriptMenuText_MenuOptionPokedex
sScriptMenuText_MenuOptionPokedex: @ 0x085CADAE
	.string "ずかん{EOS}"
	.if (. - sScriptMenuText_MenuOptionPokedex) > 0x4
	.error "sScriptMenuText_MenuOptionPokedex may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_MenuOptionPokedex) < 0x4
	.space 0x4 - (. - sScriptMenuText_MenuOptionPokedex)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:88 easy_chat_group_trainer_line_88 (+7 aliases)
	.globl sScriptMenuText_MenuOptionPokemon
sScriptMenuText_MenuOptionPokemon: @ 0x085CADB2
	.string "ポケモン{EOS}"
	.if (. - sScriptMenuText_MenuOptionPokemon) > 0x5
	.error "sScriptMenuText_MenuOptionPokemon may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_MenuOptionPokemon) < 0x5
	.space 0x5 - (. - sScriptMenuText_MenuOptionPokemon)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:130 easy_chat_group_trainer_line_130 (+2 aliases)
	.globl sScriptMenuText_MenuOptionBag
sScriptMenuText_MenuOptionBag: @ 0x085CADB7
	.string "バッグ{EOS}"
	.if (. - sScriptMenuText_MenuOptionBag) > 0x4
	.error "sScriptMenuText_MenuOptionBag may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_MenuOptionBag) < 0x4
	.space 0x4 - (. - sScriptMenuText_MenuOptionBag)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:82 easy_chat_group_trainer_line_82 (+2 aliases)
	.globl sScriptMenuText_MenuOptionPokenav
sScriptMenuText_MenuOptionPokenav: @ 0x085CADBB
	.string "ポケナビ{EOS}"
	.if (. - sScriptMenuText_MenuOptionPokenav) > 0x5
	.error "sScriptMenuText_MenuOptionPokenav may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_MenuOptionPokenav) < 0x5
	.space 0x5 - (. - sScriptMenuText_MenuOptionPokenav)
	.endif
	@ analyzed canonical ROM range 0x085CADC0-0x085CADC5
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF
