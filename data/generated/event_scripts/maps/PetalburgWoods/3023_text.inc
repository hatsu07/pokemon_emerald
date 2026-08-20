	@ data/maps/PetalburgWoods/scripts.inc:425 PetalburgWoods_Text_StayOutOfTallGrass
	.globl gText_Rom_2149AA
gText_Rom_2149AA: @ 0x082149AA
	.string "よお! おまえの ポケモン げんき?\pてもちの ポケモンが よわっていて\nたたかわせたく ないときは なるべく\lくさむらを よけて あるくと いいよ!{EOS}"
	.if (. - gText_Rom_2149AA) > 0x4c
	.error "gText_Rom_2149AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2149AA) < 0x4c
	.space 0x4c - (. - gText_Rom_2149AA)
	.endif
