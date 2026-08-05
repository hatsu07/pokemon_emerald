	@ data/text/trainers.inc:638 Route109_Text_LolaRegister
	.globl gText_Rom_25B01B
gText_Rom_25B01B: @ 0x0825B01B
	.string "わたし だったら\nまいにち ここに きているよ!$"
	.if (. - gText_Rom_25B01B) > 0x19
	.error "gText_Rom_25B01B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B01B) < 0x19
	.space 0x19 - (. - gText_Rom_25B01B)
	.endif
