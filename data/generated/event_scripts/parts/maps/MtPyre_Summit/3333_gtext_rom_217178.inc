	@ data/maps/MtPyre_Summit/scripts.inc:469 MtPyre_Summit_Text_Grunt4Intro (+1 aliases)
	.globl gText_Rom_217178
gText_Rom_217178: @ 0x08217178
	.string "あっ わかった!\nあんた マグマだんに はいろうと したけど\lいれて もらえなかったんでしょ!\pはん! うちら アクアだんに だって\nいれてやんないよ!$"
	.if (. - gText_Rom_217178) > 0x4d
	.error "gText_Rom_217178 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217178) < 0x4d
	.space 0x4d - (. - gText_Rom_217178)
	.endif
