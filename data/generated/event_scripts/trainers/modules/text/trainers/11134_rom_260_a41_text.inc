	@ data/text/trainers.inc:2783 Route125_Text_IrisPostBattle
	.globl gText_Rom_260A41
gText_Rom_260A41: @ 0x08260A41
	.string "ナホ『センパイ…… ほんとに\nあさせのほらあなに はいりますぅ?\lぬれちゃいますよぉ?$"
	.if (. - gText_Rom_260A41) > 0x2c
	.error "gText_Rom_260A41 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260A41) < 0x2c
	.space 0x2c - (. - gText_Rom_260A41)
	.endif
