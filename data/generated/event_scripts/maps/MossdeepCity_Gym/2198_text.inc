	@ data/maps/MossdeepCity_Gym/scripts.inc:384 MossdeepCity_Gym_Text_PrestonPostBattle
	.globl gText_Rom_20B941
gText_Rom_20B941: @ 0x0820B941
	.string "まよった ほうが まける\nオレからの ちゅうこくだ!{EOS}"
	.if (. - gText_Rom_20B941) > 0x1b
	.error "gText_Rom_20B941 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20B941) < 0x1b
	.space 0x1b - (. - gText_Rom_20B941)
	.endif
