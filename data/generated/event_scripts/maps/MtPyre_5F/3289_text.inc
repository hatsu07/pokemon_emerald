	@ data/maps/MtPyre_5F/scripts.inc:11 MtPyre_4F_Text_TashaIntro (+1 aliases)
	.globl gText_Rom_216912
gText_Rom_216912: @ 0x08216912
	.string "こわいものが すきで……\nすきで すきで たまらない……\pあたし ここに いると\nこわくて ふるえるの……{EOS}"
	.if (. - gText_Rom_216912) > 0x36
	.error "gText_Rom_216912 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216912) < 0x36
	.space 0x36 - (. - gText_Rom_216912)
	.endif
