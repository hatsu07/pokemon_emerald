	@ data/text/match_call.inc:733 MatchCall_Text_May2
	.globl gText_Rom_26ACBD
gText_Rom_26ACBD: @ 0x0826ACBD
	.string "ハルカ『ねえねえ {PLAYER}{KUN}!\pトウカや ムロみたいな\nちいさい まちに ジムが あるのに\pおおきな みなとまちの カイナには\nなぜか ジムが ないのよね\pいつか ジムが できたら あたし\nジムリーダーに りっこうほ しよっかなー"
	.byte EOS
	.if (. - gText_Rom_26ACBD) > 0x73
	.error "gText_Rom_26ACBD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26ACBD) < 0x73
	.space 0x73 - (. - gText_Rom_26ACBD)
	.endif
