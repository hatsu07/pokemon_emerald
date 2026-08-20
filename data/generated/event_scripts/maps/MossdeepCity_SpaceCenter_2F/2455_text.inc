	@ data/maps/MossdeepCity_SpaceCenter_2F/scripts.inc:396 MossdeepCity_SpaceCenter_2F_Text_MaxieDontInterfere
	.globl gText_Rom_20DD52
gText_Rom_20DD52: @ 0x0820DD52
	.string "マツブサ『えーい そこをどけ！\nわれわれの ジャマを するんじゃない！{EOS}"
	.if (. - gText_Rom_20DD52) > 0x24
	.error "gText_Rom_20DD52 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20DD52) < 0x24
	.space 0x24 - (. - gText_Rom_20DD52)
	.endif
