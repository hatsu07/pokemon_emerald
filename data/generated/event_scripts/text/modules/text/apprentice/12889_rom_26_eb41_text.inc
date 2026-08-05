	@ data/text/apprentice.inc:250 gText_ApprenticeThanksHeldItem0
	.globl gText_Rom_26EB41
gText_Rom_26EB41: @ 0x0826EB41
	.string "よ よかった\n{STR_VAR_1}なら もってるかも……\lきまって うれしいです うぉぉーん!\pじゃあ ありがとう ございました!"
	.byte EOS
	.if (. - gText_Rom_26EB41) > 0x3a
	.error "gText_Rom_26EB41 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EB41) < 0x3a
	.space 0x3a - (. - gText_Rom_26EB41)
	.endif
