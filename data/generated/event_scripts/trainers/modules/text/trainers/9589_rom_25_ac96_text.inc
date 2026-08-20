	@ data/text/trainers.inc:536 Route108_Text_MissyDefeated (+1 aliases)
	.globl gText_Rom_25AC96
gText_Rom_25AC96: @ 0x0825AC96
	.string "しょうぶに まけると\nストレスが たまるーっ!{EOS}"
	.if (. - gText_Rom_25AC96) > 0x18
	.error "gText_Rom_25AC96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AC96) < 0x18
	.space 0x18 - (. - gText_Rom_25AC96)
	.endif
