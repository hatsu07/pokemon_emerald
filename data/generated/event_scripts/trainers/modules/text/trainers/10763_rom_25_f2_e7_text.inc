	@ data/text/trainers.inc:2228 Route120_Text_RileyIntro (+1 aliases)
	.globl gText_Rom_25F2E7
gText_Rom_25F2E7: @ 0x0825F2E7
	.string "ぼくたち ニンジャごっこの かくれぬの!\nどこに いるのか わからなかっただろ!{EOS}"
	.if (. - gText_Rom_25F2E7) > 0x29
	.error "gText_Rom_25F2E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F2E7) < 0x29
	.space 0x29 - (. - gText_Rom_25F2E7)
	.endif
