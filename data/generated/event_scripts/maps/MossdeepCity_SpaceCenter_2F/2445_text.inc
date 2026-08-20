	@ data/maps/MossdeepCity_SpaceCenter_2F/scripts.inc:381 MossdeepCity_SpaceCenter_2F_Text_Grunt7Defeat (+1 aliases)
	.globl gText_Rom_20DC9C
gText_Rom_20DC9C: @ 0x0820DC9C
	.string "オレたちが ひとやすみ\nしておけば…… よかった……{EOS}"
	.if (. - gText_Rom_20DC9C) > 0x1b
	.error "gText_Rom_20DC9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20DC9C) < 0x1b
	.space 0x1b - (. - gText_Rom_20DC9C)
	.endif
