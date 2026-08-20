	@ data/text/trainers.inc:2984 Route128_Text_IsaiahRegister
	.globl gText_Rom_2611DE
gText_Rom_2611DE: @ 0x082611DE
	.string "こんな ボク ですけど\nいつかは かてると おもうんです\lポケナビの とうろくを してください……!{EOS}"
	.if (. - gText_Rom_2611DE) > 0x33
	.error "gText_Rom_2611DE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2611DE) < 0x33
	.space 0x33 - (. - gText_Rom_2611DE)
	.endif
