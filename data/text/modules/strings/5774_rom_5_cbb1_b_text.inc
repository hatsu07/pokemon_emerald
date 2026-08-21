	@ src/strings.c:589 gText_OnlyOnePhrase
	.globl gText_Rom_5CBB1B
gText_Rom_5CBB1B: @ 0x085CBB1B
	.string "かえられる ことばは 1つ までです!{EOS}"
	.if (. - gText_Rom_5CBB1B) > 0x14
	.error "gText_Rom_5CBB1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBB1B) < 0x14
	.space 0x14 - (. - gText_Rom_5CBB1B)
	.endif
