	@ data/maps/FortreeCity_Gym/scripts.inc:166 FortreeCity_Gym_Text_EdwardoIntro (+1 aliases)
	.globl gText_Rom_204690
gText_Rom_204690: @ 0x08204690
	.string "とりポケモンを あいする ものは\nこの ジムを もくひょうと している!\pヒワマキ ジムの いちいん として\nまける わけには いかないんだ!{EOS}"
	.if (. - gText_Rom_204690) > 0x48
	.error "gText_Rom_204690 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204690) < 0x48
	.space 0x48 - (. - gText_Rom_204690)
	.endif
