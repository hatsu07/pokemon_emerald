	.globl gText_Rom_5DC0ED

	@ src/data/party_menu.h:796 party_menu_line_796 (+2 aliases)
	.globl gText_Rom_5DC0ED
gText_Rom_5DC0ED: @ 0x085DC0ED
	.string "つよさをみる{EOS}"
	.if (. - gText_Rom_5DC0ED) > 0x7
	.error "gText_Rom_5DC0ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC0ED) < 0x7
	.space 0x7 - (. - gText_Rom_5DC0ED)
	.endif
	.globl gText_Rechoose

	@ src/strings.c:998 gText_Others2 (+1 aliases)
@ SEMANTIC_ROLE: gText_Rechoose (Battle Factory Swap_PrintMenuOptions third slot; duplicate provenance gText_Others2)
	.globl gText_Rechoose
gText_Rechoose: @ 0x085DC0F4
	.string "べつのにする{EOS}"
	.if (. - gText_Rechoose) > 0x7
	.error "gText_Rechoose may not grow beyond its original slot"
	.endif
	.if (. - gText_Rechoose) < 0x7
	.space 0x7 - (. - gText_Rechoose)
	.endif

	@ src/strings.c:1010 gText_QuitSwapping
	.globl gText_QuitSwapping
gText_QuitSwapping: @ 0x085DC0FB
	.string "こうかんを ちゅうし しますか?{EOS}"
	.if (. - gText_QuitSwapping) > 0x11
	.error "gText_QuitSwapping may not grow beyond its original slot"
	.endif
	.if (. - gText_QuitSwapping) < 0x11
	.space 0x11 - (. - gText_QuitSwapping)
	.endif
