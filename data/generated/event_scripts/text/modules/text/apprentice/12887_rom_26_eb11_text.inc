	@ data/text/apprentice.inc:247 gText_ApprenticeThanksNoHeldItem0
	.globl gText_Rom_26EB11
gText_Rom_26EB11: @ 0x0826EB11
	.string "わっ わかりました!\nきまって うれしいです うぉぉーん!\pじゃあ ありがとう ございました!"
	.byte EOS
	.if (. - gText_Rom_26EB11) > 0x30
	.error "gText_Rom_26EB11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EB11) < 0x30
	.space 0x30 - (. - gText_Rom_26EB11)
	.endif
