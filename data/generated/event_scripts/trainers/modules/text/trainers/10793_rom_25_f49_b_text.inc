	@ data/text/trainers.inc:2273 Route121_Text_WalterRegister
	.globl gText_Rom_25F49B
gText_Rom_25F49B: @ 0x0825F49B
	.string "あなたの うでまえは たいしたものだ\nぜひ きねんに とうろくを……{EOS}"
	.if (. - gText_Rom_25F49B) > 0x23
	.error "gText_Rom_25F49B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F49B) < 0x23
	.space 0x23 - (. - gText_Rom_25F49B)
	.endif
