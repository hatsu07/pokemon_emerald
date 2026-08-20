	@ data/text/trainers.inc:2897 Route127_Text_CamdenPostBattle
	.globl gText_Rom_260E7A
gText_Rom_260E7A: @ 0x08260E7A
	.string "いい しょうぶを した あとは\nすがすがしい きもちに なるなー{EOS}"
	.if (. - gText_Rom_260E7A) > 0x21
	.error "gText_Rom_260E7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260E7A) < 0x21
	.space 0x21 - (. - gText_Rom_260E7A)
	.endif
