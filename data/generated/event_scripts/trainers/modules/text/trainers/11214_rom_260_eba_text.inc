	@ data/text/trainers.inc:2903 Route127_Text_DonnyDefeat (+1 aliases)
	.globl gText_Rom_260EBA
gText_Rom_260EBA: @ 0x08260EBA
	.string "あぁ すっごく くやしい!{EOS}"
	.if (. - gText_Rom_260EBA) > 0xe
	.error "gText_Rom_260EBA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260EBA) < 0xe
	.space 0xe - (. - gText_Rom_260EBA)
	.endif
