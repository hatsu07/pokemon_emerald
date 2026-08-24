	@ src/data/easy_chat/easy_chat_group_lifestyle.h:178 easy_chat_group_lifestyle_line_178 (+1 aliases)
	.globl gText_Rom_5CACD2
gText_Rom_5CACD2: @ 0x085CACD2
	.string "どうぐ{EOS}"
	.if (. - gText_Rom_5CACD2) > 0x4
	.error "gText_Rom_5CACD2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACD2) < 0x4
	.space 0x4 - (. - gText_Rom_5CACD2)
	.endif
	@ src/data/script_menu.h:1326 script_menu_line_1326
	.globl gText_Rom_5CACD6
gText_Rom_5CACD6: @ 0x085CACD6
	.string "たいせつなもの{EOS}"
	.if (. - gText_Rom_5CACD6) > 0x8
	.error "gText_Rom_5CACD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACD6) < 0x8
	.space 0x8 - (. - gText_Rom_5CACD6)
	.endif
	@ src/data/easy_chat/easy_chat_group_hobbies.h:274 easy_chat_group_hobbies_line_274 (+2 aliases)
	.globl gText_Rom_5CACDE
gText_Rom_5CACDE: @ 0x085CACDE
	.string "ボール{EOS}"
	.if (. - gText_Rom_5CACDE) > 0x4
	.error "gText_Rom_5CACDE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACDE) < 0x4
	.space 0x4 - (. - gText_Rom_5CACDE)
	.endif
	@ src/data/script_menu.h:1328 script_menu_line_1328
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CACE2
gText_Rom_5CACE2: @ 0x085CACE2
	.string "わざマシン{EOS}"
	.if (. - gText_Rom_5CACE2) != 0x6
	.error "gText_Rom_5CACE2 must retain its original byte length"
	.endif
	@ src/data/easy_chat/easy_chat_group_events.h:4 gEasyChatWord_Berry (+4 aliases)
	.globl gEasyChatWord_Berry_Copy_Menus
gEasyChatWord_Berry_Copy_Menus: @ 0x085CACE8
	.string "きのみ{EOS}"
	.if (. - gEasyChatWord_Berry_Copy_Menus) > 0x4
	.error "gEasyChatWord_Berry_Copy_Menus may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Berry_Copy_Menus) < 0x4
	.space 0x4 - (. - gEasyChatWord_Berry_Copy_Menus)
	.endif
	.globl gText_SomeonesPC

	@ src/strings.c:480 gText_SomeonesPC
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_SomeonesPC
gText_SomeonesPC: @ 0x085CACEC
	.string "だれかのパソコン{EOS}"
	.if (. - gText_SomeonesPC) != 0x9
	.error "gText_SomeonesPC must retain its original byte length"
	.endif

	@ src/strings.c:481 gText_LanettesPC
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_LanettesPC
gText_LanettesPC: @ 0x085CACF5
	.string "マユミのパソコン{EOS}"
	.if (. - gText_LanettesPC) != 0x9
	.error "gText_LanettesPC must retain its original byte length"
	.endif

	@ src/strings.c:483 gText_PlayersPC
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_PlayersPC
gText_PlayersPC: @ 0x085CACFE
	.string "{PLAYER}のパソコン{EOS}"
	.if (. - gText_PlayersPC) != 0x8
	.error "gText_PlayersPC must retain its original byte length"
	.endif
