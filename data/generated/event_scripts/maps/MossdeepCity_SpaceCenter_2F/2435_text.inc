	@ data/maps/MossdeepCity_SpaceCenter_2F/scripts.inc:366 MossdeepCity_SpaceCenter_2F_Text_Grunt5Intro
	.globl gText_Rom_20DC28
gText_Rom_20DC28: @ 0x0820DC28
	.string "むてっぽうな やつめ……\nまずは オレからだ！{EOS}"
	.if (. - gText_Rom_20DC28) > 0x18
	.error "gText_Rom_20DC28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20DC28) < 0x18
	.space 0x18 - (. - gText_Rom_20DC28)
	.endif
