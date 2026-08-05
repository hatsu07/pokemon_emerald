	@ data/text/trainers.inc:2777 Route125_Text_IrisIntro (+1 aliases)
	.globl gText_Rom_260A0E
gText_Rom_260A0E: @ 0x08260A0E
	.string "ナホ『センパイ\nこんな ところに なにが あるんですかぁ?$"
	.if (. - gText_Rom_260A0E) > 0x1e
	.error "gText_Rom_260A0E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260A0E) < 0x1e
	.space 0x1e - (. - gText_Rom_260A0E)
	.endif
