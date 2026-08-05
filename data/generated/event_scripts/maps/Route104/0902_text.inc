	@ data/maps/Route104/scripts.inc:1136 Route104_Text_BrendanHowsYourPokedex
	.globl gText_Rom_1E8077
gText_Rom_1E8077: @ 0x081E8077
	.string "ユウキ『ところで {PLAYER}の\nポケモンずかんは どう?\lちょっとは ページ うまったか?$"
	.if (. - gText_Rom_1E8077) > 0x2b
	.error "gText_Rom_1E8077 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E8077) < 0x2b
	.space 0x2b - (. - gText_Rom_1E8077)
	.endif
