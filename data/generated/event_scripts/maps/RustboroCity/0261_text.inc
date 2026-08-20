	@ data/maps/RustboroCity/scripts.inc:1124 RustboroCity_Text_PleaseComeWithMe
	.globl gText_Rom_1DF6F2
gText_Rom_1DF6F2: @ 0x081DF6F2
	.string "きみ! きみ!\nわたしに ついてきて ください!{EOS}"
	.if (. - gText_Rom_1DF6F2) > 0x19
	.error "gText_Rom_1DF6F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF6F2) < 0x19
	.space 0x19 - (. - gText_Rom_1DF6F2)
	.endif
