	@ data/maps/FortreeCity_Gym/scripts.inc:182 FortreeCity_Gym_Text_FlintIntro (+1 aliases)
	.globl gText_Rom_204727
gText_Rom_204727: @ 0x08204727
	.string "ジムリーダーの ナギさんの\nてを わずらわせるまでも ない!\pきみの あいては オレで じゅうぶん!{EOS}"
	.if (. - gText_Rom_204727) > 0x33
	.error "gText_Rom_204727 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204727) < 0x33
	.space 0x33 - (. - gText_Rom_204727)
	.endif
