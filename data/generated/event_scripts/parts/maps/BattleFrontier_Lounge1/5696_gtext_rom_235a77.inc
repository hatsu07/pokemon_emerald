	@ data/maps/BattleFrontier_Lounge1/scripts.inc:208 BattleFrontier_Lounge1_Text_EvenICantTell
	.globl gText_Rom_235A77
gText_Rom_235A77: @ 0x08235A77
	.string "さすがの わしも まだ うまれても いない\nポケモンの ことは わからんぞっ!\pポケモンを みせんか! ポケモンを!"
	.byte EOS
	.if (. - gText_Rom_235A77) > 0x3b
	.error "gText_Rom_235A77 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_235A77) < 0x3b
	.space 0x3b - (. - gText_Rom_235A77)
	.endif
