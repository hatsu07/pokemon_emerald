	@ asm/berry_crush.s:4221 sub_08022A78 (+2 aliases)
	.globl gText_Rom_5CC8A0
gText_Rom_5CC8A0: @ 0x085CC8A0
	.string "きのみクラッシュを　はじめます\nつかう　きのみを　えらんでください\p{EOS}"
	.if (. - gText_Rom_5CC8A0) > 0x23
	.error "gText_Rom_5CC8A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC8A0) < 0x23
	.space 0x23 - (. - gText_Rom_5CC8A0)
	.endif
