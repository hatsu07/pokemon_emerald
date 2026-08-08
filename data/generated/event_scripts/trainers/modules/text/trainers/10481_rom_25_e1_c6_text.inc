	@ data/text/trainers.inc:1817 Route117_Text_MegPostRematch
	.globl gText_Rom_25E1C6
gText_Rom_25E1C6: @ 0x0825E1C6
	.string "リコ『センパイと いっしょに たたかったのに\nまけるだなんて…… おちこんじゃう!$"
	.if (. - gText_Rom_25E1C6) > 0x2a
	.error "gText_Rom_25E1C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E1C6) < 0x2a
	.space 0x2a - (. - gText_Rom_25E1C6)
	.endif
