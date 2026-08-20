	@ data/maps/MossdeepCity_SpaceCenter_2F/scripts.inc:378 MossdeepCity_SpaceCenter_2F_Text_Grunt7Intro
	.globl gText_Rom_20DC7B
gText_Rom_20DC7B: @ 0x0820DC7B
	.string "ひとやすみ したいだろう けど\nそんな わけには いきませーん！{EOS}"
	.if (. - gText_Rom_20DC7B) > 0x21
	.error "gText_Rom_20DC7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20DC7B) < 0x21
	.space 0x21 - (. - gText_Rom_20DC7B)
	.endif
