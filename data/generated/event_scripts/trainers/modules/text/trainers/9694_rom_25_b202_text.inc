	@ data/text/trainers.inc:689 Route109_Text_MelIntro (+1 aliases)
	.globl gText_Rom_25B202
gText_Rom_25B202: @ 0x0825B202
	.string "シキ『あたしたちが ラブラブだから\nホウエンは あっついのよお!{EOS}"
	.if (. - gText_Rom_25B202) > 0x21
	.error "gText_Rom_25B202 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B202) < 0x21
	.space 0x21 - (. - gText_Rom_25B202)
	.endif
