	@ data/text/blend_master.inc:46 BerryBlender_Text_BlendMasterNoPokeblockCase
	.globl gText_Rom_2748BA
gText_Rom_2748BA: @ 0x082748BA
	.string "ふむむむっ!\pおぬし ポロックケースを\nまだ もっておらん ようじゃぞ!\pわしは きょう ずっと ここに おるから\nポロックケースを もらってから\lまた くるのじゃ!$"
	.if (. - gText_Rom_2748BA) > 0x54
	.error "gText_Rom_2748BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2748BA) < 0x54
	.space 0x54 - (. - gText_Rom_2748BA)
	.endif
