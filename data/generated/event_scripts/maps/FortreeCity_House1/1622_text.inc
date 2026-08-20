	@ data/maps/FortreeCity_House1/scripts.inc:58 FortreeCity_House1_Text_TradingMemoriesWithOthers
	.globl gText_Rom_20435F
gText_Rom_20435F: @ 0x0820435F
	.string "ひとと ポケモンを こうかん する……\pつまりは それぞれの\nおもいでを こうかん しているのじゃな{EOS}"
	.if (. - gText_Rom_20435F) > 0x33
	.error "gText_Rom_20435F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20435F) < 0x33
	.space 0x33 - (. - gText_Rom_20435F)
	.endif
