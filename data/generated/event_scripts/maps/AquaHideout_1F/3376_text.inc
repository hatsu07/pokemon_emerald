	@ data/maps/AquaHideout_1F/scripts.inc:71 AquaHideout_1F_Text_Grunt1Intro (+1 aliases)
	.globl gText_Rom_217C6D
gText_Rom_217C6D: @ 0x08217C6D
	.string "ややや!\nあやしい じんぶつを はっけーん!{EOS}"
	.if (. - gText_Rom_217C6D) > 0x17
	.error "gText_Rom_217C6D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217C6D) < 0x17
	.space 0x17 - (. - gText_Rom_217C6D)
	.endif
