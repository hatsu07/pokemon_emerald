	.globl gText_Rom_5DC10C
gText_Rom_5DC10C: @ 0x085DC10C
	@ Decoded text from ROM range: offset=0x5DC10C, size=0x3
	.string "はい{EOS}"
	.globl gText_Rom_5DC10F

	@ src/data/script_menu.h:637 script_menu_line_637 (+3 aliases)
	.globl gText_Rom_5DC10F
gText_Rom_5DC10F: @ 0x085DC10F
	.string "いいえ{EOS}"
	.if (. - gText_Rom_5DC10F) > 0x4
	.error "gText_Rom_5DC10F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC10F) < 0x4
	.space 0x4 - (. - gText_Rom_5DC10F)
	.endif
	.globl gText_PkmnForSwap

	@ src/strings.c:1013 gText_PkmnForSwap
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_PkmnForSwap
gText_PkmnForSwap: @ 0x085DC113
	.string "てばなすポケモン{EOS}"
	.if (. - gText_PkmnForSwap) != 0x9
	.error "gText_PkmnForSwap must retain its original byte length"
	.endif

	@ src/strings.c:1014 gText_Cancel3
	.globl gText_Cancel3
gText_Cancel3: @ 0x085DC11C
	.string "ちゅうし{EOS}"
	.if (. - gText_Cancel3) > 0x5
	.error "gText_Cancel3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Cancel3) < 0x5
	.space 0x5 - (. - gText_Cancel3)
	.endif

	@ src/strings.c:1007 gText_Swap (+1 aliases)
	.globl gText_SwapAction
gText_SwapAction: @ 0x085DC121
	.string "てばなす{EOS}"
	.if (. - gText_SwapAction) > 0x5
	.error "gText_SwapAction may not grow beyond its original slot"
	.endif
	.if (. - gText_SwapAction) < 0x5
	.space 0x5 - (. - gText_SwapAction)
	.endif

	@ src/strings.c:1016 gText_Accept (+1 aliases)
	.globl gText_Accept
gText_Accept: @ 0x085DC126
	.string "うけとる{EOS}"
	.if (. - gText_Accept) > 0x5
	.error "gText_Accept may not grow beyond its original slot"
	.endif
	.if (. - gText_Accept) < 0x5
	.space 0x5 - (. - gText_Accept)
	.endif

	@ src/strings.c:1017 gText_AcceptThisPkmn
	.globl gText_AcceptThisPkmn
gText_AcceptThisPkmn: @ 0x085DC12B
	.string "このポケモンを うけとりますか?{EOS}"
	.if (. - gText_AcceptThisPkmn) > 0x11
	.error "gText_AcceptThisPkmn may not grow beyond its original slot"
	.endif
	.if (. - gText_AcceptThisPkmn) < 0x11
	.space 0x11 - (. - gText_AcceptThisPkmn)
	.endif
