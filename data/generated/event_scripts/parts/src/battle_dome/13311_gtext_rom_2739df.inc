	@ src/battle_dome.c:867 battle_dome_line_867
	.globl gText_Rom_2739DF
gText_Rom_2739DF: @ 0x082739DF
	.string "へいきんより すこし ちからが うえの チーム。$"
	.if (. - gText_Rom_2739DF) > 0x19
	.error "gText_Rom_2739DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2739DF) < 0x19
	.space 0x19 - (. - gText_Rom_2739DF)
	.endif
