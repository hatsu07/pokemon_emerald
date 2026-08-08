
	@ trainerbattle-cfg:0x23C4F1 TrainerBattleText_23C6D7
	.globl gText_Rom_23C6D7
gText_Rom_23C6D7: @ 0x0823C6D7
	.string "この　うみのいえで　いちばん\nあつい　ポケモンしょうぶが　できるのは\lこの　オレさま　だぜ！！"
	.byte EOS
	.if (. - gText_Rom_23C6D7) > 0x30
	.error "gText_Rom_23C6D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23C6D7) < 0x30
	.space 0x30 - (. - gText_Rom_23C6D7)
	.endif

	@ trainerbattle-cfg:0x23C4F1 TrainerBattleText_23C707
	.globl gText_Rom_23C707
gText_Rom_23C707: @ 0x0823C707
	.string "たしかに　あつい　しょうぶ　だった\nまけて　なっとく　って　かんじ　だぜ！"
	.byte EOS
	.if (. - gText_Rom_23C707) > 0x26
	.error "gText_Rom_23C707 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23C707) < 0x26
	.space 0x26 - (. - gText_Rom_23C707)
	.endif
