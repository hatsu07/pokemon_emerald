	@ src/data/easy_chat/easy_chat_group_lifestyle.h:178 easy_chat_group_lifestyle_line_178 (+1 aliases)
	.globl gText_Rom_5CAD74
gText_Rom_5CAD74: @ 0x085CAD74
	.string "どうぐ$"
	.if (. - gText_Rom_5CAD74) > 0x4
	.error "gText_Rom_5CAD74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAD74) < 0x4
	.space 0x4 - (. - gText_Rom_5CAD74)
	.endif
