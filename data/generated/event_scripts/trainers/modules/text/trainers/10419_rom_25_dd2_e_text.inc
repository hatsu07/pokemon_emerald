	@ data/text/trainers.inc:1727 Route117_Text_DylanPostBattle
	.globl gText_Rom_25DD2E
gText_Rom_25DD2E: @ 0x0825DD2E
	.string "まいったな……\pいまの しょうぶの あいだに\nビリに なっちゃったかも……?$"
	.if (. - gText_Rom_25DD2E) > 0x27
	.error "gText_Rom_25DD2E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DD2E) < 0x27
	.space 0x27 - (. - gText_Rom_25DD2E)
	.endif
