	@ data/text/trainers.inc:3068 Route129_Text_ChasePostBattle
	.globl gText_Rom_26154D
gText_Rom_26154D: @ 0x0826154D
	.string "きんちょう していたら\nじつりょくが だせないよな!{EOS}"
	.if (. - gText_Rom_26154D) > 0x1b
	.error "gText_Rom_26154D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26154D) < 0x1b
	.space 0x1b - (. - gText_Rom_26154D)
	.endif
