	@ data/maps/MossdeepCity_House2/scripts.inc:54 MossdeepCity_House2_Text_SisterMailsBoyfriendInFortree
	.globl gText_Rom_20C43A
gText_Rom_20C43A: @ 0x0820C43A
	.string "おれの いもうとは ヒワマキの\nボーイフレンドと ぶんつう してる\pちっとも うらやましく ないぞ!{EOS}"
	.if (. - gText_Rom_20C43A) > 0x33
	.error "gText_Rom_20C43A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C43A) < 0x33
	.space 0x33 - (. - gText_Rom_20C43A)
	.endif
