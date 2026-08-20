	@ data/maps/AquaHideout_B2F/scripts.inc:101 AquaHideout_B2F_Text_Grunt4Intro (+1 aliases)
	.globl gText_Rom_2181E1
gText_Rom_2181E1: @ 0x082181E1
	.string "わっはっは まちくたびれたぞ!\nおいらとも しょうぶ してもらおうか!{EOS}"
	.if (. - gText_Rom_2181E1) > 0x24
	.error "gText_Rom_2181E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2181E1) < 0x24
	.space 0x24 - (. - gText_Rom_2181E1)
	.endif
